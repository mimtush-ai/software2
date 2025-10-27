#include<iostream>
using namespace std;

int main(){

    int initialAllocation = 5;
    int a[initialAllocation] = {10,20,30,40,50};
    int logicalSize = 5;
    cout << "Array before insertion : ";
    for(int i = )
    int insertPosition;
    cout << "Insert the index to insert element: ";
    cin >> insertPosition;
    int valueToInsert;
    cout << "Provide the value to be inseretd: ";
    cin >> valueToInsert;
    in(logicalSize >= initialAllocation){
        int b[initialAllocation * 2];
        for (int i = 0; i < logicalSize; i++){
            b[i] = a[i];
        }
        for(int i = logicalSize - 1;i >= insertPosition; i--){
            b[i + 1] = b[1];
        }
        b[insertPosition] = valueToInsert;
        logicalSize++;
        cout<< "Array after insertion with overflow: ";
        for (int i = 0,i < logicalSize;i++){
            cout<< b[i] <<" ";
        }
        cout<<endl;
    } else{
        for(int i = logicalSize - 1;i >=insertPosition;i-)
            a[i+1] = a[i];
            a[insertPosition] = valueToInsert;
            logicalSize++;

            cout<< "Array after insertion without overflow: ";
            for(int i = 0; i< logicalSize;i++){
                cout << a[i] << " ";
            }
    }
    return 0;
}
