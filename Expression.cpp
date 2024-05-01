#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c,exp[5],result;
    cin >>a>>b>>c;

     exp[0]=a+(b*c);
     exp[1]=a*(b+c);
     exp[2]=a*b*c;
     exp[3]=(a+b)*c;
     exp[4]=(a+b+c);
     result = exp[0];
     for(int i=0;i<5;i++)
     {
         if(exp[i]>result)
            result=exp[i];
     }
      cout <<result<< endl;
    return 0;
}
      