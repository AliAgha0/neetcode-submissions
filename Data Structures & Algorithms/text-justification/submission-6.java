class Solution {
    public List<String> fullJustify(String[] words, int maxWidth) 
    {
        List<String> result = new ArrayList<>();

        List<StringBuilder> currentWords = new ArrayList<>();
        int sumOfLengthsOfCurrentWords = 0;

        for (String word : words)
        {
            int newLineLength = sumOfLengthsOfCurrentWords + word.length() + currentWords.size();

            if (newLineLength > maxWidth)
            {
                int extraPadding = maxWidth - (sumOfLengthsOfCurrentWords + currentWords.size() - 1);
                int wordsToRoundRobinSpaces = Math.max(currentWords.size() - 1, 1);
                for(int i = 0; i < extraPadding; i++)
                {
                    int indexForSpace = i % wordsToRoundRobinSpaces;
                    currentWords.get(indexForSpace).append(" ");
                }
                result.add(currentWords.stream().map(sb -> sb.toString()).collect(Collectors.joining(" ")));
                currentWords = new ArrayList<>();
                sumOfLengthsOfCurrentWords = 0;

            }
            
            
                currentWords.add(new StringBuilder(word));
                sumOfLengthsOfCurrentWords += word.length();
            
        }
        int extraSpaces = maxWidth - (sumOfLengthsOfCurrentWords + currentWords.size() - 1);
        String spaces = Stream.generate(() -> " ").limit(extraSpaces).collect(Collectors.joining(""));
        result.add(currentWords.stream().map(sb -> sb.toString()).collect(Collectors.joining(" ")) + spaces);

        return result;
    }
}