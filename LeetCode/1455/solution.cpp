//  1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int idx = 1;

        while(ss >> word){
            if(!word.find(searchWord)) return idx;
            idx++;
        }

        return -1;
    }
};