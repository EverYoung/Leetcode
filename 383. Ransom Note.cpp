class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() == 0) return true;
        if(magazine.size() == 0) return false;
        unordered_map<char, int> hashmap;
        for(int i = 0; i < magazine.size(); ++i){
            ++hashmap[magazine[i]];
        }
        for(int i = 0; i < ransomNote.size(); ++i){
            --hashmap[ransomNote[i]];
            if(hashmap[ransomNote[i]] < 0) return false;
        }
        return true;
    }
};
