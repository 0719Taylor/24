#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////struct - �ṹ��ؼ���    Stu - �ṹ���ǩ    struct Stu - �ṹ������
//struct Stu     //����һ���ṹ������,��ռ�ÿռ�
//{
//	//��Ա����	
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;     //s1,s2,s3������ȫ�ֵĽṹ�����(������ʹ��ȫ�ֱ���)

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = { "����",20,"18229494292","��" }; //�����ṹ��������ֲ�������
//	Stu s2 = {"����",19,"12394120402","Ů"};
//	return 0;
//}









//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n",t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);	
//	return 0; 
//}











//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n",tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);	
//
//}
//void Print2(Stu* ps)  //�ṹ�崫�ε�ʱ��,Ҫ���ṹ��ĵ�ַ�Ϻ�
//{
//	printf("name:%s\n",ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"1559239","��" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}






//ջ
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}