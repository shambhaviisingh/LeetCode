class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int rev=0;
        int t=x;
        while(t!=0){
            int digit=t%10;
            t=t/10;
            if(rev>INT_MAX/10)
            return 0;
            if(rev==INT_MAX/10 && digit >7)
            return 0;
            if(rev<INT_MIN/10)
            return 0;
            if(rev==INT_MIN/10 && digit<-8)
            return 0;
            rev=rev*10+digit;
        }
        if(rev==x)
        return true;
        else
        return false;
    }
};