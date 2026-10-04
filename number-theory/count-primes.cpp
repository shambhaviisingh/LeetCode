class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
        return 0;
        int c=n-2;
        vector<char> arr(n,1);
        for(int i=2; i*i<n; i++){
            if(arr[i]){
                  for(int j=i*i; j<n; j+=i){
                    if(arr[j]){
                        arr[j]=0;
                        c--;
                    }
                  }
            }
        }
       
        return c;
    }
};