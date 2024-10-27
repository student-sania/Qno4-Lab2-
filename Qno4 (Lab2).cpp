# include <iostream>
using namespace std;
void insertAtGivLoc(int items[],int size,int elements,int index,int new_item){
	if (elements >= size){
		cout << "Array is Full.New Item Cannot Insert" << endl;
		return;
	}
	if (index < elements ){
		for(int i=elements; i>0; i--){
			items[i] = items[i-1];
			if (i == index){
				items[i] = new_item;
				break;
			}
		}
	}
	else{
		cout << "Index Out of Bound" << endl;
	}
}

void printItems(int items[],int elements){
	for (int i=0; i<elements; i++){
		cout << items[i] << " ";
	}
	cout << endl;
}
int main(){
	int size;
	cout << "Enter Array Size: ";
	cin >> size;
	int elements;
	cout << "Enter How many elements in Array ";
	cin >> elements;
	int items[size];
	cout << "Enter " << elements << " Array Items:"<< endl;
	for(int i=0; i<elements; i++){
		cin >> items[i];
	} 
	int index;
	cout << "Enter Index: ";
	cin >> index;
	int new_item;
	cout << "Enter New Item: ";
	cin >> new_item;
	
	insertAtGivLoc(items,size,elements,index,new_item);
	
	cout << "Array Items are: ";
	printItems(items,elements);
	
	return 0;
}