#include<iostream>
using namespace std;
int main()
{
  float s,r;
  cout<<"Ingrese el primer numero:     "; cin>>s;
  cout<<"Ingrese el segundo numero:    "; cin>>r;
  if(s==r)
  {
     cout<<"Son iguales"<<endl;

  }
  else   if(s>r)
  {
       cout<<s<<" es el mayor que "<<r<<"\n";
     
  }
  else
     {
       cout<<s<<" es el menor que "<<r<<"\n";
     }
  
return (0);




}
