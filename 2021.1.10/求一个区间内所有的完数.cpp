 #include<stdio.h>

int main() {
        int a,b;
		printf("�������������a b���������Ϊ1-10000����\n");
                scanf("%d %d",&a,&b);
				printf("Output:\n");
				if((a<1)||(b>10000)||(a>=b))
					printf("��������\n");
				else
				{
				printf("%d��%d֮����������Ϊ��",a,b);
                if (a<=6 && b>=6) printf("6 ");
                if (a<=28 && b>=28) printf("28 ");
                if (a<=496 && b>=496) printf("496 ");
                if (a<=8128 && b>=8128) printf("8128 ");
				if(a>=1&&b<6) printf("û��������");
				if(a>6&&b<28) printf("û��������");
				if(a>28&&b<496) printf("û��������");
				if(a>496&&b<8128) printf("û��������");
				if(a>8128&&b<=10000) printf("û��������");

				printf("\n");
				}
        
        return 0;
} 
