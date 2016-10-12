#include <iostream>
void bubbleSort(int array[]);
int main()
{
    int original[5] = {11, 2, 13, 4, 5};
    
    std::cout<<"Printing original array"<<std::endl;
    for(int i = 0; i<5; i++){
        std::cout<<original[i]<<std::endl;
    }
    
    bubbleSort(original);

    
    std::cout<<"Printing sorted array"<<std::endl;
    for(int i = 0; i<5; i++){
        std::cout<<original[i]<<std::endl;
    }
    
    return 0; 
}

void bubbleSort(int array[]){
    int temp;
    int flag = 1;
    int numLength = 5;
    
    for(int i = 1; (i<=numLength) && flag; i++){
        flag = 0;
        for(int j=0; j<(numLength-1); j++){
            if(array[j+1]>array[j]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = 1;
            }
        }
    }
}
