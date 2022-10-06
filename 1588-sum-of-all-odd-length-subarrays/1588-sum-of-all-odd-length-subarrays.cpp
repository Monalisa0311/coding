class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int count=0;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            count=ceil((i+1)*(n-i)/2.0);
            sum+=(count*arr[i]);
        }
        return sum;
    }
};