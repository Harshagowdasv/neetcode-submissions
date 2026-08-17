class Solution {
public:
    string minWindow(string s, string t) {
        int l=0;
        int minlen=INT_MAX;
        int count=t.length();
        int start=0;
        unordered_map<char,int>freq;

        for(char ch : t){
            freq[ch]++;
        }

        for(int r=0;r<s.length();r++){
            if(freq[s[r]]>0){
                count--;
            }

            freq[s[r]]--;

            while(count==0){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    start=l;
                }

                freq[s[l]]++;

                if(freq[s[l]]>0){
                    count++;
                }
                l++;
            }

        }

        if(minlen == INT_MAX){
            return "";
        }

        return s.substr(start,minlen);
        
    }
};
