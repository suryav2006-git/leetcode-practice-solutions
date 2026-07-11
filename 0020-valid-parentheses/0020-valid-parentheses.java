class Solution {
    public boolean isValid(String s) {

        if(s.length() % 2 == 1) return false;

        if(s.charAt(0) == ')' || s.charAt(0) == '}' || s.charAt(0) == ']') {
            return false;
        }

        while(true) {
            if( s.contains("()") ) {
                s = s.replace("()", "");
            }
            else if (s.contains("{}")) {
                s = s.replace("{}","");
            }
            else if (s.contains("[]")) {
                s = s.replace("[]","");
            }
            else {
                return s.isEmpty();
            }
        }

    }
}