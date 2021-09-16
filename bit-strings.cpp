#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;

lli power(lli x, lli y, lli p){
  
    lli resolve = 1;
    x %= p;
    while (y)
    {
        if (y & 1)
            resolve = (resolve * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return resolve;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin >> n;
    cout << power(2, n, mod);
    return 0;
}