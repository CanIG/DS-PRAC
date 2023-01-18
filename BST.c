#include<stdio.h> 
#include<conio.h> 
int BinarySearch(int a[], int n, int key) { 
int start = 0, last = n-1, mid; 
while (start <= last) { 
 mid=(start + last)/2; 
 if(key == a[mid]) 
return mid; 
 else if (key < a[mid]) 
last = mid-1; 
else 
start = mid + 1; 
} 
return -1; 
} 
int main(){ 
int arry[20],i,n; 
int flag, key; 
//clrscr(); 
printf("\nEnter how many numbers you want to insert: "); 
scanf("%d",& n); 
printf("\nEnter the number\n"); 
for(i=0;i<n;i++) 
 scanf("%d",&arry[i]); 
printf("\nEnter number to be serarch in given list:-"); 
scanf("%d",&key); 
flag =BinarySearch(arry,n,key) ; 
if(flag == -1) 
 printf("\nelement %d not found", key); 
else 
 printf("\nelement %d found at position %d", flag); 
getch(); 
return 0; 
}