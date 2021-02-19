class Solution {
public:
    char findTheDifference(string s, string t) {
        char v = 0;
        for (char c: s) v ^= c;
        for (char c: t) v ^= c;
        return v;
    }
};
