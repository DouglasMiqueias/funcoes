#include<bits/stdc++.h>
using namespace std;

int somaMenor(int a, int b, int c)
{
    int vet[3] = {a, b, c};

    sort(vet, vet+3);

    return vet[0] + vet[2];

}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << somaMenor(a, b, c);
}
