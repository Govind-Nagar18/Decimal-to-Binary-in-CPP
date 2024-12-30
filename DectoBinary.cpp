#include <iostream>
using namespace std;

void decimaltobinary(int num)
{
    if (num == 0)
    {
        cout << "the number is zero / 0 " << endl;
        return;
    }

    int binary[32];
    int i = 0;

    while (num > 0)
    {
        binary[i++] = num % 2;
        num = num / 2;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    cout << endl;
}
int main()
{
    int decimal_number;
    cout << "enter the decimal number : ";
    cin >> decimal_number;

    if (decimal_number < 0)
    {
        cout << "the number is negative " << endl;
    }
    decimaltobinary(decimal_number);
    return 0;
}