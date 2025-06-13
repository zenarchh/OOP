#include <iostream>
using namespace std;
int main()
{
 int s1, s2;
 cout<<"enter the size of both strings: ";
 cin>>s1>>s2;
 
 char *str1=new char[s1];
 char *str2=new char[s2];
 
 str1="hello";
 str2="olleh";
 
 if (s1!=s2)
 {
  cout<<"the strings cannot be reversed!";
  str1=NULL;
  delete[] str1;
  str2=NULL;
  delete[] str2;
  exit(0);
 }
 
 
 bool flag=false;
 for (int i=0; i<s1; i++)
  {
     if (str1[i]==str2[s2-i-1])
    {
     flag=true;
    }
    break;
  }
  
  if(flag==true)
  {
   cout<<"the strings are reversed of each other!";
  }
  
  str1=NULL;
  delete[] str1;
  str2=NULL;
  delete[] str2;
 
return 0;
}
