class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // // brute force approach
        // int n = nums.size();
        // vector <int> res(n);

        // for(int i=0; i<n; ++i){
        //     res[i] = nums[i] * nums[i];
        // }

        // sort(res.begin(), res.end());

        // return res;

        // the above is not the very much optimised solution, I have to look for other workarounds as well
        // TC -> O(N*N)

        // so this can also be solved using the two pointer approach

        // okay so the optimised version of this code is to solve it using two pointer
        int n = nums.size();

        int l=0;
        int r = n-1;
        int pos = n-1;

        vector <int> res(n);

        while(l<=r){
            int leftsquare = nums[l] * nums[l];
            int rsquare = nums[r] * nums[r];

            if(leftsquare > rsquare){
                res[pos] = leftsquare;
                l++;
            }else{
                res[pos] = rsquare;
                r--;
            }
            pos--;
        }
        return res;

        // now the TC here is O(N);
    }
};
