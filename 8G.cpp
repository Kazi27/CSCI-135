/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 8G

comments
comments
comments
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>


int main() { 

int img[MAX_H][MAX_W]; 

int H, W; 

readImage(img, H, W); // read it from the file "inImage.pgm" 

// h and w were passed by reference and 

// now contain the dimensions of the picture 

// and the 2-dimesional array img contains the image data 

// Now we can manipulate the image the way we like 

// for example we copy its contents into a new array 

int out[MAX_H][MAX_W]; 

//i am assuming neighbours that are not present to be black 

//create a temp matrix initialised as black(0) with size 1 more on each edges 

int temp[MAX_H+2][MAX_W+2]; 

memset(temp,0,sizeof(temp)); //initialise with 0 

//copy original image into temp image 

for(int row = 0; row < H; row++) { 

for(int col = 0; col < W; col++) { 

temp[row+1][col+1] = img[row][col]; //skipping first row and first column of temp image 

} 

} 

int a,b,c,d,e,f,g,h,i; 

int func; 

for(int row =1; row<H+1; row++ ){ 

for(int col=1; col<W+1; col++){ 

a= temp[row-1][col-1]; 

b=temp[row-1][col]; 

c=temp[row-1][col+1]; 

//no use of d,e,f 

g=temp[row+1][col-1]; 

h=temp[row+1][col]; 

i=temp[row+1][col+1]; 

func= (g+2h+i)-(a+2b+c); 

if(func<0) func=0; 

if(func>255) func=255; 

//put it in output image at its correct position 

out[row-1][col-1] = func; 

} 

} 


writeImage(out, H, W); 

}