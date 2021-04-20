#include <iostream>
#include "../stack.cpp"
#include "tests.h"
int main(int argc, char *argv[])
{
    push(33);
    push(45);
    push(69);
    push(420);

    if(argc>1)
    {
        if (strcmp(argv[1], "0")==0){
           return  popTest();
        }else if (strcmp(argv[1], "1")==0){
            return pushTest(3);
        } else if (strcmp(argv[1],"2")==0){
            return emptyTest();
        } else if (strcmp(argv[1], "3")==0){
            return peekTest();
        }
    }
}

int peekTest(){
    int headData = top-> data;
        if(headData == peek()){
            return 0;
        }
        return 1;
}

int emptyTest(){
    while (top!=NULL){
        pop();
    }
    if(isEmpty()==true){
        return 0;
    }
        return 1;

}

int pushTest(int x){
    push(x);
    int headData = top-> data;
    if(headData ==x){
        return 0;

    }
    return 1;
}

int popTest(){
    struct Node* temp;
    temp=top->next;
    int tempData=temp->data;
    pop();
    int headData =top->data;
    if(tempData==headData){
    return 0;
}
    return 1;

}


