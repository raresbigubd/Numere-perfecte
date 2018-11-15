#include<iostream>
using namespace std;
int n;
int main()
{ cout<<"N=";cin>>n;
   int divizor=2;
   int putere;
   while (n>1)

    {int suma=1;
    for (divizor=2; divizor<=n/2; divizor++)
        if (n%divizor==0)
        {
            suma=suma+divizor;
        }
        if (n==suma)
        {
            cout << "Numarul este perfect!";
            return 0;
        }
        else {cout << "Numarul nu este perfect!"; return 0;}


   }
   return 0;
}
