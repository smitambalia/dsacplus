#include <iostream>
#include <stack>

using namespace std;

int main () {
    stack<int> st;
    st.push(100);
    st.push(20);

    cout << st.top() << endl ;
    st.pop();
    cout << st.top() << endl ;

    return 0;
}