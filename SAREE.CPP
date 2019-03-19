#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void ddaline(int x1,int y1,int x2,int y2,int c)
{
int x,y,length;
float xinc,yinc;
length=abs(x2-x1);
if(abs(y2-y1)>length)
length = abs(y2-y1);
xinc = (x2-x1)/(float)length;
yinc = (y2-y1)/(float)length;
int i;
for(i=0;i<length;i++)
{
x = x1+(i*xinc)+0.5;
y = y1+(i*yinc)+0.5;
putpixel(x,y,c);
}
}
void flower(int xc,int yc,int r,int c)
{
int x=0;
int y=r;
int p=1-r;
int i,j;
while(x<y)
{
putpixel(xc+x,yc+y,c);
putpixel(xc-x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc+y,yc+x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc+x,c);
putpixel(xc-y,yc-x,c);
x++;
for(i=0;i<5;i++)
{
if(p<0)
{
p=p+4*x+6;
}
else
{
y--;
p=p+4*(x-y)+10;
}
putpixel(xc,yc,c);
}
}
}




void flower1(int xc,int yc,int r,int c)
{
int x=0;
int y=r;
int p=1-r;
int i,j;
while(x<y)
{
putpixel(xc+x,yc+y,c);
putpixel(xc-x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc+y,yc+x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc+x,c);
putpixel(xc-y,yc-x,c);
x++;
for(i=0;i<=5;i++)
{
	for(j=0;j<=5;j++)
	{
if(p<0)
{
p=p+4*x+6;
}
else
{
y--;
p=p+4*(x-y)+10;
}
putpixel(xc,yc,c);
}
}
}
 }

void mycircle(int xc,int yc,int r,int c)
{
int x=0;
int y=r;
int p=1-r;
int i,j;
while(x<y)
{
putpixel(xc+x,yc+y,c);
putpixel(xc-x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc+y,yc+x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc+x,c);
putpixel(xc-y,yc-x,c);
x++;

if(p<0)
{
p=p+4*x+6;
}
else
{
y--;
p=p+4*(x-y)+10;
}
putpixel(xc,yc,c);
}
}

//==========small flowers in row1====================//
void flower2(int xc,int yc,int r,int c)
{
int x=0;
int y=r;
int p=1-r;
int i,j;
while(x<y)
{
putpixel(xc+x,yc+y,c);
putpixel(xc-x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc+y,yc+x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc+x,c);
putpixel(xc-y,yc-x,c);
x++;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(p<0)
{
p=p+4*x+6;
}
else
{
y--;
p=p+4*(x-y)+10;
}
putpixel(xc,yc,c);
}
}
}
 }


