#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> st;

    st.insert(10);
    st.insert(40);
    st.insert(30);
    st.insert(40);

    for(int item: st) {
        cout << item << endl ;
    }

    return 0;
}