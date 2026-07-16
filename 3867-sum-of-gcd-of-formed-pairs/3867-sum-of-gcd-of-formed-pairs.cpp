class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> prefixGcd(n);
        int maxi = nums[0];
        for(long long i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            prefixGcd[i] = gcd(maxi,nums[i]);
        }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long l = 0, r = n-1;
        long long sum =0;
        while(l<r){
            sum += gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};