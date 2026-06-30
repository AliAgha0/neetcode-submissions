class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;
        for (const std::string& s : strs)
        {

            std::string sortedStr = s;
            std::sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(s);
        }
    

    std::vector<std::vector<std::string>> result;
    for (auto& pair : anagramMap)
    {
        result.push_back(std::move(pair.second));
    }
    return result;
    }
};
