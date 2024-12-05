// 2337. Move Pieces to Obtain a String
class Solution {
public:
    bool canChange(string start, string target) {
        int len = start.size();
        for(int i=0, j=0; i<len || j<len; i++, j++){
            while(i<len && start[i]=='_') i++;
            while(j<len && target[j]=='_') j++;

            if(start[i] != target[j]) return false;

            if(start[i]=='L' && i<j) return false;
            if(start[i]=='R' && i>j) return false;
        }
        return true;
    }
};