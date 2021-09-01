/*
    . Doubly linked list 
*/


/* 
EX 1

#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> li;
    //list<int>::iterator i;

    for (int i = 0 ; i < 1000; i++)
    {
        li.push_back((i*i) - (i*4) - 11);
    }
    
    for (auto i = li.begin() ; i != li.end(); i++){
        cout << *i << endl;
    }
    

    return 0;
}

EX 1
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

    slist.reverse();
    cdisplay(slist);


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

    cfill(slist, 100);

    cdisplay(slist);

    while (!slist.empty()){
        string s;

        cout << "Name needs to be deleted : ";
        cin >> s;

        auto it_list = find(slist.begin(), slist.end(), s);

        if(it_list != slist.end()) slist.remove(s);
        else cout << "!!! The list doesn't include " << s << endl;
        cdisplay(slist);

    }
    


    return 0;
}
EX 4
*/

/*
EX 5

#include "utilityClass.hpp"


using namespace std;

int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 100);
    cdisplay(slist);

    while (!slist.empty()){
        int n;

        cout << "Which length needs to be removed ? : ";
        cin >> n;

        slist.remove_if(LenClass(n));
        cdisplay(slist);  
        cout << endl;

    }

    return 0;
}
EX 5
*/

/*
EX6


#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> slist;

    Randomize();

    cfill(slist, 100);

    slist.sort(&mypred); // lambda
    cdisplay(slist);
    cout << endl;

    slist.unique(&mpred);
    cdisplay(slist);
    cout << endl;
    
    slist.unique(&mpredSame);
    cdisplay(slist);
    cout << endl;

    return 0;
}
EX6
*/

/*
EX 7

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> sList1;
    list<string> sList2;

    Randomize();

    cfill(sList1, 10);
    cfill(sList2, 10);

    cdisplay(sList1);
    cdisplay(sList2);

    sList1.sort();
    sList2.sort();

    cdisplay(sList1);
    cdisplay(sList2);

    // merge operation -> copy all things stored in any container to another container
    sList1.merge(sList2);
    cdisplay(sList1);

    return 0;
}
EX 7
*/


/*
EX8


#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> sList1;
    list<string> sList2;

    Randomize();

    cfill(sList1, 10);
    cfill(sList2, 10);

    cdisplay(sList1);
    cdisplay(sList2);

    // splice
    cout << endl;
    //sList1.splice(sList1.begin(), sList2);
    sList1.splice(sList1.end(), sList2);

    cdisplay(sList1);
    cdisplay(sList2);

    return 0;
}
EX8
*/

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<string> sList;
    Randomize();

    cfill(sList, 10);

    cdisplay(sList);
    
    // sList.erase(sList.begin());
    // sList.erase(sList.begin(), sList.end());
    // sList.erase(++sList.begin(), --sList.end());


    cdisplay(sList);


    return 0;
}

