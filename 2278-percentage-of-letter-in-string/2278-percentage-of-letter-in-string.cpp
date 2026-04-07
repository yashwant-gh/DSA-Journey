class Solution {
public:
    int percentageLetter(string s, char c) {
        int count = 0;
        for(char x: s)if(x == c)count++;
        int p = (count*100)/s.size();
        return p;
    }
};