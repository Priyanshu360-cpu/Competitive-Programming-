//Heap sort

class Solution {
public:
int heapify(deque<int>& a,int i){
    if(i>=a.size())return INT_MAX;
    int p=heapify(a,(2*i)+1);
    int o=heapify(a,(2*i)+2);
    if(p<a[i]&&p<=o){
        int temp=a[i];
        a[i]=a[(2*i)+1];
        a[(2*i)+1]=temp;
    }else if(o<a[i]&&o<=p){
        int temp=a[i];
        a[i]=a[(2*i)+2];
        a[(2*i)+2]=temp;
    }
    return a[i];
}
    vector<int> sortArray(vector<int>& nums) {
     deque<int> a;
     for(auto x:nums)a.push_back(x);
     vector<int> e;
     while(a.size()){
         heapify(a,0);
         e.push_back(a.front());
         a.pop_front();
     }
     return e;
    }
};

//Multi-valued BST

class Solution {
public:
struct tree{
    vector<int> val;
    struct tree* left;
    struct tree* right;
};
void createtree(struct tree* root,vector<int>& nums,int i){
    if(nums[i]<(root->val[0])){
        if(!root->left){
            root->left=new struct tree;
            root->left->right=NULL;
            root->left->left=NULL;
            root->left->val.push_back(nums[i]);
        }else{
            createtree(root->left,nums,i);
        }
    }else if(nums[i]>root->val[0]){
              if(!root->right){
            root->right=new struct tree;
            root->right->left=NULL;
            root->right->right=NULL;
            root->right->val.push_back(nums[i]);
        }else{
            createtree(root->right,nums,i);
        }  
    }else{
        root->val.push_back(nums[i]);
    }
}
void solute(struct tree* root,vector<int>& e){
    if(!root)return;
    solute(root->left,e);
    for(auto x:root->val)e.push_back(x);
    solute(root->right,e);
}
    vector<int> sortArray(vector<int>& nums) {
        struct tree* root=new struct tree;
        root->left=NULL;
        root->right=NULL;
        root->val.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            createtree(root,nums,i);
        }
        vector<int> e;
        solute(root,e);
        return e;
    }
};

//Using hash-map

class Solution {
public:
map<int,int> a;
    vector<int> sortArray(vector<int>& nums) {
       for(auto x:nums){
           a[x]+=1;
       }
       vector<int> e;
       for(auto x:a){
           while(x.second--){
               e.push_back(x.first);
           }
       }
       return e;
    }
};
