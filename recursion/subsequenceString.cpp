#include <iostream>
#include <string>

using namespace std;

/* 
    display subsequence string
    We will apply , Include and Exclude pattern for this problem

 */
void findSubsequenceString(string str, string outputString, int index) {

    // base case 
    if(index >= str.length()) {
        cout << "--> " << outputString << endl ;
        return ;
    }

    // exclude the character 
    findSubsequenceString(str,outputString,index+1);

    // include the character 
    char extractCharFromIndex = str[index];
    // include the extracted character into the output string 
    outputString.push_back(extractCharFromIndex);

    findSubsequenceString(str,outputString,index+1);
}


int main() {

    string subsequenceString = "xyz";
    string outputString = "";
    int index = 0;
    findSubsequenceString(subsequenceString,outputString,index);
    return 0;
}