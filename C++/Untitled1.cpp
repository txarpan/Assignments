#ifndef H_StackType
#define H_StackType
#include <iostream>
#include <cassert>
using namespace std;
template<class Type>
class stackType
{
      
      public:
             const stackType<Type>& operator=(const stackType<Type>&);
             void initializeStack();
             bool isEmptyStack();
             bool isFullStack();
             void destroyStack();
             void push(const Type& newItem);
             Type top();
             void pop();
             stackType(int stackSize = 100);
             stackType(const stackType<Type>& otherStack);
             ~stackType();
             
             
      private:
              int maxStackSize;
              int stackTop;
              Type *list;
              void copyStack(const stackType<Type>& otherStack);
};
template<class Type>
void stackType<Type>::copyStack(const stackType<Type>& otherStack)
{
     delete [] list;
     maxStackSize = otherStack.maxStackSize;
     stackTop = otherStack.stackTop;
     
     list = new Type[maxStackSize];
     assert(list != NULL);
     
     for(int j = 0; j < stackTop; j++)
     list[j] = otherStack.list[j];
     
}
template<class Type>
stackType<Type>::stackType(const stackType<Type>& otherStack)
{
      list = NULL;
      
      copyStack(otherStack);
      
}
template<class Type>
const stackType<Type>& stackType<Type>::operator=(const stackType<Type>& otherStack)
{
      if (this != &otherStack)
      copyStack(otherStack);
      
      return *this;
}
template<class Type>
void stackType<Type>::initializeStack()
{
     stackTop = 0;
}
template<class Type>
void stackType<Type>::destroyStack()
{
     stackTop = 0;
}
template<class Type>
bool stackType<Type>::isEmptyStack()
{
     return(stackTop == maxStackSize);
}
template<class Type>
bool stackType<Type>::isFullStack()
{
     return(stackTop == maxStackSize);
}
template<class Type>
void stackType<Type>::push(const Type& newItem)
{
     if(!isFullStack())
     {
         list[stackTop] = newItem;
         
         stackTop++;
     }
     
     else
         cerr<<"Cannot add to a full stack."<<endl;
}
template<class Type>
Type stackType<Type>::top()
{
     assert(stackTop != 0);
     
     return list[stackTop - 1];
}
template<class Type>
void stackType<Type>::pop()
{
     if(!isEmptyStack())
     {
        stackTop--;
     }
     else
        cerr<<"Cannot remove from an empty stack."<<endl;
}
template<class Type>
stackType<Type>::stackType(int stackSize)
{
     if(stackSize <= 0)
     {
       cerr<<"The size of the array to hold the stack must "
           <<"be positive."<<endl;
       cerr<<"Creating an array of size 100."<<endl;
   
       maxStackSize = 100;
     }
       
      else
        maxStackSize = stackSize;
        
        stackTop = 0;
        
        list = new Type[maxStackSize];
}
template<class Type>
stackType<Type>::~stackType()
{
     delete [] list;
}
#endif
