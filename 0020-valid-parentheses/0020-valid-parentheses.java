class Solution {
    public boolean isValid(String s) {

        int n = s.length();

        if(n == 0)return true;

        if (n % 2 == 1) return false;

        Deque<Character> stack = new ArrayDeque<>();

        for(char c : s.toCharArray()) {
            if(c == '(') {
                stack.push(')');
            }
            else if (c == '[') {
                stack.push(']');
            }
            else if (c == '{') {
                stack.push('}');
            }

            else if (stack.isEmpty() || stack.pop() != c) {
                return false;
            }
        } 
        return stack.isEmpty();
    }
}