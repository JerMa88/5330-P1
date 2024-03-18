#include "match.h"

// Constructor
Match::Match(size_t hostId, size_t guestId, std::string start, std::string end, bool hostWin, size_t preRatingHost, size_t preRatingGuest, size_t postRatingHost, size_t postRatingGuest){
    this->hostId = hostId;
    this->guestId = guestId;
    this->start = start;
    this->end = end;
    this->hostWin = hostWin;
    this->preRatingHost = preRatingHost;
    this->preRatingGuest = preRatingGuest;
    this->postRatingHost = postRatingHost;
    this->postRatingGuest = postRatingGuest;
}

// Getters
size_t Match::getHostId(){
    return hostId;
}

size_t Match::getGuestId(){
    return guestId;
}

std::string Match::getStart(){
    return start;
}

std::string Match::getEnd(){
    return end;
}

bool Match::getHostWin(){
    return hostWin;
}

size_t Match::getPreRatingHost(){
    return preRatingHost;
}

size_t Match::getPreRatingGuest(){
    return preRatingGuest;
}

size_t Match::getPostRatingHost(){
    return postRatingHost;
}

size_t Match::getPostRatingGuest(){
    return postRatingGuest;
}

// Setters
void Match::setHostId(size_t hostId){
    this->hostId = hostId;
}

void Match::setGuestId(size_t guestId){
    this->guestId = guestId;
}

void Match::setStart(std::string start){
    this->start = start;
}

void Match::setEnd(std::string end){
    this->end = end;
}

void Match::setHostWin(bool hostWin){
    this->hostWin = hostWin;
}

void Match::setPreRatingHost(size_t preRatingHost){
    this->preRatingHost = preRatingHost;
}

void Match::setPreRatingGuest(size_t preRatingGuest){
    this->preRatingGuest = preRatingGuest;
}

void Match::setPostRatingHost(size_t postRatingHost){
    this->postRatingHost = postRatingHost;
}

void Match::setPostRatingGuest(size_t postRatingGuest){
    this->postRatingGuest = postRatingGuest;
}
