class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority element
        // booyer voting algo

        int candidate = 0, count = 0;
        for(auto num : nums){
            if(count==0){
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};
