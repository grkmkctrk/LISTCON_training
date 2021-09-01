#ifndef __UTILITY_HPP__
#define __UTILITY_HPP__

// includes
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <vector>

#include <ctime>
#include <cstdlib>

//decleration
void Randomize();
std::string srandom();
bool mypred(const std::string &r1, const std::string &r2);
bool mpred(const std::string &r1, const std::string &r2);
bool mpredSame(const std::string &r1, const std::string &r2);

// class 

class LenClass{
private:
    int mLen;
public:
    LenClass(int len) : mLen(len){

    }

    bool operator()(const std::string &r){
        return r.size() == mLen;
    }
};

//===//
template<class Gcon>
void cfill(Gcon &con, int size){
    std::generate_n(std::inserter(con, con.begin()), size, srandom);
}

template<class Gcon>
void cdisplay(const Gcon &con){

    auto i = con.begin(); 
    while(i != con.end()){
        std::cout << *i << " ";
        i++;
    }std::cout << std::endl;
    
}

// ver2 main

template<class it, class s>
it myFind(it begin, it end, const s &st){
    while (begin != end){
        if(st == *begin){ return begin; }
        begin++;
    }
    return begin; 
}

template<class it, class s>
it myFind1(it begin, it end, const s &st){
    while (begin != end && st != *begin){
        begin++;
    }
    return begin; 
}

template<class it, class s>
it myFind2(it begin, it end, const s &st){
    while (begin++ != end && *begin != st);
    return begin; 
}


// decleration ver2 predicate
bool predicateEqual(const std::string &r1, const std::string &r2);
bool predicateGreater(const std::string &r1, const std::string &r2);
bool predicateLower(const std::string &r1, const std::string &r2);
  
template<class iter, class Pred>
iter myFindIf(iter begin, iter end, Pred func){
    while(begin != end && !func(*begin, *++begin)){ 
        begin++;
    }
    return begin;
}

template<class iter, class pred>
iter myFindIfFullList(iter begin, iter end, pred func){
    while (begin != end){
        auto intIter = ++begin;
        for (;intIter != end; intIter++){
            if(!func(*begin, *intIter))
                return begin;
        }
    }
    return begin;
}
#endif