# include <stdio.h>

 void f(int); // 前置定义，形参可写可不写
 void g(void)
 {
     f(5);
 }
 void f(int i) // 每次调用一次f,都为i分配一次空间
 {
     printf("i = %d\n",i);
 }
 int main (void)
 {
     int i;
     g();
     return 0;
 }