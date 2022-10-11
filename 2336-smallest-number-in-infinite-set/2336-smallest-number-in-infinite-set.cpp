class SmallestInfiniteSet {
public:
    deque<int> dq{1};
    SmallestInfiniteSet() {
        dq = deque<int> {1};
    }
    
    int popSmallest() {
        int ans = dq.front();
        if(dq.size() == 1) dq[0]++;
        else dq.pop_front();
        return ans;
    }
    
    void addBack(int num) {
        if(dq.size() == 1 && num < dq[0]) dq.push_front(num);
        else if(dq.size() > 1 && num < dq.back()) {
            auto it = lower_bound(dq.begin(), dq.end(), num);
            if(*it == num) return;
            dq.insert(it, num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */