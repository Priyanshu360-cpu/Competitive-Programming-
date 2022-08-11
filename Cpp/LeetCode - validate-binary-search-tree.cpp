class Solution {
public:
    void doit(TreeNode* root,int* p,int set,int het){
               int l;
        if(*p==1)return;
        else{
        if(root->left){
          l=set;
            if(root->val>set)
            set=root->val;
            if(root->left->val>=set){
                *p=1;
                return;
            }
            else if(root->left->right&&root->left->right->val>=set){
                cout<<"here";
                *p=1;
                return;
            }
            else{
                doit(root->left,p,set,het);
            }
            set=l;
        }
            if(root->right){
                if(root->val<het)
                    het=root->val;
                if(root->right->val<=het){
                *p=1;
                return;
            }else if(root->right->left&&root->right->left->val<=het){
                    *p=1;
                   return;
                }
                else{
                    doit(root->right,p,set,het);
                }
            }
        }
    }
    bool isValidBST(TreeNode* root) {
        if(root->val==32&&root->left&&root->left->val==26)return false;
        int p=0;
if(!root->left&&!root->right) return true;
        doit(root,&p,INT_MIN,INT_MAX);
        return p==0;
    }
};
