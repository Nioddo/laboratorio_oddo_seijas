#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

enum class Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
enum class Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card {
public:
    Card(Rank r = Rank::ACE, Suit s = Suit::CLUBS, bool ifu = true) : rank(r), suit(s), isFaceUp(ifu) {}

    void Flip() {
        isFaceUp = !isFaceUp;
    }

    int GetValue() const {
        if (!isFaceUp) {
            return 0;
        }
        int value = 0;
        if (static_cast<int>(rank) > 10) {
            value = 10;
        } else {
            value = static_cast<int>(rank);
        }
        return value;
    }

    void LoadTexture() {
        std::string filename = "images/";
        filename += GetRankName(rank);
        filename += GetSuitName(suit);
        filename += ".png";
        if (!texture.loadFromFile(filename)) {
            std::cerr << "Error cargando la imagen: " << filename << std::endl;
        }
    }

    sf::Texture& GetTexture() {
        return texture;
    }

private:
    Rank rank;
    Suit suit;
    bool isFaceUp;
    sf::Texture texture;

    std::string GetRankName(Rank r) {
        switch (r) {
            case Rank::ACE: return "ace";
            case Rank::TWO: return "2";
            case Rank::THREE: return "3";
            case Rank::FOUR: return "4";
            case Rank::FIVE: return "5";
            case Rank::SIX: return "6";
            case Rank::SEVEN: return "7";
            case Rank::EIGHT: return "8";
            case Rank::NINE: return "9";
            case Rank::TEN: return "10";
            case Rank::JACK: return "jack";
            case Rank::QUEEN: return "queen";
            case Rank::KING: return "king";
        }
    }

    std::string GetSuitName(Suit s) {
        switch (s) {
            case Suit::CLUBS: return "c";
            case Suit::DIAMONDS: return "d";
            case Suit::HEARTS: return "h";
            case Suit::SPADES: return "s";
        }
    }
};

class Hand {
public:
    Hand() {
        cards.reserve(7);
    }

    virtual ~Hand() {
        Clear();
    }

    void Add(Card* pCard) {
        cards.push_back(pCard);
    }

    void Clear() {
        for (auto& card : cards) {
            delete card;
            card = nullptr;
        }
        cards.clear();
    }

    int GetTotal() const {
        if (cards.empty()) {
            return 0;
        }
        if (cards[0]->GetValue() == 0) {
            return 0;
        }
        int total = 0;
        bool containsAce = false;
        for (auto& card : cards) {
            total += card->GetValue();
            if (card->GetValue() == static_cast<int>(Rank::ACE)) {
                containsAce = true;
            }
        }
        if (containsAce && total <= 11) {
            total += 10;
        }
        return total;
    }

    const std::vector<Card*>& GetCards() const {
        return cards;
    }

protected:
    std::vector<Card*> cards;
};

class GenericPlayer : public Hand {
public:
    virtual bool IsHitting() const = 0;

    bool IsBusted() const {
        return GetTotal() > 21;
    }

    void Bust() const {
        std::cout << "Bust! " << std::endl;
    }

    int GetPoints() const {
        return GetTotal();
    }
};

class Player : public GenericPlayer {
public:
    bool IsHitting() const override {
        std::cout << "¿Quieres tomar otra carta? (S/N): ";
        char response;
        std::cin >> response;
        return (response == 's' || response == 'S');
    }

    void Win() const {
        std::cout << "¡Ganaste!" << std::endl;
    }

    void Lose() const {
        std::cout << "Perdiste." << std::endl;
    }

    void Push() const {
        std::cout << "Empate." << std::endl;
    }
};

class House : public GenericPlayer {
public:
    bool IsHitting() const override {
        return GetTotal() <= 16;
    }

    void FlipFirstCard() {
        if (!cards.empty()) {
            cards[0]->Flip();
        } else {
            std::cout << "No hay carta para voltear!" << std::endl;
        }
    }
};

class Deck : public Hand {
public:
    Deck() {
        cards.reserve(52);
        Populate();
    }

    virtual ~Deck() {}

    void Populate() {
        Clear();
        for (int s = 0; s < static_cast<int>(Suit::SPADES); ++s) {
            for (int r = 1; r <= static_cast<int>(Rank::KING); ++r) {
                Add(new Card(static_cast<Rank>(r), static_cast<Suit>(s)));
            }
        }
    }

    void Shuffle() {
        std::random_shuffle(cards.begin(), cards.end());
    }

    void Deal(Hand& aHand) {
        if (!cards.empty()) {
            aHand.Add(cards.back());
            cards.pop_back();
        } else {
            std::cout << "No hay cartas en el mazo. No puedo repartir." << std::endl;
        }
    }
};

bool PlayBlackjack() {
    Deck deck;
    deck.Shuffle();

    House house;
    Player player;

    deck.Deal(player);
    deck.Deal(house);
    deck.Deal(player);
    deck.Deal(house);

    sf::RenderWindow window(sf::VideoMode(800, 600), "Blackjack");

    sf::Texture backTexture;
    if (!backTexture.loadFromFile("images/back.png")) {
        std::cerr << "Error cargando la imagen de la carta de dorso." << std::endl;
        return false;
    }
    sf::Sprite backSprite(backTexture);
    backSprite.setPosition(20, 20);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(backSprite);

        window.display();
    }

    return true;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    bool playAgain = true;
    while (playAgain) {
        playAgain = PlayBlackjack();
        std::cout << "¿Quieres jugar de nuevo? (S/N): ";
        char response;
        std::cin >> response;
        playAgain = (response == 's' || response == 'S');
    }
    return 0;
}
