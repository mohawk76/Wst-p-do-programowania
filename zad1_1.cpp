#include <iostream>

using namespace std;

int main()
{
    cout<<"Wpisz liczbe cali: ";
    int input = 0;
    const float CAL = 2.54f;
    cin >> input;
    cout << input << " cali to " << CAL * input;
    cin.get();

    return 0;
}
