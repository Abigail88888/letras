#include<bits/stdc++.h>
using namespace std;
int ContarLetras(string f);
int main(){
 string f;
 cout<<"Ingrese una frase:"<<endl;
 getline(cin,f);
 int C=ContarLetras(f);
 cout<<"La frase tiene "<<C<<" letras"<<endl;
 return 0;
}
int ContarLetras(string f){
 int contar, i=0;     
 while(i<=f.size()-1){
 {
   contar+=1;
     }
  i++;
 }
 return contar;
  }
