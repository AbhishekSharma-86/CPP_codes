#include<iostream>
#include<stdio.h>
// #include<conio.h>
using namespace std;
int main(){
    int a;
    long b;
    char ch;
    float fl;
    double du;
    scanf("%d %ld %c %f %lf", &a,&b,&ch,&fl,&du);
    printf("%d %ld %c %.3f %.6lf", a,b,ch,fl,du);
    return 0;


}