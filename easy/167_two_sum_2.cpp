class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low=0,high=n-1;
        while(true){
            int sum = numbers[low] + numbers[high];
            if(sum==target)
                return {low+1, high+1};
            if(sum>target)
                high--;
            else
                low++;
        }
        return {0,0};
    }
};
