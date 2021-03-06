#pragma once
#include "Player.hpp"

namespace pandemic{
    class FieldDoctor: public Player{

    public:
        FieldDoctor(Board& board, City city)
            : Player(board, city){}

        FieldDoctor& treat(City);
        const std::string role() {return "FieldDoctor";}
    };
}