#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int x,y,z;
   cout<<"x= :";
   cin>>x;
   cout<<"\ny :";
   cin>>y;
   cout<<"\nz :";
   cin>>z;
   cout<<"\n\nresult :";
   if((z>=(x-(y%x)))||((y%x)==0))
	cout<<" YES";
   else
	cout<<" NO";
   getch();
}