class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> mp;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val)){
            return false;
        }
        v.push_back(val);
        mp[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.count(val)){
            int index = mp[val];
            int x = v.back();
            v[index] = x;
            mp[x] = index;
            v.pop_back();
            mp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int index = rand()%v.size();
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */