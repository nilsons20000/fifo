
#include <iostream>

 using namespace std;

struct MyFIFO{

	MyFIFO *Next;int val;
};

class List {
	int size;

 public:MyFIFO *Head, *Tail;
    void Add(const int x);
    void Show();
    void Del();
};


void List::Add(int x){
	static int count=0;
	MyFIFO *temp = new MyFIFO;
	List *tempp=new List;
	temp->Next = tempp->Head;
	temp->val= x;
	if (Head != NULL){
		Tail->Next = temp;
		Tail = temp;
	} else Head = Tail = temp;
	count++;
	size = count;
	Tail->Next = Head;

}
void List::Show(){
	MyFIFO *temp = Head;

    do{
        cout << temp->val << " ";
        temp = temp->Next;
	}while(temp!=Tail->Next);
	cout << "\n";
}

void List::Del(){
	int count = 0;

	while (temp != Tail){
		temp = Head;
		Head = Head->Next;
		   cout << "Nodzesta saite ar:  " << temp->val << "\n";
		delete temp;
	}
    size = 0;
}


int main(){

    int value,atkartosana;;
	List Q1;
	Q1.Head = NULL;
	do{
        cout<<"Ievadi vertibas";
        cin>>value;
        cout<<"Atkartot 1, NE-0";
        cin>>atkartosana;
        Q1.Add(value);
	}while(atkartosana!=0);

	Q1.Show();
	Q1.Del();

	cin.get();

   return 0;
}
