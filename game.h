#ifndef H_GAME
#define H_GAME

#include <vector>
#include <string>
#include "player.h"
#include "card.h"

using namespace std ;

class Game {
    Player * players ;
    int numCards ;
    int numPlayers ;
    int currentPlayer ;
    vector<Card> deck ;

    static int calcNumDecks(int, int) ;
    
    public:
    Game(string[], int, int) ;
    Player getCurrentPlayer() ;
    vector<Card> getDeck() ;
} ;

#endif