#include<bits/stdc++.h>
using namespace std;

int pares(int a, int b, int c)
{
    int pares;
    int vet[3] = {a, b, c};

    for(int i = 0; i < 3; i++)
    {
        if(vet[i] % 2 == 0) pares++;

    }
    return pares;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << pares(a, b, c);
}
