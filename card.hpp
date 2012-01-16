#ifndef H_CARD
#define H_CARD

#include <string>
#include <vector>

enum cardrank { TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
                JACK, QUEEN, KING, ACE };

enum cardsuit { HEARTS, SPADES, DIAMONDS, CLUBS };

class Card {
    cardrank rank_;
    cardsuit suit_;
   
    public:
    Card(cardrank, cardsuit);

    std::string toString() const;
    bool operator==(const Card&) const;
    bool operator!=(const Card&) const;
    cardrank rank() const;
    bool special() const;
    bool isInvisible() const;
    bool isBurnCard() const;
    bool isMissAGoCard() const;
    bool equalsRank(Card card) const;

    static bool shCompare(Card *c1, Card *c2);   
    static bool allRanksEqual(const std::vector<Card *>&);
    
    private:
    std::string rankStr() const;
    std::string suitStr() const;
};    

std::ostream& operator<<(std::ostream&, const Card&);

#endif
