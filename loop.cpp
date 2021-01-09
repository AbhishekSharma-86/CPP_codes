#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x;
    int y;
    int a;
    cin>>x;
    cin>>y;
    for(a=x;a<=y;a++){
        if(a<=9)
    {
        if(a>=1){
            if(a==1){
            cout<<"one"<<endl;
        }
        if(a==2){
            cout<<"two"<<endl;
        }
        if(a==3){
            cout<<"three"<<endl;
        }
        if(a==4){
            cout<<"four"<<endl;
        }
        if(a==5){
            cout<<"five"<<endl;
        }
        if(a==6){
            cout<<"six"<<endl;
        }
        if(a==7){
            cout<<"seven"<<endl;
        }
        if(a==8){
            cout<<"eight"<<endl;
        }
        if(a==9){
            cout<<"nine"<<endl;
        }
        }
        

    }
    else
    {
        if(a%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }

    }
    return 0;
}
    