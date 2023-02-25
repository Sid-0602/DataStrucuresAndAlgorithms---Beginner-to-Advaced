#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int temp_num = n;
    int sum_even = 0;
    int sum_odd = 0;
    int last_digit, first_digit;
    int num_dig = 0;
    int tens;

    while (n / 10 != 0)
    {
        last_digit = (n % 10);
        if (last_digit % 2 == 0)
        {
            sum_even = sum_even + last_digit;
        }
        else if (last_digit % 2 != 0)
        {
            sum_odd = sum_odd + last_digit;
        }
        num_dig = num_dig + 1;
        n = n / 10;
    }

    tens = pow(10, num_dig);
    first_digit = temp_num / tens;

    if (first_digit % 2 == 0)
    {
        sum_even = sum_even + first_digit;
    }
    else if (first_digit % 2 != 0)
    {
        sum_odd = sum_odd + first_digit;
    }

    cout << sum_even << endl;
    cout << sum_odd << endl;

    return 0;
}