#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main(){


 int data[] = {1,10,2,3,11,23,4,8,9,0};
 int n = 10;
 int temp,i,j;




cout<<endl<<" BEFORE SORT: ";

for (i=0;i<n;i++)

cout<<data[i]<<" ";

cout<<endl<<endl;

cout<<" AFTER SORT: ";

for(int i=0;i<n;i++)

{

temp = data[i];

j = i -1;

while(data[j]>temp && j>=0)

{

data[j+1] = data[j];

j++;

}

data[j+1] = temp;

}

for (i=0;i<n;i++)

{

cout<<data[i]<<"";

}

cout<<endl<<endl;



getch();
}
