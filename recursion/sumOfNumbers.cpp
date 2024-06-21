#include <iostream>
using namespace std;

int sum(int n) {
    // base case
    if(n ==1) return n;

    
    int ans = n + sum(n-1);

    return ans;
}


int main() {

    cout << "Sum of Numbers : " << sum(5) << endl;
    return 0;
}