# 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        words = sentence.split(' ')
        for i, word in enumerate(words, 1):
            if word.startswith(searchWord):
                return i
        return -1;
        