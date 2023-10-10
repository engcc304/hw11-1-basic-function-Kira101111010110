/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h>

struct Sumo {
    int sum ;
    int a[3] ;
    int put ;
} ; //end struct

int sum(int isum) {
    struct Sumo a[3] ;
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "Input %d :\n", i + 1 ) ;
        scanf( "%d", &a[i].put ) ;
        isum += ( a[i].put ) ;
    } //end for
    return isum ;  
} //end function

int main( ) {
    int isum = 0 ;
    int function = sum( isum ) ;
    printf( "Summation = %d (Calculate by Additional Function) ", function ) ;
    return 0 ;
} //end main
