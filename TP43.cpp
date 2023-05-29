#include <iostream>
#include <string>
using namespace std;
string ObtenerDDD (int cod);
int main() {
   int ddd;
   string des;
   cout<<"Ingrese ddd: ";
   cin>>ddd;
   cout<<ObtenerDDD (ddd);
   return 0;
}
string ObtenerDDD (int cod)
{
    int a;
    string des;
    string msg = "DDD NO ENCONTRADO"";
    if(cod==61){
        a=1;
        des="Brasilia";
    }
    if(cod==71){
        a=1;
        des="Salvador";
    }
    if(cod==11){
        a=1;
        des="Sao Pablo";
    }
    if(cod==21){
        a=1;
        des="Rio de Janeiro";
    }
    if(cod==32){
        a=1;
        des="Juiz de Fora";
    }
    if(cod==19){
        a=1;
        des="Campinas";
    }
    if(cod==27){
        a=1;
        des="Vitoria";
    }
    if(cod==31){
        a=1;
        des="Belo Horizonte";
    }
    if (a==1){
        msg = "El DDD es: ";
        return msg + des; 
    }
    return msg;
}
