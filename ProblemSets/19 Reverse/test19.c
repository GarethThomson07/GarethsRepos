/*Complete the below program so that it reverses the elements of a 1D array of float numbers. The
1D array has a dynamic length, and the user inputs the elements of the array. You should write the
part that reverse the array and then print the array after reversing.
Note: The reverse happens in place without the use of other arrays and the array itself should be
reversed and not simply printed in reverse order.*/
 #include <stdio.h>
 int main () {
 int length ;

 // Get the array length from the user
 printf ( " Enter the length of the array : " ) ;
 scanf ( " % d " , &length ) ;

 // Allocate memory for the array dynamically
 float arr [ length ];

 // Get array elements from the user
 printf ( " Enter the elements of the array :\n " ) ;
 for ( int i = 0; i < length ; i ++) {
 printf ( " Element % d : " , i + 1) ;
 scanf ( " % f " , & arr [ i ]) ;
 }

 // Print the original array
 printf ( " \n Original array : " ) ;
 for ( int i = 0; i < length ; i ++) {
 printf ( " %.2f " , arr [ i ]) ;
 }
 printf ( " \n " ) ;

// In - place reversal
for (int a = 0; a < length / 2; ++a) {
    float tmp = arr[a];
    arr[a] = arr[length - 1 - a];
    arr[length - 1 - a] = tmp;
}

// Print the reversed array
printf("\nReversed array: ");
for (int i = 0; i < length; i++) {
    printf("%.2f ", arr[i]);
}
printf("\n");
 return 0;
}