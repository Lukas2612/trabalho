#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
string jogo;
int aposta,aleatorio, i;
vector<int>lista;
cout<<"Selecione o seu jogo de apostas(mega-sena, quina, lotomania ou lotofacil)"<<endl;
cin>>jogo;

    if(jogo=="mega-sena")
    {
cout<<"Digite o numero de dezenas que queira apostar(Minimo 6, Maximo 15)"<<endl;
cin>>aposta;
if(aposta>=6)
{
if(aposta<=15)
{
          srand(time(0));
      for(int i= 0; i<aposta;i++)
      {
      aleatorio = rand() % 60 + 1;
      lista.push_back(aleatorio);
      }

    sort(lista.begin(),lista.end());
    cout<<"Seus numeros de aposta sao:"<<endl;
    for(i=0;i<lista.size();i++)
    {
    cout<<lista[i]<<endl;
    }
    cout<<endl;
    if(aposta==6)
    {
    cout<<"Voce gastou 3,50 reais na aposta";
    }
        if(aposta==7)
    {
    cout<<"Voce gastou 24,50 reais na aposta";
    }
        if(aposta==8)
    {
    cout<<"Voce gastou 98,00 reais na aposta";
    }
        if(aposta==9)
    {
    cout<<"Voce gastou 294,00 reais na aposta";
    }
        if(aposta==10)
    {
    cout<<"Voce gastou 735,00 reais na aposta";
    }
        if(aposta==11)
    {
    cout<<"Voce gastou 1.617,00 reais na aposta";
    }
        if(aposta==12)
    {
    cout<<"Voce gastou 3.234,00 reais na aposta";
    }
        if(aposta==13)
    {
    cout<<"Voce gastou 6.006,00 reais na aposta";
    }
        if(aposta==14)
    {
    cout<<"Voce gastou 10.510,50 reais na aposta";
    }
        if(aposta==15)
    {
    cout<<"Voce gastou 17.517,50 reais na aposta";
    }



    }}
    else{
    cout<<"Seus numeros tem que estar dentro dos parametros, tente novamente"<<endl;
    }
    }

    if(jogo=="quina")
    {
cout<<"Digite o numero de dezenas que queira apostar(Minimo 5, Maximo 15)"<<endl;
cin>>aposta;
if(aposta>=5)
{
if(aposta<=15)
{
          srand(time(0));
      for(int i= 0; i<aposta;i++)
      {
      aleatorio = rand() % 80 + 1;
      lista.push_back(aleatorio);
      }
    sort(lista.begin(),lista.end());
    cout<<"Seus numeros de aposta sao:"<<endl;
    for(int i=0;i<lista.size();i++)
    {
    cout<<lista[i]<<endl;
    }
    cout<<endl;
    if(aposta == 5)
    {
    cout<<"Voce gastou 1,50 reais na aposta";
    }
    if(aposta==6)
    {
    cout<<"Voce gastou 9,00 reais na aposta";
    }
        if(aposta==7)
    {
    cout<<"Voce gastou 31,50 reais na aposta";
    }
        if(aposta==8)
    {
    cout<<"Voce gastou 84,00 reais na aposta";
    }
        if(aposta==9)
    {
    cout<<"Voce gastou 189,00 reais na aposta";
    }
        if(aposta==10)
    {
    cout<<"Voce gastou 378,00 reais na aposta";
    }
        if(aposta==11)
    {
    cout<<"Voce gastou 693,00 reais na aposta";
    }
        if(aposta==12)
    {
    cout<<"Voce gastou 1.188,00 reais na aposta";
    }
        if(aposta==13)
    {
    cout<<"Voce gastou 1.930,50 reais na aposta";
    }
        if(aposta==14)
    {
    cout<<"Voce gastou 3.003,00 reais na aposta";
    }
        if(aposta==15)
    {
    cout<<"Voce gastou 4.504,50 reais na aposta";
    }



    }}
    else{
    cout<<"Seus numeros tem que estar dentro dos parametros, tente novamente"<<endl;
    }
    }

    if(jogo=="lotomania")
    {
    cout<<"Digite o numero de dezenas que quer apostar(Minimo 50, Maximo 50)"<<endl;
    cin>>aposta;
    if(aposta==50)
    {
    srand(time(0));
      for(int i= 0; i<aposta;i++)
      {
      aleatorio = rand() % 100 + 1;
      lista.push_back(aleatorio);
      }
    sort(lista.begin(),lista.end());
    cout<<"Seus numeros de aposta sao:"<<endl;
    for(int i=0;i<lista.size();i++)
    {
    cout<<lista[i]<<endl;
    }
    cout<<endl;

    cout<<"Voce gastou 1,50 reais na aposta"<<endl;
    }
    else{
    cout<<"Seus numeros tem que estar dentro dos parametros, tente novamente"<<endl;
    }
    }

    if(jogo=="lotofacil")
    {
cout<<"Digite o numero de dezenas que queira apostar(Minimo 15, Maximo 18)"<<endl;
cin>>aposta;
if(aposta>=15)
{
if(aposta<=18)
{
          srand(time(0));
      for(int i= 0; i<aposta;i++)
      {
      aleatorio = rand() % 25 + 1;
      lista.push_back(aleatorio);
      }

    sort(lista.begin(),lista.end());
    cout<<"Seus numeros de aposta sao:"<<endl;
    for(i=0;i<lista.size();i++)
    {
    cout<<lista[i]<<endl;
    }
    cout<<endl;
    if(aposta==15)
    {
    cout<<"Voce gastou 2,00 reais na aposta";
    }
        if(aposta==16)
    {
    cout<<"Voce gastou 32,00 reais na aposta";
    }
        if(aposta==17)
    {
    cout<<"Voce gastou 272,00 reais na aposta";
    }
        if(aposta==18)
    {
    cout<<"Voce gastou 1.632,00 reais na aposta";
    }
    }
    }
    }

return 0;
}
