/*
EX 1
#include "utilityClass.hpp"

using namespace std;


int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);

    cdisplay(slist);
    
    string s;
    cout << "The name needs to search : ";
    cin >> s;

    list<string>::iterator it_s = slist.begin();

    it_s = myFind(slist.begin(), slist.end(), s);

    cout << "Searched name is : " << *it_s << endl;

    return 0;
}
EX 1
*/

/*
EX 1.1

#include "utilityClass.hpp"

using namespace std;


int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);

    cdisplay(slist);
    
    string s;
    cout << "The name needs to search : ";
    cin >> s;

    list<string>::iterator it_s = slist.begin();

    it_s = myFind(slist.begin(), slist.end(), s);

    cout << "Searched name is : " << *it_s << endl;

    if(it_s != slist.end()){
        slist.erase(it_s);
    }

    cdisplay(slist);

    return 0;
} 
EX 1.1
*/

/*
EX 2

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);
    cdisplay(slist);

    string s;

    cout << "The name needs to be found : ";
    cin >> s;

    list<string>::iterator iter = slist.begin();

    // iter = myFind(slist.begin(), slist.end(), s);
    // cout << *iter << endl;

    while(iter != slist.end()){
        iter = myFind(slist.begin(), slist.end(), s);
        
        if(iter != slist.end()){
            slist.erase(iter);
        }
        cdisplay(slist);
    }

    return 0;
}
EX 2
*/

/*
EX 3

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);
    cdisplay(slist);

    list<string>::iterator iter = slist.begin();

    cout << "Deleting process is started" << endl;

    while (iter != slist.end()){

        iter = myFindIf(slist.begin(), slist.end(), &predicate);

        if(iter != slist.end()){
            slist.erase(iter);
        }
        cdisplay(slist);
    }
    

    cout << "Deleting process is ended" << endl;

    return 0;
}
EX 3
*/

/*
EX 3.1

#include "utilityClass.hpp"

using namespace std;


int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);
    cdisplay(slist);

    list<string>::iterator iter = slist.begin();

    cout << "Deletion process is started" << endl;

    while (iter != slist.end()){

        iter = myFindIfUpdated(slist.begin(), slist.end(), &predicate);

        if(iter != slist.end()){
            slist.erase(iter);
        }
        cdisplay(slist);
    }
    

    cout << "Deletion process is ended" << endl;

    return 0;
}

EX 3.1
*/


/*
EX 3.2

#include "utilityClass.hpp"

using namespace std;


int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 50);
    cdisplay(slist);

    list<string>::iterator iter = slist.begin();

    cout << "Deletion process is started" << endl;

    while (iter != slist.end()){

        iter = myFindIfUpdated(slist.begin(), slist.end(), &predicateLower);

        if(iter != slist.end()){
            slist.erase(iter);
        }
        cdisplay(slist);
    }
    

    cout << "Deletion process is ended" << endl;

    return 0;
}
EX 3.2
*/

/*
EX 3.3

#include "utilityClass.hpp"

using namespace std;


int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 10);
    cdisplay(slist);

    list<string>::iterator iter = slist.begin();

    cout << "Deletion process is started" << endl;

    while (iter != slist.end()){

        iter = myFindIfFullList(slist.begin(), slist.end(), &predicateLower);

        if(iter != slist.end()){
            slist.erase(iter);
        }
        cdisplay(slist);
    }
    

    cout << "Deletion process is ended" << endl;

    return 0;
}

EX 3.3
*/


/*
EX 4


#include "utilityClass.hpp"

using namespace std;

int main(){

    vector<string> sVec;
    list<string> sList;

    Randomize();

    cfill(sVec, 10);
    cfill(sList, 10);
    
    cdisplay(sVec);
    cdisplay(sList);

    // sList = sVec;
    // sList.operator=(sVec) // There are not proper usage
                             // There is not overload for this

    // sList.assign(sVec.begin(), sVec.end()); // iterator can be used
    sVec.assign(sList.begin(), sList.end()); // iterator can be used
    
    cdisplay(sVec);
    cdisplay(sList); 



    return 0;
}
EX 4
*/

