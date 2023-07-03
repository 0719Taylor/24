#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////struct - 结构体关键字    Stu - 结构体标签    struct Stu - 结构体类型
//struct Stu     //定义一个结构体类型,不占用空间
//{
//	//成员变量	
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;     //s1,s2,s3是三个全局的结构体变量(尽量不使用全局变量)

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = { "张三",20,"18229494292","男" }; //创建结构体变量（局部变量）
//	Stu s2 = {"旺财",19,"12394120402","女"};
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
//void Print2(Stu* ps)  //结构体传参的时候,要传结构体的地址较好
//{
//	printf("name:%s\n",ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"1559239","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}






//栈
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