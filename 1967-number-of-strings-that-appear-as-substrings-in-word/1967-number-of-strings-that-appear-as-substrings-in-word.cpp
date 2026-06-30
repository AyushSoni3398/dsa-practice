class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for(string pattern : patterns){
            if(pattern.size()>word.size()) continue;
            for(int i=0;i<= word.size()-pattern.size();i++){
                if(word.substr(i,pattern.size()) == pattern){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};