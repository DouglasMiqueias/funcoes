#include<bits/stdc++.h>
using namespace std;

int jurosSimples(int c, int m, double t)
{
    return c * m * (t/100.0);;
}

int main()
{
    int c, m, t;
    cout << "Valor emprestimo = R$ ";
    cin >> c;
    cout << "Quantidade de meses = ";
    cin >> m;
    cout << "Juros (%) ao mês = ";
    cin >> t;

    cout << "Juros Simples = R$ " << jurosSimples(c, m, t);
}
