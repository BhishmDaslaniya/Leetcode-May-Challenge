/*
    Probelm : Implement Trie (Prefix Tree)
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
class TrieNode {
public:
    TrieNode* p[26];
    int val;
    
    // Initialize your data structure here.
    TrieNode() {
        val = 0;
        memset(p, 0, sizeof(p));
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *cur = root;
        for (auto ch : word) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                cur->p[i] = new TrieNode();
            }
            cur = cur->p[i];
        }
        cur->val++;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *cur = root;
        for (auto ch : word) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                return false;
            }
            cur = cur->p[i];
        }
        return cur->val > 0;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *cur = root;
        for (auto ch : prefix) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                return false;
            }
            cur = cur->p[i];
        }
        return true;
    }
    
    private:
    TrieNode* root;

    // the method to calculate the number of a char
    int num(char x) { return x - 'a'; }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */