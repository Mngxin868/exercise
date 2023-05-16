#include <iostream>
using namespace std;
int main()
{
  int ans=0;
 for(int a=1;a<=10;a++){
   for(int b=a;b<=10;b++){
     for(int c=b;c<=10;c++){
       for(int d=c;d<=10;d++){
         for(int e=d;e<=10;e++){
           ans++;
         }
       }
     }
   }
 } 
 cout<<ans;
  return 0;
}
