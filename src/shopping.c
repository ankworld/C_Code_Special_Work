#include <stdio.h>

int main(){

    char product[][80] = { "Keyboard", "Mouse", "Joy Stick", "IPhone", "Hanphone" };
    int price[] = {5300, 1890, 1350, 35000, 2890};
    int i;
    for (i = 0; i < 5; i++) {
        //ใช้ลูป for ใช้แสดงสินค้าคู่กับราคาสอนค้า
        printf("%d. %s -> %d\n", i+1, product[i], price[i]);
    }
    int productNo; //ตัวแปรที่นำมาใช้รับเลขที่สั่งสินค้า
    int total = 0; //ราคารวม
    int count = 0; //จำนวนสินค้า
    do{
        printf("ProductNo : "); //แสดงประโยค productNO :
        scanf("%d", &productNo); //รับค่าสินค้าทั้งหมดเก็บไว้ใน productNo
        if(productNo == 0) break; //โปรแกรมจะหยุดเมื่อการสั่งสินค้าเป็น 0
        if(productNo > 5) continue;
        total += price[productNo-1];
        count++; //จำนวนสินค้าที่สั่ง
    } while (count < 100);
    printf("Total : %d", total); //ใช้แสดงราคารวมของสินค้าที่เราสั่งไป
}
