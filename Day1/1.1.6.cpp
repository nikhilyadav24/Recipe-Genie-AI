#include<bits/stdc++.h>
using namespace std;
// int fib(int n){
//         if (n==0)
//          return 0;

//         if (n==1)
//          return 1;

//         int ans = fib(n-1) + fib(n-2);
//         return ans;
// }

 
int main()
{
        // int n;
        // cin>> n;
        // fib(n);
        // cout<< fib(n); 

        int n, a=0, b=1, next;
        cin>>n;
        if(n==1){
                next=1;
        }
        for(int i=1; i<n; i++){
                next=a+b;
                a=b;
                b=next;
        }
        cout<<next;

        
}