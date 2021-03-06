#ifndef H_COMPUTER_PLAYERS
#define H_COMPUTER_PLAYERS

#include <string>
#include "player.hpp"
#include "player_helper.hpp"
#include "card.hpp"

class ComputerPlayer: public Player {
    public:
    explicit ComputerPlayer(const std::string name);
    virtual ~ComputerPlayer() {};
    bool isComputer() const;
    virtual const std::pair<int, int> askSwapChoice() const =0;
    virtual bool askSwapCards() const =0;
    virtual const std::vector<int> 
        askMoveChoice(const PlayerHelper& helper) const =0;
    virtual int askFaceDownMoveChoice() const =0;
};

class RandomPlayer: public ComputerPlayer {
    public:
    static const std::string description;

    explicit RandomPlayer(const std::string name);
    ~RandomPlayer() {};
    const std::pair<int, int> askSwapChoice() const;
    bool askSwapCards() const;
    const std::vector<int> askMoveChoice(const PlayerHelper& helper) const;
    int askFaceDownMoveChoice() const;
};

class LowCardPlayer: public ComputerPlayer {
    public:
    static const std::string description;   

    explicit LowCardPlayer(const std::string name);
    ~LowCardPlayer() {};
    const std::pair<int, int> askSwapChoice() const;
    bool askSwapCards() const;
    const std::vector<int> askMoveChoice(const PlayerHelper& helper) const;
    int askFaceDownMoveChoice() const;
};

class HighCardPlayer: public ComputerPlayer {
    public:
    static const std::string description;   

    explicit HighCardPlayer(const std::string name);
    ~HighCardPlayer() {};
    const std::pair<int, int> askSwapChoice() const;
    bool askSwapCards() const;
    const std::vector<int> askMoveChoice(const PlayerHelper& helper) const;
    int askFaceDownMoveChoice() const;
};

class Pyromaniac: public ComputerPlayer {
    public:
    static const std::string description;   

    explicit Pyromaniac(const std::string name);
    ~Pyromaniac() {};
    const std::pair<int, int> askSwapChoice() const;
    bool askSwapCards() const;
    const std::vector<int> askMoveChoice(const PlayerHelper& helper) const;
    int askFaceDownMoveChoice() const;
};

#endif
