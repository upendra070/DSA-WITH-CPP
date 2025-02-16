#include <iostream>
#include <cmath>
using namespace std;
int bintodec(int n)
{
    int i = 0;
    int bit = 0;
    int dec = 0;
    while (n)
    {
        bit = n % 10;
        dec = bit * pow(2, i++) + dec;
        n = n / 10;
    }
    return dec;
}

int main()
{
    int bin;
    cout << "entre the bin number"<<endl;
    cin >> bin;
    cout << bintodec(bin);

    return 0;
}