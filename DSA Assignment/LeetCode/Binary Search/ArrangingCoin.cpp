class Solution {
public:
    int arrangeCoins(int n) {
    
        int left = 1;
        int right = n;
        while(left<=right){
            cout<<left<<endl;
            cout<<right<<endl;

            int mid= (1ll*right - 1ll*left)/2;
            if(n>=(mid*(mid+1))/2){
                left = mid+1;
            }
            right = mid-1;
        }
        return left-1;
    }
};
