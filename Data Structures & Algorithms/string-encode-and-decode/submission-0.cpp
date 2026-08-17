class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s : strs){
            encoded_string += to_string(s.size())+'#'+s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i=0;
        while(i<s.length()){
            int j=i;

            while(s[j]!='#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));
            j++;

            string word = s.substr(j,len);
            decoded_string.push_back(word);

            i=j+len;

        }
        return decoded_string;
        
    }
};
