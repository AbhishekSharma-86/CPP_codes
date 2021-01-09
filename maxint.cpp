#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int i;
    int j;
    if(a>b){
        i=a;
    }
    else
    {
        i=b;
    }
     if(c>d){
        j=c;
    }
    else
    {
        j=d;
    }
    if (i>j){
        return i;
    }
    else{
        return j;
    }
    

}
int main(){
    int p,q,r,s;
    cin>>p;
    cin>>q;
    cin>>r;
    cin>>s;
    cout<<"the max is "<<max_of_four(p,q,r,s)<<endl;
    return 0;
}