void rect(int x,int y)
{
int i;
int xm = getmaxx();
for(i=0;i<4;i++)
{
ddaline(x,y+(150*i),xm,y+(150*i),2);
}
}
/*void divrect(int x,int y)
{
int xm = getmaxx();
int i,j,c=1;
for(i=0;i<3;i++)
{
c=1;
for(j=0;j<2;j++)
{
ddaline(c*xm/3,y+(150*i),c*xm/3,y+(150*(i+1)),7);
c++;
}
}
} */
void boxes(int x)
{
int i;
int xm = (getmaxx()/15);
int xx = getmaxx();
for(i=0;i<16;i++)
{
ddaline(x+(xm*i),0,x+(xm*i),150,2);
}
for(i=1;i<=5;i++)
{
ddaline(x,30*i,xx,30*i,2);
}
}
void boundaryfill(int x,int y,int fillclr , int boundaryclr)
{
int currentclr = getpixel(x,y);
if((currentclr!=fillclr)&&(currentclr!=boundaryclr))
{
putpixel(x,y,fillclr);
boundaryfill(x+1,y,fillclr,boundaryclr);
boundaryfill(x-1,y,fillclr,boundaryclr);
boundaryfill(x,y-1,fillclr,boundaryclr);
boundaryfill(x,y+1,fillclr,boundaryclr);
}
}
void fill(int x)
{
boundaryfill(x+86,1,7,2);
boundaryfill(x+43,31,7,2);
boundaryfill(x+128,31,7,2);
boundaryfill(x+1,61,7,2);
boundaryfill(x+86,61,7,2);
boundaryfill(x+191,61,7,2);
boundaryfill(x+43,91,7,2);
boundaryfill(x+128,91,7,2);
boundaryfill(x+86,121,7,2);
//red color
boundaryfill(x+1,1,4,2);
boundaryfill(x+1,31,4,2);
boundaryfill(x+1,91,4,2);
boundaryfill(x+1,121,4,2);
boundaryfill(x+43,1,4,2);
boundaryfill(x+43,61,4,2);
boundaryfill(x+43,121,4,2);
boundaryfill(x+86,31,4,2);
boundaryfill(x+86,91,4,2);
boundaryfill(x+128,1,4,2);
boundaryfill(x+128,61,4,2);
boundaryfill(x+128,121,4,2);
boundaryfill(x+191,1,4,2);
boundaryfill(x+191,31,4,2);
boundaryfill(x+191,91,4,2);
boundaryfill(x+191,121,4,2);
}
void fill1(int x)
{
boundaryfill(x+1,31,14,2);
boundaryfill(x+1,61,14,2);
boundaryfill(x+1,91,14,2);
boundaryfill(x+43,1,14,2);
boundaryfill(x+86,1,14,2);
boundaryfill(x+128,1,14,2);
boundaryfill(x+191,31,14,2);
boundaryfill(x+191,61,14,2);
boundaryfill(x+191,91,14,2);
boundaryfill(x+43,121,14,2);
boundaryfill(x+86,121,14,2);
boundaryfill(x+128,121,14,2);
//-------------------
boundaryfill(x+86,31,12,2);
boundaryfill(x+43,61,12,2);
boundaryfill(x+86,61,12,2);
boundaryfill(x+86,91,12,2);
boundaryfill(x+128,61,12,2);
//----------------------
boundaryfill(x+1,1,10,2);
boundaryfill(x+171,1,10,2);
boundaryfill(x+1,121,10,2);
boundaryfill(x+171,121,10,2);
//-----------------------
boundaryfill(x+43,31,1,2);
boundaryfill(x+128,31,1,2);
boundaryfill(x+43,91,1,2);
boundaryfill(x+128,91,1,2);
}
void row2(int c)
{
int i;
for(i=0;i<=18;i++)
{
	//2nd row flowers near circles----------------

	flower(5,185,10+i,c);
	flower(5,185,10-i,c);
	flower(5,255,10+i,c);
	flower(5,255,10-i,c);

	mycircle(100,223,35-i,c);
	mycircle(100,223,55+i,c);

	//-----------------------------------------

	flower(205,185,10+i,c);
	flower(205,185,10-i,c);
	flower(205,255,10+i,c);
	flower(205,255,10-i,c);

	mycircle(312,223,35-i,c);
	mycircle(312,223,55+i,c);

	 //---------------------------------------------

	 flower(415,185,10+i,c);
	flower(415,185,10-i,c);
	flower(415,255,10+i,c);
	flower(415,255,10-i,c);

	mycircle(520,223,35-i,c);
	mycircle(520,223,55+i,c);
	//---------------------------------------------

	 flower(613,185,10+i,c);
	flower(613,185,10-i,c);
	flower(613,255,10+i,c);
	flower(613,255,10-i,c);

	//delay(100);
       //-------------//
       }
       }
void row3(int c)
{
int i;
for(i=0;i<=18;i++)
{



	//--------3rd row flowers ----------------//

	//--------1st box---------------//

	flower(100,375,35-i,c);
	flower(100,375,55+i,c);

	//--------2nd box----------//

	flower(312,375,35-i,c);
	flower(312,375,55+i,c);
	//--------------------------//

	//---- 3rd box------------//

	flower(520,375,35-i,c);
	flower(520,375,55+i,c);


	 //delay(200);
     }
 }

