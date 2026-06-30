class Solution {
    public boolean isAnagram(String s, String t)
    {
        if (s.length() != t.length()) return false;
        List<String> sletters = new ArrayList<>();
        List<String> tletters = new ArrayList<>();
        for (int i = 0; i < s.length(); i++)
        {
            sletters.add(String.valueOf(s.charAt(i)));
        }
        for (int i = 0; i < t.length(); i++)
        {
            tletters.add(String.valueOf(t.charAt(i)));
        }

        Collections.sort(sletters);
        Collections.sort(tletters);

        if (sletters.equals(tletters))
        {
            return true;
        }

        return false;
    }
}
