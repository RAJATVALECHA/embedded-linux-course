#include<iostream>
using namespace std;

int display(int m,int n,int a[100][100])
{
for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            if (a[x][y] == 1) {
				cout << "#";}
			else if (a[x][y] == 0) {
				cout << " " ;
            }
        
}
cout<<"\n";
}
}
int main()
{
int x,y,inx,iny;
cout<<"please enter grid size length";
cin>>x;
cout<<"please enter grid size breadth";
cin>>y;
cout<<"please enter x coordinate of initial position";
cin>>inx;
cout<<"please enter y coordinate of initial position";
cin>>iny;
int matrix[100][100];
for (int m = 0; m < x; m++) {
        for (int n = 0; n < y; n++) {
matrix[m][n]=0;
}
}
char w,a,s,d,e,choice;
int posx,posy;
start:
matrix[inx][iny]=1;
posx=inx;
posy=iny;

loop:
cout<<"what's the move\nw for up\na for left\ns for down\nd for right\ne for end the moves\nc for clear\n";
cin>>choice;
if(choice=='w')
{
if(posx>0)
posx=posx-1;
}
if(choice=='a')
{if(posy>0)
posy=posy-1;
}
if(choice=='s')
{if(posx<x-1)
posx=posx+1;
}
if(choice=='d')
{if(posy<y-1)
posy=posy+1;
}
if(choice=='e')
{
goto end;
}
if(choice=='c')
{for (int m = 0; m < x; m++) {
        for (int n = 0; n < y; n++) {
matrix[m][n]=0;
}
}display(x,y,matrix);
goto start;
}
matrix[posx][posy]=1;
display(x,y,matrix);
goto loop;
end:
return 0;
}


