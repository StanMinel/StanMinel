#include<iostream>
#include<fstream>
using namespace std;
int G[100][100];
int n;
int start;
int Q[100];
int first;
int last;
int VIZ[100];
int effort[100];
int read_data()
{
fstream f;
f.open("input.dat",ios::in);
f>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) f>>G[i][j];
f>>start;
}

int init_data()
{
first=1;
last=1;
Q[first]=start;
for(int i=1;i<=n;i++) VIZ[i]=0;
VIZ[start]=1;
}

int build_effort(int child)
{




}

int print_effort()
{
   cout<<endl;
   for(int i=1;i<=n;i++)
         cout<<effort[i]<<"  ";
}

int BFS(int G[100][100],int n,int from)
{
cout<<endl;
init_data();
while (first<=last)
    {
      int this_one=Q[first];
      cout<<this_one<<" ";
      build_effort(this_one);
      first++;
      for(int i=1;i<=n;i++)
         {
           if ( (G[this_one][i]==1) && (VIZ[i]==0) )
                                        {
                                          build_effort(this_one);
                                          last++;
                                          Q[last]=i;
                                          VIZ[i]=1;
                                        }
         }
    }
}

int main()
{
read_data();
BFS(G,n,start);
print_effort();
}
