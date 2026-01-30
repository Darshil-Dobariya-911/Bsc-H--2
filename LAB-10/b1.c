// Write following advance programs in C. (Array) 
// 1.  We  are  given  two  arrays  that  represent  the  arrival  and  departure  times  of  trains;  the  task  is  to  find  the 
// minimum number of platforms required so that no train waits. 
// Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00}, dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00}  
// Output: 3  
// Explanation: There are at-most three trains at a time (time between 9:40 to 12:00)
#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting


int main() {
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;


    int plat_needed = 1;   // platforms currently needed
    int max_plat = 1;     // maximum platforms required
    int i = 1, j = 0;

    // Traverse arrival and departure arrays
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            plat_needed++;
            i++;
        } else {
            plat_needed--;
            j++;
        }

        if (plat_needed > max_plat) {
            max_plat = plat_needed;
        }
    }

    printf("Minimum number of platforms required: %d\n", max_plat);
    return 0;
}
