#include<bits/stdc++.h>
using namespace std;

int quadradoRetangulo(int b, int h)
{
    if(b == h) return 1;
    if(b != h) return 0;
}

int main()
{
    int b, h;
    cin >> b >> h;

    cout << quadradoRetangulo(b, h);
}
