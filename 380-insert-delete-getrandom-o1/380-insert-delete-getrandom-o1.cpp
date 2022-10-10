class RandomizedSet {
public:
    unordered_set<int> uset;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(uset.count(val) > 0) return false;
        uset.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(uset.count(val) > 0) {
            uset.erase(val);
            return true;
        }
        return false;   
    }
    
    int getRandom() {
        auto random = rand() % uset.size();
        auto it = uset.begin();
        advance(it,random);
        return *it;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */