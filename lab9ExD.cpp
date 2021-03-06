#include <iostream>
#include <string.h>
using namespace std;

void insertion_sort(int *int_array, int n);
void insertion_sort(const char** str_array, int n);

int main(void)
{
    const char* s[] = { "AB", "XY", "EZ"};
    const char** z = s;
    z += 1;

    
    cout << "The value of **z is: " << **z << endl;
    cout << "The value of *z is: " << *z << endl;
    cout << "The value of **(z-1) is: " << **(z-1)<< endl;
    cout << "The value of *(z-1) is: " << *(z-1)<< endl;
    cout << "The value of z[1][1] is: " << z[1][1]<< endl;
    cout << "The value of *(*(z+1)+1) is: " << *(*(z+1)+1)<< endl;
 
    // point 1

    int a[] = { 413, 282, 660, 171, 308, 537 };
    
    int i;
    int n_elements = sizeof(a) / sizeof(int);
    
    cout << "Here is your array of integers before sorting: \n";
    for(i = 0; i < n_elements; i++)
        cout <<  a[i] << endl;
    cout << endl;
    
    insertion_sort(a, n_elements);
    
    cout << "Here is your array of ints after sorting:  \n" ;
    for(i = 0; i < n_elements; i++)
        cout << a[i] << endl;
#if 1
    const char* strings[] = { "Red", "Blue", "pink","apple", "almond","white",
                                               "nut", "Law", "cup"};
    
    n_elements = sizeof(strings) / sizeof(char*);
    
    cout << "\nHere is your array of strings before sorting: \n";
    for(i = 0; i < n_elements; i++)
        cout <<  strings[i] << endl;
    cout << endl;

    insertion_sort(strings, 9);

    
    cout << "Here is your array of strings after sorting:  \n" ;
    for(i = 0; i < n_elements; i++)
        cout << strings[i] << endl;
    cout << endl;
    
#endif
    
    return 0;
}

void insertion_sort(int *a, int n)
{
    int i;
    int j;
    int value_to_insert;
    
    for (i = 1; i < n; i++) {
        value_to_insert = a[i];
        
        /* Shift values greater than value_to_insert. */
        j = i;
        while ( j > 0 && a[j - 1] > value_to_insert  ) {
            a[j] = a[j - 1];
            j--;
        }
        
        a[j] = value_to_insert;
    }
}
void insertion_sort(const char** s, int n){
    int i;
    int j;
    const char* word_to_insert;

    for(i = 1; i < n; i++){
        word_to_insert = s[i];

        j = i;
        while( j > 0 && strcmp(s[j - 1], word_to_insert) > 0 ){
            s[j] = s[j - 1];
            j--;
        }

        s[j] = word_to_insert;
    }

}