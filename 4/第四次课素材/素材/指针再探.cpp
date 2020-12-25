#include <cstdio>
int main()
{
    char* ptr_c=0;
    int* ptr_i=0;
    int arr[20];//int型是4位； 
    decltype(&arr) ptr_a=0;
    ptr_c++;
    ptr_i++;
    ptr_a++;
    //在这里补充你的代码

    //在上面补充代码
    printf("%d, %d, %d\n", ptr_c, ptr_i, ptr_a);
}
