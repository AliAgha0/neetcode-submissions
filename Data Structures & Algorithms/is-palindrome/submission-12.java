class Solution {
    public boolean isPalindrome(String s) 
    {
        s = s.toLowerCase();
        s = s.replaceAll("[^a-z0-9]", "");
        List<Character> forward = new ArrayList<>();
        List<Character> backward = new ArrayList<>();
        for (int i = 0; i < s.length(); i++)
        {
            forward.add(s.charAt(i));
        }
        for (int i = s.length() -1; i >= 0; i--)
        {
            backward.add(s.charAt(i));
        }

        return forward.equals(backward);
    }
}
