#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter Grade";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        /* code */
        cout << "Your grad would range between 90 and 100" << endl;
        break;
    case 'B':
        cout << "Your grad would range between 80 and 90" << endl;
        break;
    case 'C':
        cout << "Your grad would range between 70 and 80" << endl;
        break;
    case 'D':
        cout << "Your grad would range between 60 and 70" << endl;
        break;
    default:
        cout << "Your have failed the exam!" << endl;

        break;
    }
    return 0;
}