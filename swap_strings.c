
#include <stdio.h>
void func (char *ptr);
int main()
{
   char array[]="ahmed mohamed salem ";
    
    func(array);
    return 0;
}
void func (char *ptr)
 {
    char i,j;
    char firstNameSize;
    char secondNameSize;
    char temp[10];   
    for(i=0;ptr[i]!=' ';i++)
    {
        temp[i]=ptr[i]; // store  first name is in temp
    }
    firstNameSize=i; // to get first name size 
    for(i=firstNameSize+1;ptr[i]!=' ';i++)
    {} // to get 2nd name size 
    secondNameSize=i-firstNameSize-1; 
    if(firstNameSize==secondNameSize)
    {
        // swap
        for(int j=0;j<firstNameSize;j++)
        {
            ptr[j]=ptr[j+firstNameSize+1];
            ptr[j+firstNameSize+1]=temp[j];
        }
    }
    else if (firstNameSize >secondNameSize)
    {
        for(j=0;j<secondNameSize;j++)
        {
            ptr[j]=ptr[j+firstNameSize+1];
        }
        for(int w=0;w<(firstNameSize-secondNameSize);w++)
        {
            ptr[w+secondNameSize]=' '; // write spaces to cover the dif bet the two names
        }
        for(int z=0;z<firstNameSize;z++)
        {
            ptr[z+secondNameSize+1]=temp[z];
        }
    }
    else 
    {
        for(j=0;j<secondNameSize;j++)
        {
            ptr[j]=ptr[j+firstNameSize+1];
        }
        for(int w=0;w<(secondNameSize-firstNameSize);w++)
        {
            ptr[w+secondNameSize]=' '; // write spaces to cover the dif bet the two names
        }
        for(int z=0;z<firstNameSize;z++)
        {
            ptr[z+secondNameSize+1]=temp[z];
        }
    }
      printf("%s",ptr);
 }