//reverse a number
//do it again

class Solution {
public:
    int reverse(int x) {
        int ans =0;
        while(x){
            int a =  x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            x=x/10;
            ans = (ans*10)+a;
        }
        return ans;
    }
};