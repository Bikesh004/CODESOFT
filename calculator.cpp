#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter first number"<<endl;
    cin>>n1;
    cout<<"enter second number";
    
    cin>>n2;
    char op;
    cout<<"enter your operations";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"sum of two number is="<<n1+n2<<endl;
        break;
    case '-':
        cout<<"differance of two number is="<<n1-n2<<endl;
        break;
    case '*':
        cout<<"multiply of two number is="<<n1*n2<<endl;
        break;
    case '/':
        cout<<"divided of two number is="<<n1/n2<<endl;
        break;            
    
    default:
       cout<<"apply only -,+,* and / operations"<<endl;
        break;
    }

    return 0;

}