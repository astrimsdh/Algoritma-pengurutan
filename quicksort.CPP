#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;


	// rumus keseluruhan quickort
void quicksort(int a[],int low,int high){

	// menentukan variabel yang akan digunakan
   
   
 	int pivot, i, j;
 	i = low;
 	j = high;
 	pivot = a[low];  

 	while(low < high){//low < high
		  while((a[high] >= pivot)&&(low < high))//deret di low > pivot = deret high && low < high
       	high--;//high--
 			if(low != high){//low != high
 				a[low] = a[high];//Memasukkan deret yang lebih besar
            low++;//low++
         }
 			while((a[low] <= pivot)&&(low < high)){//memeriksa bagian lebih kecil 
 				low++;//low++
         }
 			if (low != high){
 				a[high] = a[low];
 				high--;
 			}
   }
   a[low] = pivot;
   pivot = low;
 	low = i;
 	high = j;

 	if(low < pivot)
 		quicksort(a, low, pivot-1);
 	if(high > pivot)
 		quicksort(a, pivot+1, high);
}


// program utama tina quicksort
int main (){

 int a, b, i, j;

 //waktu
int start = GetTickCount();

	// menentukan variabel
	// nu digentosna eusi data[...]={....};
   // sareng int n = ...;
 	int deret[200]={54, 16, 42, 4, 21};
 	int x = 5;


     // menampilkan data tina variabel deret
 	cout<<" Data Sebelum diurutkan: \n";
 		for(int d=0;d<x;d++){
 			cout<<" "<<deret[d];
 		}
 	cout<<endl<<endl;
   	// ieu teh rumus nu diluhur, tapi di masukeun void na hungkul
 	quicksort(deret,0,x-1);

   	// menampilkan data sesudah ngalewatan rumus, otomatis angkana oge tos berurutan
 	cout<<" Data setelah diurutkan: \n";
 		for(int i=0; i<x; i++){
 			cout<<" "<<deret[i];
      }
   cout<<endl<<endl;


 // waktu
int stop = GetTickCount();
cout<<endl;
cout<<" Waktu Eksekusi = "<<(stop-start)/1000<<" ms";

getch();
}


