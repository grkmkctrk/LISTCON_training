#include "utilityClass.hpp"

using namespace std;

void Randomize(){ srand(static_cast<unsigned>(time(0)));}

string srandom(){
    
static const char *const pNames[] = {
                                        "Gorkem",
                                        "Berathan",
                                        "Berda",
                                        "Ramazan",
                                        "Ahmetcan",
                                        "Melihcan",
                                        "Burak",
                                        "Emir",
                                        "Eymen",
                                        "Miray",
                                        "Zeynep",
                                        "Goktug"};

    size_t size = sizeof(pNames) / sizeof(*pNames);

    return pNames[rand() % size];
}

// Predicates
bool mypred(const std::string &r1, const std::string &r2){
    return r1.size() < r2.size() || !(r2.size() < r1.size()) && r1 < r2;
}

bool mpred(const std::string &r1, const std::string &r2){
    return r1.size() == r2.size();
}

bool mpredSame(const std::string &r1, const std::string &r2){
    return r1 == r2;
}


// ver2 predicate

bool predicateEqual(const std::string &r1, const std::string &r2){
    return r1.size() == r2.size(); 
}

bool predicateGreater(const std::string &r1, const std::string &r2){
    return r1.size() < r2.size();
}

bool predicateLower(const std::string &r1, const std::string &r2){
    return r1.size() > r2.size();
}

