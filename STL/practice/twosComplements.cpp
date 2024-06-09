#include <iostream>
#include <vector>

using namespace std;

vector<int> findTwosComplement(vector<int> numbers)
{

    int size = numbers.size();
    vector<int> twosComplement(size + 1, 0);
    int carry = 1, k;

    // 1's complement
    for (int index =  size -1,  k = twosComplement.size() ; index >= 0, k >= 0 ; index--, k--)
    {
        twosComplement[k] = (numbers[index] == 0) ? 1 : 0;
    }

    cout << "1's complement " << endl;
    
    // 2's complement
    for (int i = twosComplement.size() - 1; i >= 0; i--)
    {
        int sum = twosComplement[i] + carry;
        twosComplement[i] = sum % 2;
        cout << twosComplement[i] << " " << sum << " " << carry ;
        carry = sum / 2;
        cout << endl ;
        if(carry == 0 ) break;

    }
    // if(carry) twosComplement[0] = carry ;
    return twosComplement;
}

int main()
{

    vector<int> numbers = {0, 0, 0, 0};

    vector<int> twosComplement = findTwosComplement(numbers);

    for (int i=0; i < twosComplement.size();i++) {

        cout << twosComplement[i] << " ";

    }
    
    return 0;
}
