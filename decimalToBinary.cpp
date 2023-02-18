#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void toBinary(int N)
{
    // your code here
    int ans = 0;
    int a = 0;
    while (N != 0)
    {
        int bit = N & 1;
        N = N >> 1;
        ans = (pow(10, a) * bit + ans);
        a++;
    }
    cout << ans;
}

int main()
{
    toBinary(10);
}