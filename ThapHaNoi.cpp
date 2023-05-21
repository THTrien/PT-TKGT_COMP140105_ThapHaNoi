#include <iostream>
using namespace std;

void THN(int n, int num, char Src, char Dest, char Tmp){
    if (n==1) cout <<num<<" "<<Src<<" "<<Dest<<endl;
    else{
        THN(n-1,n-1,Src,Tmp,Dest);
        THN(1,num,Src,Dest,Tmp);
        THN(n-1,n-1,Tmp,Dest,Src);
    }
}

int main(){
    int n; cin>>n;
    THN(n,n,'A','C','B');
    
    return 0;
}
