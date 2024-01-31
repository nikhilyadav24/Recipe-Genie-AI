// HCF of GCF
//left rto write its optimal code

//brute force(O(n))
int calcGCD(int n, int m){
    int a = (m>n) ? n : m;
    int ans;
    for(int i=a;i>0;i--){
        if(n%i==0 && m%i==0){
            ans = i;
            break;
        }
    }
    return ans;

}
//solve in (O(log(n)))