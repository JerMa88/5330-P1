#include "player.h"

// Constructor
Player::Player(size_t id, std::string name, size_t birthdate, size_t rating, std::string state){
    this->id = id;
    this->name = name;
    this->birthdate = birthdate;
    this->rating = rating;
    this->state = state;
}

// Getters
size_t Player::getId(){
    return id;
}
std::string Player::getName(){
    return name;
}

size_t Player::getBirthdate(){
    return birthdate;
}

size_t Player::getRating(){
    return rating;
}

std::string Player::getState(){
    return state;
}

// Setters
void Player::setId(size_t id){
    this->id = id;
}

void Player::setName(std::string name){
    this->name = name;
}

void Player::setBirthdate(size_t birthdate){
    this->birthdate = birthdate;
}

void Player::setRating(size_t rating){
    this->rating = rating;
}

void Player::setState(std::string state){
    this->state = state;
}
