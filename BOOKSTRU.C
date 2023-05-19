 #include<stdio.h>
 #include<conio.h>
 struct books
 {char name[50],author[50];
 int price;
 }bks[100];
 int main()
 {int i,n;
 clrscr();
 printf("enter the no.of books:");
 scanf("%d",&n);
 printf("enter the book's name,author and price:");
 for(i=1;i<=n;i++)
 {scanf("%s%s%d",&bks[i].name,&bks[i].author,&bks[i].price);
 }
 printf("the books details are:\nBK_NAME,\nBK_AUTHOR,\nBK_PRICE\n");
 for(i=1;i<=n;i++)
 {printf("%s%s%d",bks[i].name,bks[i].author,bks[i].price);
 }
 getch();
 return 0;
 }