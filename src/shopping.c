#include <stdio.h>

int main(){

    char product[][80] = { "Keyboard", "Mouse", "Joy Stick", "IPhone", "Hanphone" };
    int price[] = {5300, 1890, 1350, 35000, 2890};
    int i;
    for (i = 0; i < 5; i++) {
        //���ٻ for ���ʴ��Թ��Ҥ��Ѻ�Ҥ��͹���
        printf("%d. %s -> %d\n", i+1, product[i], price[i]);
    }
    int productNo; //����÷��������Ѻ�Ţ�������Թ���
    int total = 0; //�Ҥ����
    int count = 0; //�ӹǹ�Թ���
    do{
        printf("ProductNo : "); //�ʴ�����¤ productNO :
        scanf("%d", &productNo); //�Ѻ����Թ��ҷ����������� productNo
        if(productNo == 0) break; //���������ش����͡������Թ����� 0
        if(productNo > 5) continue;
        total += price[productNo-1];
        count++; //�ӹǹ�Թ��ҷ�����
    } while (count < 100);
    printf("Total : %d", total); //���ʴ��Ҥ�����ͧ�Թ��ҷ���������
}
