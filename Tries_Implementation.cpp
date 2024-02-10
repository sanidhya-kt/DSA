# include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TreeNode **children;
    bool isTerminal;

    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        for(int i = 0 ; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    TrieNode * root;
    public:
    Trie(){
        root = new TrieNode('\0');
    }

    // insert
    void insert(TrieNode * root, string word){
        if(word.size() == 0 ){
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'a';
        TrieNode * child;
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child; 
        }
        insert(child, word.subsstr(1));

    }
    void insert(string word){
        insert(root, word);
    }

    // remove

    void remove(TrieNode* root, string word){
        if(word.size() == 0){
            isTerminal = false;
            return;
        }
        TrieNode * child;
        int index = word[0] - 'a';
        if(root->children[index] != NULL){
            child= root->children[index];
        }else{
            return;
        }
        remove(child, word.subsstr(1));

        if(child -> isTerminal == false) {
for(int i = 0; i < 26; i++) {
if(child -> children[i] != NULL) {
return;
}
}
delete child;
root -> children[index] = NULL;
}
}
    }
};
int main(){

}