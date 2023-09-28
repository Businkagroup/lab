int main(){
    
    int i;
    
    i = 69;
    
    int number = 72;
    
    int i = 69 + 72;
    
    int array [] = {0, 0, 0};
    
    int *iPointer = &i;
    
    number = *iPointer;
    
    *iPointer = 15;
    
    iPointer = &array[0];
    
    iPointer = iPointer + 2;
    
    *iPointer = 6;
    
    array[0] = 5;
 
  return 0;
}
