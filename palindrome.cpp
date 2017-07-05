
#include<iostream>

using namespace std;

long long int A[50][50],B[50][50],a;
int main()
{
  long long int num, rem, count[50], i=0,j,limit,N[50];
  cout<<"\n Enter limit";
  cin>>limit;
  cout<<"\n Numbers ";
  for(i=0;i<limit;i++)
    count[i]=0;
  a=0;
  while(a<limit)
  {
     cin>>N[a++];
  }



  a=0;
  while(a<limit)
  {
i=0;

  while(N[a]>0)
  {
      rem=N[a]%10;
      B[a][i]=rem;
      count[a]++;
      N[a]=N[a]/10;
    // cout<<"   "<<B[a][i];
      ++i;
  }
    //cout<<"\n"<<count;
    int c=count[a]/2;
    //cout<<"\n        "<<count[a];
    //for(j=0;j<count;j++)
    //cout<<"\n"<<B[j];
 int temp;
 j=0;
 cout<<"\n";
 for(i=0;i<count[a];i++)
{
   // cout<<"    "<<count[a];
    cout<<"\n";

    cout<<"    "<<B[a][i];
}
    cout<<"\n";
 for(i=count[a]-1;i>=0;i--)
 {
     A[a][j]=B[a][i];
     //cout<<"    "<<i;
         // cout<<"   "<<A[a][j];
     ++j;

 }

 //cout<<"\n \n \n";
/*
 for(i=0;i<count;i++)
    cout<<"   "<<A[i];
    */
 for(int k=0;k<=c;k++)
 {
    // cout<<"\n"<<A[k];
     //cout<<"\n"<<A[count-k-1];
    if(A[a][k]!=A[a][count[a]-k-1])
    {


        temp=k;
        //cout<<"\n       "<<temp;
    }
 }
// cout<<"\n"<<A[a][0]<<"\n";
 // cout<<"\n \n"<<count;
  for(int x=0;x<count[a]/2;x++)
  {
       //cout<<"$$$$$$"<<A[x];
      if(A[a][x]!=A[a][count[a]-x-1])
      {
          //cout<<" HELLO   "<<x;
          //cout<<"    "<<A[x]<<"     "<<A[count-x]<<"\n";
          while(A[a][x]!=A[a][count[a]-x-1])
          {

             // cout<<"\n"<<A[a][count-x-1];
              if(A[a][count[a]-x-1]==9)
              {
                  A[a][count[a]-x-1]=0;
                  A[a][count[a]-x-2]=A[a][count[a]-x-2]+1;;
              }
              else
              {
                  A[a][count[a]-x-1]=A[a][count[a]-x-1]+1;
              }
          }
      }
      else if(A[a][x]==A[a][count[a]-x-1])
      {
          A[a][count[a]-x-2]=A[a][count[a]-x-2]+1;
      }

  }
  ++a;
  }
 cout<<"\n";
 a=0;
 while(a<limit)
 {


  for(i=0;i<count[a];i++)
    cout<<" *** "<<A[a][i];
 //if(A[temp]>A[count-temp-1])
 //{
//     cout<<"\n"<<A[count-temp-1];
    /* while(A[temp]!=A[count-temp-1])
     {
         A[count-temp-1]++;
         cout<<A[count-temp-1];
     }*/
 //}
 ++a;
 }
}
