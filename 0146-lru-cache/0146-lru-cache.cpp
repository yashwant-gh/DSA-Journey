class LRUCache {
public:
    class Node{
        public:
        int key;
        int value;
        Node* prev;
        Node* next;
        Node(int k,int v){
            key = k;
            value = v;
            prev = next = NULL;
        }
    };
    unordered_map<int,Node*>mp;
    int cap = 0;
    Node* head;
    Node* tail;

    //for MRU(Most recently used)
    void addToFront(Node* temp){
        temp->next = head->next;
        temp->prev = head;
        head->next->prev = temp;
        head->next = temp;
    }

    // to remove when capacity is full
    void remove(Node* temp){
        Node* left = temp->prev;
        Node* right = temp->next;
        left->next = right;
        right->prev = left;
    }

    // move to front
    void moveToFront(Node* temp){
        remove(temp);
        addToFront(temp);
    }
    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())return -1;
        Node * temp = mp[key];
        moveToFront(temp);
        return temp->value;
    }
    
    void put(int key, int value) {
        //if already exist
        if(mp.find(key)!=mp.end()){
            Node* temp = mp[key];
            temp->value = value;
            moveToFront(temp);
            return;
        }
        //if full
        if(mp.size()==cap){
            Node* temp = tail->prev;
            mp.erase(temp->key);
            remove(temp);
            delete temp;
        }
        // create new node if not exist and not full
        Node* temp = new Node(key,value);
        mp[key] = temp;
        addToFront(temp);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */