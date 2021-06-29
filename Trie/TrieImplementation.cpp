//Implementation of Trie using Pointers

class TrieNode {
public:
    // Initialize your data structure here.
    bool is_word;
    TrieNode *children[26];
    
    TrieNode() {
        is_word = false;
        
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            
            if (cur->children[k] == NULL)
            {
                cur->children[k] = new TrieNode();
            }
            
            cur = cur->children[k];
        }
        
        cur->is_word = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }
        
        return cur->is_word;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        int word_len = prefix.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = prefix[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }
        
        return true;
    }

private:
    TrieNode* root;
};



//Implementation of Trie using 2D vector

vector<vector<int> > T;

class Trie {
public:
    Trie() {
        T.clear();
        T.push_back(vector<int>(27,0));
    }
    
    void insert(string word) {
        int i = 0;
        for(char c : word) {
            int &j = T[i][c-'a'];
            if(!j) j = T.size(), T.push_back(vector<int>(27,0));
            i = j;
        }
        T[i][26] = 1;  // 27th slot as end mark.
    }
    
    bool match(string word, bool prefix) {
        int i = 0;
        for(char c : word) if(!(i=T[i][c-'a']))
            return false;
        return prefix | T[i][26];
    }
    
    bool search(string word) {
        return match(word, false);
    }
    
    bool startsWith(string prefix) {
        return match(prefix, true);
    }
};
