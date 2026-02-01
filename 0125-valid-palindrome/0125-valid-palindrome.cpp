class Solution {
public:
        bool isAlphanum(char ch) {
        return (ch >= '0' && ch <= '9') || 
               (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    }
    bool isPalindrome(string s) {
   int st = 0, end = s.length() - 1;
        
        while (st <= end) {
            while (st <= end && !isAlphanum(s[st])) st++;
            while (st <= end && !isAlphanum(s[end])) end--;
            
            if (st <= end && tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};