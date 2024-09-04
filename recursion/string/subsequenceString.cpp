#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * Recursion Class - 3 
 * Type - String with recursion
 * Pattern - include , exclude 
 */
/**
 *  Display subsequence string
 *  We will apply , Include and Exclude pattern for this problem
 */

void findSubsequenceString(string str, string outputString, int index,vector<string>& ans) {

    // base case 
    if(index >= str.length()) {
        ans.push_back(outputString);
        return ;
    }

    // exclude the character 
    findSubsequenceString(str,outputString,index+1,ans);

    // include the character 
    char extractCharFromIndex = str[index];
    // include the extracted character into the output string 
    outputString.push_back(extractCharFromIndex);

    findSubsequenceString(str,outputString,index+1,ans);
}


int main() {

    string subsequenceString = "xy";
    string outputString = "";
    int index = 0;
    vector<string> ans;
    findSubsequenceString(subsequenceString,outputString,index,ans);

    // printing sub sequence string
    for(string subsequence : ans) {
        cout << "-> " << subsequence << endl;
    }
    return 0;
}