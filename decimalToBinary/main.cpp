#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int decimal)
{
    //  division method
    int reminder, convertedBinary = 0, count = 0;
    while (decimal > 0)
    {
        reminder = decimal % 2;
        convertedBinary = (reminder * pow(10, count)) + convertedBinary;
        cout << "Reminder " << reminder << endl;
        cout << "Binary " << convertedBinary << endl;
        count++;
        decimal /= 2;
    }
    return convertedBinary;
}

int decimalToBinaryMethod2(int decimal)
{
    // bitwise method
    int convertedBinary = 0, count = 0, bit;
    while (decimal > 0)
    {
        bit = (decimal & 1);
        convertedBinary = (bit * pow(10, count++)) + convertedBinary;
        decimal = decimal >> 1;
    }
    return convertedBinary;
}

int binaryToDecimal(int binary)
{

    // for example : 1010 --> 10

    int decimal = 0 ,count = 0;

    while (binary > 0)
    {
        /* code */
        int bit = (binary % 10);
        decimal += pow(2,count++) * bit;
        binary /= 10;
    }

    return decimal;
}
int main()
{

    int decimal;
    cout << "Enter the decimal" << endl;
    cin >> decimal;

    int binary = decimalToBinaryMethod2(decimal);

    cout << "Binary of " << decimal << " is " << binary << endl;

    decimal = binaryToDecimal(binary);

    cout << endl;
    cout << "Decimal of " << binary << " is " << decimal << endl;

    return 0;
}