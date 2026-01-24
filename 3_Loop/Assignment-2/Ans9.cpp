#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int sum=0;
        for(int j=i;j!=0;j/=10){
            int ld=j%10;
            sum = sum+(ld*ld*ld);
        }
        if(sum==i) cout<<i<<endl;
    }
}