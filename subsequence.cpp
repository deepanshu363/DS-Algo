#include<bits/stdc++.h>
using namespace std;
int subset(string input,string output[],map<string,int> store)
{
  if(input.size()==0)
  {
      output[0]="";
   return 1;
  }
  char str= input[0];
  char str1=input[1];
  input.erase(input.begin(),input.begin()+1);
 int count=subset(input,output,store);
  
  for(int i=0;i<count;i++)
  {
      if(output[i][0]==str1||output[i]=="")
      {
     output[count+i]=str+output[i];
    //  store[str+output[i]]++;
    //  cout<<(str+output[i]);
    //  cout<<store[str+output[i]];
      }
     
  }
  return 2*count;
 
}
int main()
{
   cout<<"Enter the input";
   string input;
   cin>>input;
   string output[100];
   map<string,int> store;
   int count=subset(input,output,store);
   for(int i=0;i<count;i++)
   {
       cout<<output[i]<<" ";
   }
   
   return 0;
}
