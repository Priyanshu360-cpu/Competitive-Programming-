
class TextEditor {
public:
struct node{
    char val;
    struct node* next;
    struct node* prev;
};
struct node* position=NULL;
    TextEditor() {
       
    }
    void display(struct node* edit){
        while(edit){
            cout<<edit->val;
            edit=edit->prev;
        }
    }
    void merge(struct node* editor,string text){
        for(auto x:text){
            struct node* rr=(struct node*)malloc(sizeof(struct node));
            rr->val=x;
            rr->next=NULL;
            rr->prev=editor;
            editor->next=rr;
            editor=rr;
        }
    }
    void addText(string text) {
        if(position==NULL){
        position=(struct node*)malloc(sizeof(struct node));
        position->val='`';
        position->next=NULL;
        position->prev=NULL;
        }
        merge(position,text);
        if(position->val=='`'){
            position=position->next;
            position->prev=NULL;
        }
        struct node* editor=position;
        while(editor->next!=NULL)editor=editor->next;
        position=editor;
        
    }
    int deleteText(int k) {
        int p=0;
        if(position&&position->next==NULL){
     while(k--&&position){
         position=position->prev;
         if(position)
         position->next=NULL;
         p++;
     }   
        }
        if(position&&position->prev&&position->next){
            struct node* editor=position;
            while(k--&&editor){
                p+=1;
                editor=editor->prev;
            }
            position=position->next;
            position->prev=editor;
        }
     return p;
    }
    string cursorLeft(int k) {
        string d="";
        int o=0;
        while(k--&&position&&position->prev){
            position=position->prev;
        }
        struct node* editor=position;
        if(o!=10&&editor&&editor->prev){
            while(o<10&&editor){
                 d=d+editor->val;
                 o+=1;
                 editor=editor->prev;
            }
        }
        reverse(d.begin(),d.end());
        return d;        
    }
    
    string cursorRight(int k) {
        string d="";
        int o=0;
        k-=1;
        while(k--&&position&&position->next){
            position=position->next;
        }
        struct node* editor=position;
        if(o!=10&&editor&&editor->prev){
            while(o<10&&editor){
                 d=d+editor->val;
                 o+=1;
                 editor=editor->prev;
            }
        }
       reverse(d.begin(),d.end());
        return d;
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */
