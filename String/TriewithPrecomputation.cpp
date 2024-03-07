struct Node{
    int stringsEndingHere, stringsEndingBelow;
    vector<int> childReferences;

    Node(){
        stringsEndingHere = 0;
        stringsEndingBelow = 0;
        childReferences.resize(26);
        fill(childReferences.begin(), childReferences.end(), -1);
    }

};

struct Trie{
    int root;
    vector<Node> nodes;
    
    Trie(){
        root = 0;
        nodes.emplace_back(); // nodes.push_back(Node());
    }
    
    void precomputeSpecialStringsBelow(int x){
        nodes[x].stringsEndingBelow = 0;    
        for(int i = 0; i < 26; i++){;
            if(nodes[x].childReferences[i] != -1){
                nodes[x].stringsEndingBelow += nodes[nodes[x].childReferences[i]].stringsEndingBelow;
            }
        }
        nodes[x].stringsEndingBelow += nodes[x].stringsEndingHere;
    }
    
    
    void addRecursively(string& a, int currentNode, int index){
        if(index == a.size()){
            nodes[currentNode].stringsEndingHere++;
            precomputeSpecialStringsBelow(currentNode);
            return;
        }
        int child = nodes[currentNode].childReferences[a[index] - 'a'];
        
        if(child == -1){
            nodes[currentNode].childReferences[a[index] - 'a'] = nodes.size();
            nodes.emplace_back();
            child = nodes[currentNode].childReferences[a[index] - 'a'];
        }
        addRecursively(a, child, index + 1);
        precomputeSpecialStringsBelow(currentNode);
    }
    void addString(string a){
        addRecursively(a, root, 0);
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
    
    int commonPrefixes(string a){
        int currentNode = root;
        for(char ch : a){
            int characterIndex = ch - 'a';
            if(nodes[currentNode].childReferences[characterIndex] == -1){
                return 0;
            }
            currentNode = nodes[currentNode].childReferences[characterIndex];
        }
        return nodes[currentNode].stringsEndingBelow;
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
    
    cout << newTrie.commonPrefixes(x) << endl;
} 
