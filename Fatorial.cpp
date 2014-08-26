#include <iostream>

int main()
{
using namespace std;

int num, fat=1;
cout << "Entre com Numero para calcular seu Fatorial : ";
cin >> num;
  for(int i=1;i<=num;i++)
  {
    fat=fat*i;
    }
    cout << " Fatorial de : "<< num << "é = " << fat ;
    cin.get();
    return 0;
    }
