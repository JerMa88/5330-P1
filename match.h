#include <string>

class Match{
private:
    size_t hostId; //player ID of “the host”
    size_t guestId; //player ID of “the guest"
    std::string start; // the date and time for the start of the match
    // (in the following format: yyyymmdd:hh:mm:ss. For example, 20240209:18:37:45 corresponds to Feb 9 th, 2024, 6:37:45pm)
    std::string end; // the date and time for the end of the match
    bool hostWin; // Hostwin: Boolean, true if the host won, false if the guest won
    size_t preRatingHost; // PreRatingHost: The rating of the host before the match
    size_t preRatingGuest; // PreRatingGuest: The rating of the guest before the match
    size_t postRatingHost; // PostRatingHost: The rating of the host after the match
    size_t postRatingGuest; // PostRatingGuest: The rating of the guest after the match

public:
    // Constructor
    Match(size_t hostId, size_t guestId, std::string start, std::string end, bool hostWin, size_t preRatingHost, size_t preRatingGuest, size_t postRatingHost, size_t postRatingGuest);

    // Getters
    size_t getHostId();
    size_t getGuestId();
    std::string getStart();
    std::string getEnd();
    bool getHostWin();
    size_t getPreRatingHost();
    size_t getPreRatingGuest();
    size_t getPostRatingHost();
    size_t getPostRatingGuest();

    // Setters
    void setHostId(size_t hostId);
    void setGuestId(size_t guestId);
    void setStart(std::string start);
    void setEnd(std::string end);
    void setHostWin(bool hostWin);
    void setPreRatingHost(size_t preRatingHost);
    void setPreRatingGuest(size_t preRatingGuest);
    void setPostRatingHost(size_t postRatingHost);
    void setPostRatingGuest(size_t postRatingGuest);

};