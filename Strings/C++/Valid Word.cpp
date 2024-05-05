class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
        set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    set<char> consonants{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z',
                             'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    bool has_vowel = false;
    bool has_consonant = false;

    for (char c : word) {
        if (!isalnum(c)) {  
            return false;
        }

        if (vowels.count(c) > 0) {
            has_vowel = true;
        }

        if (consonants.count(c) > 0) {
            has_consonant = true;
        }
    }

    if (!has_vowel || !has_consonant) {
        return false;
    }
        return true;
    }
};