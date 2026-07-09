class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1= s.length();
        int n2 = t.length();

        if(n1 != n2) return false;

        int count[26] = {0};

        for(int i=0; i<n1 ;i++) {
            count[s[i] - 'a']++ ;
            count[t[i] - 'a']-- ;
        }    
        for(int value : count) {
            if(value != 0) {
                return false;
            }
        }
        return true;
    }
};