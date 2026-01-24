#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2) cout<<j;
        cout<<endl;
    }
}
//                         or
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//              cout<<a;
//              a+=2;
//         }
//         cout<<endl;
//     }
// }