void  row1()
{

	int i;

	for(i=0;i<=50;i++)
	{
	flower1(95,78,30+i,4);
	flower1(95,78,20-i,7);
	flower1(320,78,30+i,4);
	flower1(320,78,20-i,7);
	flower1(530,78,30+i,4);
	flower1(530,78,20-i,7);
	 }

	 for(i=0;i<=3;i++)
	 {
	 flower2(35,35,20+i,7);
	 flower2(35,35,30-i,7);
	 flower2(35,120,20+i,7);
	 flower2(35,120,30-i,7);
	 flower2(156,35,20+i,7);
	 flower2(156,35,30-i,7);
	 flower2(156,120,20+i,7);
	 flower2(156,120,30-i,7);
	//-----------=======================-------------------//
	  flower2(255,35,20+i,7);
	 flower2(255,35,30-i,7);
	 flower2(255,120,20+i,7);
	 flower2(255,120,30-i,7);
	 flower2(366,35,20+i,7);
	 flower2(366,35,30-i,7);
	 flower2(366,120,20+i,7);
	 flower2(366,120,30-i,7);
       //-----------------=============================------------//

	 flower2(466,35,20+i,7);
	 flower2(466,35,30-i,7);
	 flower2(466,120,20+i,7);
	 flower2(466,120,30-i,7);
	 flower2(580,35,20+i,7);
	 flower2(580,35,30-i,7);
	 flower2(580,120,20+i,7);
	 flower2(580,120,30-i,7);
	 }
 }
//==============================================================//

 /*
void design1(int c)
{
int i;
	//---------------3rd row 1st design----------//
	//--------1st box------------//

	for(i=0;i<=3;i++)
	{
		mycircle(100,375,55+i,c);
		mycircle(100,375,70+i,c);  //delay(100);
	}
	//---------------------3rd row second box ---------//
		for(i=0;i<=3;i++)
	{
		mycircle(312,375,55+i,c);
		mycircle(312,375,70+i,c);  //delay(100);
	}
	    //----------------3rd row 3rd box------------//

		for(i=0;i<=3;i++)
	{
		mycircle(520,375,55+i,c);
		mycircle(520,375,70+i,c);  //delay(100);
	}


	}
     */
void design2(int c)
{
	int i;
	//-----------------------//
	//1st prefered design-------------------//
	//==========1st box=============//

	for(i=0;i<=3;i++)
	{
		mycircle(50,322,20-i,c);
		mycircle(50,322,20+i,c); //delay(200);
	}


	for(i=0;i<=3;i++)
	{
		mycircle(150,322,20-i,c);
		mycircle(150,322,20+i,c); //delay(300);
	}


	for(i=0;i<=3;i++)
	{
		mycircle(50,425,20-i,c);
		mycircle(50,425,20+i,c); //delay(300);
	}


	for(i=0;i<=3;i++)
	{
		mycircle(150,425,20-i,c);
		mycircle(150,425,20+i,c); //delay(300);
	}

	//======================================//

	for(i=0;i<=3;i++)
	{
		mycircle(260,322,20-i,c);
		mycircle(260,322,20+i,c); //delay(200);
	}

	for(i=0;i<=3;i++)
	{
		mycircle(363,322,20-i,c);
		mycircle(363,322,20+i,c); //delay(300);
	}

	for(i=0;i<=3;i++)
	{
		mycircle(263,425,20-i,c);
		mycircle(263,425,20+i,c); //delay(300);
	}


	for(i=0;i<=3;i++)
	{
		mycircle(362,425,20-i,c);
		mycircle(362,425,20+i,c); //delay(300);
	}

	//=================3rd box ============//

	for(i=0;i<=3;i++)
	{
		mycircle(570,322,20-i,c);
		mycircle(570,322,20+i,c); //delay(300);
	}

	for(i=0;i<=3;i++)
	{
		mycircle(466,322,20-i,c);
		mycircle(466,322,20+i,c); //delay(300);
	}

	for(i=0;i<=3;i++)
	{
		mycircle(466,425,20-i,c);
		mycircle(466,425,20+i,c); //delay(300);
	}

	for(i=0;i<=3;i++)
	{
		mycircle(570,425,20-i,c);
		mycircle(570,425,20+i,c); //delay(300);
	}
 }




 void sambalpuri2(int x, int y, int c)
 {
 int i;
 int xmax = getmaxx()/39;
 int ymax = 150/9;
 int k = getmaxx();
 for(i=0;i<=k;i=i+xmax)
 {
  ddaline(x+i,150,x+i,300,c);
 }
 for(i=150;i<=300;i=i+ymax)
 {
 ddaline(0,i+ymax,k,i+ymax,c);
}
}


















