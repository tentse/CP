struct Node{
    int stringsEndingHere = 0;
    vector<int> childReferences;

    Node(){
        specialNode = 0;
        childReferences.resize(26);
        fill(childReferences.begin(), childReferences.end(), -1);
    }
    bool canDeleteNode(){
        if(stringsEndingHere > 0)
            return false;
        
        for(int i = 0; i < 26; i++){
            if(childReferences[i] != -1)
                return false;
        }
        return true;
    }
};

struct Trie{
    int root;
    vector<Node> nodes;
    
    Trie(){
        root = 0;
        nodes.emplace_back(); // nodes.push_back(Node());
    }
    
    void addString(string a){
        int currentNode = root;
        for(char ch : a){
            int characterIndex = ch - 'a';
            if(nodes[currentNode].childReferences[characterIndex] == -1){
                nodes[currentNode].childReferences[characterIndex] = nodes.size();
                nodes.emplace_back(); // nodes.push_back(Node());
            }
            currentNode = nodes[currentNode].childReferences[characterIndex];
        }
        nodes[currentNode].stringsEndingHere++;
    }
    
    bool searchString(string a){
        int currentNode = root;
        for(char ch : a){
            int characterIndex = ch - 'a';
            if(nodes[currentNode].childReferences[characterIndex] == -1){
                return false;
            }
            currentNode = nodes[currentNode].childReferences[characterIndex];
        }
        return nodes[currentNode].stringsEndingHere > 0;
    }
    
    bool deleteRecursively(string& a,int currentNode, int index){
        if(index == a.size()){
            nodes[currentNode].stringsEndingHere--;
            return nodes[currentNode].canDeleteNode();
        }
        int childNode = nodes[currentNode].childReferences[a[index] - 'a'];
        bool childDeleted = deleteRecursively(a, childNode, index + 1);
        if(childDeleted){
            nodes[currentNode].childReferences[a[index] - 'a'] = -1;
        }
        return nodes[currentNode].canDeleteNode();
    }
    
    void deleteString(string a){
        if(!searchString(a))
            return;
        deleteRecursively(a, root, 0);
    }
};


void solve(){
    int n;
    cin >> n;
    vector<string> words(n);
    Trie newTrie = Trie();
    for(auto &i : words){
        cin >> i;
        newTrie.addString(i);
    }  
    
    string x;
    cin >> x;
    
    cout << newTrie.searchString(x) << endl;
} 
