class Solution {
public:
    bool isPalindrome(string s) \
    {
        std::string cleaned = "";
        for (char c: s)
        {
            if (std::isalnum(c))
            {
                cleaned += std::tolower(c);
            }
        }
        std::vector<char> forward;
        std::vector<char> backward;

        for (int i = 0; i < cleaned.length(); i++)
        {
            forward.push_back(cleaned[i]);
        }

        for (int i = (int)cleaned.length() - 1; i >= 0; i--)
        {
            backward.push_back(cleaned[i]);
        }
        return forward == backward;
    }
};
