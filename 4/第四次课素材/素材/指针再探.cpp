#include <cstdio>
int main()
{
    char* ptr_c=0;
    int* ptr_i=0;
    int arr[20];//int����4λ�� 
    decltype(&arr) ptr_a=0;
    ptr_c++;
    ptr_i++;
    ptr_a++;
    //�����ﲹ����Ĵ���

    //�����油�����
    printf("%d, %d, %d\n", ptr_c, ptr_i, ptr_a);
}
