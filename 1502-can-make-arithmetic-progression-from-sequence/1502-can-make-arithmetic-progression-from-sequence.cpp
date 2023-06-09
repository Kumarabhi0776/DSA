class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff=arr[1]-arr[0];
        for(int i=1; i<arr.size(); i++){
            int currDiff=arr[i]-arr[i-1];
            if(currDiff!=diff)return false;
        }
        
        return true;
    }
};