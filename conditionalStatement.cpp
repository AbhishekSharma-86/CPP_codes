#include <iostream>

using namespace std;



int main()
{
    int N;
    cin >> N;
    if(N%2 != 0){
        cout<<"Weird"<<endl;
    }
    else{
        if(N>=2 && N<5){
            cout<<"Not Weird"<<endl;
        }
        if(N>=6 && N<=20){
            cout<<"Weird"<<endl;
        }
        if(N>20){
            cout<<"Not Weird";
        }
    }

    return 0;
}
