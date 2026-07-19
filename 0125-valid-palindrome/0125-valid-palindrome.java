class Solution {
    public boolean isPalindrome(String s) {
        int l = 0, r = s.length() - 1;
        String s1 = s.toLowerCase(); 
        while (l < r) {
            while (l < s1.length() && !Character.isLetterOrDigit(s1.charAt(l))) {
                l++;
            }
            while (r >= 0 && !Character.isLetterOrDigit(s1.charAt(r))) {
                r--;
            }
            if (l < r) {
                if (s1.charAt(l) != s1.charAt(r)) {
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
}
