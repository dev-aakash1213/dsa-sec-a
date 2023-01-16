int Solution::solve(vector<int> &A) {
    unordered_map <int, int> B;
    int ans = INT_MAX;
    for(int i:A){
        if(B[A[i]] == 0) B[A[i]] = i+1;
        else ans = min(B[A[i]]-1,ans);
    }
    return ans == INT_MAX?-1:A[ans];
}
