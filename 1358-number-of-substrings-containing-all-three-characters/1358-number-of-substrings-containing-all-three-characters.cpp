// brute force , O(n3)

// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int n = s.size();
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             string temp = "";
//             for(int j=i;j<n;j++){
//                 temp += s[j];
//                 if(j-i+1<3) continue;
//                 if(temp.find('a') != string::npos && temp.find('b') != string :: npos && temp.find('c') != string :: npos) ans++;
//             }
//         }
//         return ans;
//     }
// };


// sliding window , 2 ptr this is O(n)
class Solution {
public:
    int numberOfSubstrings(string s) {

        int n = s.size();

        int freq[3] = {0};

        int l = 0;
        int ans = 0;

        for (int r = 0; r < n; r++) {

            freq[s[r] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {

                ans += n - r;

                freq[s[l] - 'a']--;

                l++;
            }
        }

        return ans;
    }
};