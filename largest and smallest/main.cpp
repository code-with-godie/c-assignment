#include <iostream>

using namespace std;

int getLargestNumber(int myWeight[]);
int getSmallestNumber(int myWeight[]);
int main()
{
    int length;
    int index = 0;
    cout << "how many weight do you want to compare: ";
    cin >> length;
    int weight[length];
    cout << "enter " << length << "number \n";
    while(index < length){
        cout << "Enter number " << index + 1 << ": ";
        cin >> weight[index];
        index++;
    }
    int largest = getLargestNumber(weight);
    int smallest = getSmallestNumber(weight);
    cout << "the largest weight is : "  << largest << endl;
    cout << "the smallest weight is : " << smallest;
    return 0;
}
//a function to determine the largest number
int getLargestNumber(int *myWeight){
    int largest = myWeight[0];
   for(int i = 0; i < sizeof(myWeight);i++){
        if(myWeight[i] > largest ){
             largest = myWeight[i];
        }
    }
    return largest;
}
// a function to get the smallest number
int getSmallestNumber(int*myWeight){
    int smallest = myWeight[0];
    for(int i = 0; i < sizeof(myWeight);i++){
        if(myWeight[i] < smallest ){
             smallest = myWeight[i];
        }
    }
    return smallest;
}

