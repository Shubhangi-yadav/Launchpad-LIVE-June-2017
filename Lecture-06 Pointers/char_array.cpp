#include<iostream>
using namespace std;

int main(){
    char a[] = {'a','b','c','\0'};
    cout<<a <<endl;


    char b[] = "welcome";
    cout<<b<<endl;
    cout<< &b <<endl;

    char c[100];
    //cin>>c;
    cin.getline(c,100);
    cout<<c;




}
