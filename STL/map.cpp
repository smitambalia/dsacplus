#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main () {

    // creation 
    map<string,string> table;

    table["fName"] = "Smit";
    table.insert(make_pair("lName","Ambalia"));

    pair<string,string> pr;
    pr.first = "city";
    pr.second = "JJP";
    table.insert(pr);

    cout << "Size : " << table.size() << endl ;

    for(pair<string,string> item : table) {
        cout << "Key: " << item.first << " " << endl ;
        cout << "Value: " << item.second << " " << endl ;

    }

    if(table.find("city") != table.end()) {

        cout << "Key is found" << endl ;
    }
    else {
        cout << "Key is  not found" << endl ;

    }
    return 0;
}
