#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    int n,A=0,D=0;
    string input;
    cin>>n>>input;
        for(int i=0;i<n;i++)
        {
            if(input[i]=='A' || input[i]=='a')
                A++;
            if(input[i]=='D' || input[i]=='d')
                D++;
        }
    if(A>D)
        cout<<"Anton"<<endl;
    if(A<D)
        cout<<"Danik"<<endl;
    if(A==D)
        cout<<"Friendship"<<endl;

    return 0;
}
  
 