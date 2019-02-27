
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
