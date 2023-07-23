class Solution:
    def splitWordsBySeparator(self, words: List[str], separator: str) -> List[str]:
        l = []
        for i in range(len(words)):
            s = words[i]
            word = "";
            for j in range(len(s)):
                if(s[j] == separator[0]):
                    if(len(word)):l.append(word)
                    word = ""
                else: word += s[j]
            if(len(word)):l.append(word);
        return l