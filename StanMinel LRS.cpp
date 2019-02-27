/*
Arbori binari "insestrati"  ( informatii atasate nodurilor )
[I] Metode de reprezentare
[II] Metode de parcurgere

I.a) Prin "legatura la tata"
I.b) Prin " fii stangi - fii drepti"

fii stangi - fii drepti

Utilizam 3 vectori :
- INFO unde info[i]=k inseamna ca nodul i este inzestrat cu informatia k
- STANGI unde STANGI[i]=j
inseamna ca numele fiului stang al lui i este j
( daca acesta nu exista STANG[i]=0 )
- DREPTI unde DREPTI[i]=j
inseamna ca numele fiului drept al lui i este j

exemplu :
                               100(1)
                            /          \
                           /             \
                          50(2)         170(5)
                          /      \                \
                        20(3)   60(4)     190(6)

INFO ={100,50,20,60,170,190}
STANGI={2,3,0,0,0,0}
DREPTI={5,4,0,0,6,0}

Input.dat
6
100 50 20 60 170 190
2 3 0 0 0 0
5 4 0 0 6 0

aplicatii :
( parcurgere in preordine )
RSD(1): 100,50,20,60,170,190
( parcurgere in inordine )
SRD(1): 20,50,60,100,170,190
( parcurgere in postordine )
SDR(1): ... ,100


*/

#include<iostream>
using namespace std;
int n=6;
int INFO[100]={-1,100,50,20,60,170,190};
int TATA[100]={-1,0,1,2,2,1,5};
int FIU[100]={-1,0,-1,-1,1,1,1};

int RSD(int node)
{
    cout<<INFO[node]<<" ";
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==-1))  {RSD(i);break;}
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==1))   {RSD(i);break;}
return 0;
}


int SDR(int node)
{
    cout<<INFO[node]<<" ";
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==-1))  {SDR(i);break;}
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==1))   {SDR(i);break;}
return 0;
}


int SRD(int node)
{
    cout<<INFO[node]<<" ";
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==-1))  {SRD(i);break;}
for(int i=1;i<=n;i++)  if ((TATA[i]==node)&&(FIU[i]==1))   {SRD(i);break;}
return 0;
}


int main()
{RSD(1);
 SDR(1);
 SRD(1);


}
