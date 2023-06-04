#include <iostream>
using namespace std;
class List;
class Node;
class List{
    private:
        class Node{
            private :
                int data;
                Node *link;
            public :
                void setData(int data, Node *ptr){
                    this->data = data;
                    link = ptr;
                }
                void showData(){
                    cout<<data<<endl;
                    cout<<link<<endl;
                }
        }*p;
    public:
        void create(){
            p = new Node;
            p->setData(10, NULL);
        }
        void showData(){
            p->showData();
        }  
};

int main(void){
    system("cls");
    List l1;
    l1.create();
    l1.showData();
    return 0;
}