void sambalpuricol2(int xmax,int c,int i)
{
int ymax = 150/9;
boundaryfill((7*xmax+i)+1,151,7,c);
boundaryfill((6*xmax+i)+1,151+ymax,7,c);
boundaryfill((8*xmax+i)+1,151+ymax,7,c);
boundaryfill((5*xmax+i)+1,151+ymax*2,7,c);
boundaryfill((7*xmax+i)+1,151+ymax*2,7,c);
boundaryfill((9*xmax+i)+1,151+ymax*2,7,c);
boundaryfill((4*xmax+i)+1,151+ymax*3,7,c);
boundaryfill((6*xmax+i)+1,151+ymax*3,7,c);
boundaryfill((8*xmax+i)+1,151+ymax*3,7,c);
boundaryfill((10*xmax+i)+1,151+ymax*3,7,c);
boundaryfill((3*xmax+i)+1,151+ymax*4,7,c);
boundaryfill((5*xmax+i)+1,151+ymax*4,7,c);
boundaryfill((7*xmax+i)+1,151+ymax*4,7,c);
boundaryfill((9*xmax+i)+1,151+ymax*4,7,c);
boundaryfill((11*xmax+i)+1,151+ymax*4,7,c);
boundaryfill((2*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((4*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((6*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((8*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((10*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((12*xmax+i)+1,151+ymax*5,7,c);
boundaryfill((xmax+i+1),151+ymax*6,7,c);
boundaryfill((3*xmax+i)+1,151+ymax*6,7,c);
boundaryfill((5*xmax+i)+1,151+ymax*6,7,c);
boundaryfill((9*xmax+i)+1,151+ymax*6,7,c);
boundaryfill((11*xmax+i)+1,151+ymax*6,7,c);
if(i!=xmax*26)
boundaryfill((13*xmax+i)+1,151+ymax*6,7,c);
boundaryfill((2*xmax+i)+1,151+ymax*7,7,c);
boundaryfill((4*xmax+i)+1,151+ymax*7,7,c);
boundaryfill((10*xmax+i)+1,151+ymax*7,7,c);
boundaryfill((12*xmax+i)+1,151+ymax*7,7,c);
//boundaryfill((5*xmax)+1,151+ymax*6,7,c)
}
void sambalpuri3(int x,int c,int xmax)
{
//int xmax = getmaxx()/3;
int i;
for(i=0;i<=100;i++)
{
ddaline(x+30+i,330,xmax-30-i,330,c);
ddaline(x+30+i,330,x+30+i,420,c);
ddaline(xmax-30-i,330,xmax-30-i,420,c);
ddaline(x+30+i,420,xmax-30-i,420,c);
 }
 i=0;
ddaline(x+120-i,330,x+120-i,300,c);
ddaline(x+90+i,330,x+90+i,300,c);
ddaline(x+120-i,300,x+90+i,300,c);
ddaline(x+120-i,420,x+120-i,450,c);
ddaline(x+90+i,420,x+90+i,450,c);
ddaline(x+120-i,450,x+90+i,450,c);
ddaline(x+i,350,x+30-i,350,c);
ddaline(x+i,400,x+30-i,400,c);
ddaline(x+i,350,x+i,400,c);
ddaline(xmax+i,350,xmax-30-i,350,c);
ddaline(xmax+i,400,xmax-30-i,400,c);
ddaline(xmax+i,350,xmax+i,400,c);
boundaryfill(x+119,329,c,c);
boundaryfill(x+119,421,c,c);
boundaryfill(x+1,351,c,c);
boundaryfill(xmax-1,351,c,c);
//----------------------------
for(i=0;i<=(150/2)-30;i++)
{
mycircle((xmax-x)/2+x,300+150/2,i,7);
}
for(i=0;i<=15;i++)
{
mycircle((x+15+90),300+15,i,7);
mycircle((x+105),420+15,i,7);
mycircle((x+15),300+150/2,i,7);
mycircle((xmax-15),300+150/2,i,7);
}
}
void clock(int c)
{
cleardevice();
int i;
double x2,y2,x3,y3;
double xc = getmaxx()/2;
double yc = getmaxy()/2;
for(i=1;i<=10;i++)
mycircle(xc,yc,255+i,9);
int r1 = 200;
int r2 = 250;
double theta = 3.14/6;
double theta1 = theta;
for(i=1;i<=13;i++)
{
x2 = r1 * cos(theta1)+xc;
y2 = r1 * sin(theta1)+yc;
x3 = r2 * cos(theta1)+xc;
y3 = r2 * sin(theta1)+yc;
ddaline(x2,y2,x3,y3,c);
theta1 = theta*i;
}
//second hand

int r =150;

int ch='a';

theta = 3.14/30;
int j,w = 1;
theta1 = theta;
/*for(j=0;j<60;j++)
{
x2 = r*cos(theta1)+xc;
y2 = r*sin(theta1)+yc;
ddaline(xc,yc,x2,y2,c);
delay(1000);
theta1 = theta * j;
ddaline(xc,yc,x2,y2,0);
} */
//minute hand
double theta2,angle;
double x22,y22,k;
while(ch!='*')
{
theta2 = 3.14/30;
angle = theta2;
double tt = 30*(3.14/180);
double ang,xxx,yyy;
ang=tt*w;
 xxx = r*cos(ang)+xc;
 yyy = r*sin(ang)+yc;
 ddaline(xc,yc,xxx,yyy,4);
for(k=2;k<60;k++)
{
//printf("exit *?\n");
scanf("%c",&ch);
if(ch=='*')
break;
 x22 = r*cos(angle)+xc;
 y22 = r*sin(angle)+yc;
 ddaline(xc,yc,x22,y22,1);
 //delay(1000);
for(j=0;j<60;j++)
{
x2 = r*cos(theta1)+xc;
y2 = r*sin(theta1)+yc;
if(x2!=x22 && y2!= y22 && x2!=xxx && y2!=yyy)
ddaline(xc,yc,x2,y2,c);
else if(x2==x22 && y2==y22)
ddaline(xc,yc,x2,y2,1);
else
ddaline(xc,yc,x2,y2,4);
delay(1000);
theta1 = theta * j;
if(x2!=x22 && y2!=y22 && x2!=xxx && y2!=yyy)
ddaline(xc,yc,x2,y2,0);
}
 ddaline(xc,yc,x22,y22,0);
 angle = theta2*k;
 ddaline(xc,yc,xxx,yyy,0);
}
  }
 }





int main()
{
int gdriver = DETECT,gdmode;
initgraph(&gdriver,&gdmode,"C://TURBOC3//BGI");
int choice=0;
while(choice!=3)
{
printf("1. SAMBALPURI SAREE BORDER\n");
printf("2. BHAGALPURI TASSAR GICCHA BORDER\n");
printf("3. CLOCK\n");
scanf("%d",&choice);
cleardevice();
int xx = getmaxx();
if(choice==1)
{
rect(0,0);
//divrect(0,0);
boxes(0);
fill(0);
fill(216);
fill(432);
delay(1000);
//fill1(0);
//fill1(216);
//fill1(432);
//ddaline(0,150,0,300,2);
//ddaline(xx,150,xx,300,2);
//boundaryfill(1,160,9,2);
//)))row2(3);
//)))row3(7);
//design1(7);
//)))design2(7);
 sambalpuri2(0,150,2);
 int xmax = getmaxx()/39;
// printf("%d ",xmax);
 sambalpuricol2(xmax,2,0);
 sambalpuricol2(xmax,2,xmax*13);
 sambalpuricol2(xmax,2,xmax*26);
int xxm = getmaxx()/3;
//boundaryfill(1,301,8,2);
 sambalpuri3(0,2,xxm);
 sambalpuri3(xxm,2,xxm*2);
 sambalpuri3(xxm*2,2,xxm*3);
 setbkcolor(6);
 //boundaryfill((14*xmax*13)+1,151+ymax*6,7,2);
getch();
//cleardevice();
}
else if(choice==2)
{
rect(0,0);
setbkcolor(0);
row1();
row2(7);
row3(4);
design2(7);
getch();
//cleardevice();
}
cleardevice();
}
if(choice==3)
clock(7);
getch();
cleardevice();
printf("PRESENTED BY R.KHUSHBU AND SHIVANGI SHREYA\n");
return 0;
}