/*
EX5

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> sList;

    Randomize();

    cfill(sList, 10);

    cdisplay(sList);

    sList.resize(20, "Ali");

    cdisplay(sList);


    return 0;
}
EX5
*/

/*
EX6

#include "utilityClass.hpp"

using namespace std;

int main(){

    const char *p[5] = {"x", "y", "z", "a", "b"};

    list<string> sList;

    Randomize();

    cfill(sList, 10);
    cdisplay(sList);

    // sList.insert(sList.begin(), "first");
    // sList.insert(++sList.begin(), "666");
    sList.insert(sList.begin(), p, p+3);


    cdisplay(sList);

    return 0;
}

EX6
*/


/*
EX 7

#include "utilityClass.hpp"

using namespace std;

int main(){
    
    vector<string> v;

    Randomize();

    cfill(v, 10);

    cdisplay(v);

    string s;

    cout << "The name needs to be deleted : ";
    cin >> s;

    // When want to delete something then STD ignore it
    // it is mean the the something is not deleted physically
    // it just ignored at pointer level 
    remove(v.begin(), v.end(), s);

    cdisplay(v);



    return 0;
}
EX 7
*/

/*
EX 7.1

#include "utilityClass.hpp"

using namespace std;

int main(){
    
    vector<string> v;

    Randomize();

    cfill(v, 10);

    cdisplay(v);


    while (v.size() != 0){
        string s;
        cout << "The name needs to be deleted : ";
        cin >> s;

        // When want to delete something then STL ignore it
        // it is mean the something is not deleted physically
        // it just ignored at pointer level 
        remove(v.begin(), v.end(), s);
        cdisplay(v);
    }


    return 0;
}
EX 7.1
*/

/*
EX 8

#include "utilityClass.hpp"

using namespace std;

int main(){
    
    vector<string> v;

    Randomize();

    cfill(v, 10);

    cdisplay(v);


    while (v.size() != 0){
        string s;
        cout << "The name needs to be deleted : ";
        cin >> s;
        v.erase(remove(v.begin(), v.end(), s), v.end());
        cdisplay(v);
    }


    return 0;
}
EX 8
*/

/*
EX 9

#include "utilityClass.hpp"

using namespace std;

// Lexicographical compare algorithm

int main(){

    vector<string> sVec(3);

    sVec[0] = "a";
    sVec[1] = "b";
    sVec[2] = "c";

    list<string> sList(sVec.begin(), sVec.end());

    cout << "Displaying vec...." << endl;
    cdisplay(sVec);
    cout << "\nDisplaying list...." << endl;
    cdisplay(sList);

    cout << "Comparison for sLisc/sVec...." << endl;

    cout << boolalpha << lexicographical_compare(sVec.begin(), sVec.end(), sList.begin(), sList.end()) << endl;
    // lexicographical_compare only evaluate either one word is bigger than other string
    return 0;
}

EX 9
*/

/*
EX10

#include "utilityClass.hpp"

using namespace std;

int main(){

    vector<string> sVec(3);

    sVec[0] = "a";
    sVec[1] = "b";
    sVec[2] = "c";

    list<string> sList(sVec.begin(), sVec.end());

    cout << "Comparison is began!" << endl;

    cout << boolalpha << equal(sVec.begin(), sVec.end(), sList.begin(), sList.end()) << endl;

    return 0;
}

EX10
*/

/*
EX 11

EX 11
*/

#include "utilityClass.hpp"

using namespace std;

int main(){

    vector<string> sVec(3);

    sVec[0] = "a";
    sVec[1] = "b";
    sVec[2] = "c";

    list<string> sList(sVec.begin(), sVec.end());

    pair<vector<string>::iterator, list<string>::iterator> mismPair;

    cout << "Comparison is began!" << endl;
    sList.back() = "Gorkem";

    mismPair = mismatch(sVec.begin(), sVec.end(), sList.begin());
    // shows us differences in same index
    cout << boolalpha << *mismPair.first << endl;
    cout << boolalpha << *mismPair.second << endl;

    return 0;
}