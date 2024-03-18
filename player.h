#include <string>

class Player{
private:
    size_t id; //ID: 8-digit code that is unique for each player
    std::string name; // Name: unique name for the team
    size_t birthdate; // Birthdate: Birth date of the player
    // yyyymmdd: example 20120327 corresponds to March 27 th, 2012. this is the same for all date attributes below)
    size_t rating; // Rating: Current rating of the player
    std::string state; // State: name of the state that the team is based in two-character abbreviations (e.g. TX, NC, VA, YY)

public:
    // Constructor
    Player(size_t id, std::string name, size_t birthdate, size_t rating, std::string state);

    // Getters
    size_t getId();
    std::string getName();
    size_t getBirthdate();
    size_t getRating();
    std::string getState();

    // Setters
    void setId(size_t id);
    void setName(std::string name);
    void setBirthdate(size_t birthdate);
    void setRating(size_t rating);
    void setState(std::string state);
    
};