#include<conio.h>
#include<stdio.h>
#include<graphics.h>

//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>
void drawCloud(int z,int y)
{
		int r=50;

		arc(z,y,45,135,r);
		arc(z+50,y,45,135,r);
		arc(z+100,y,45,135,r);
		arc(z,y,135,225,r);
		arc(z+50,y,135+90,225+90,r);
		arc(z,y,135+90,225+90,r);
		arc(z+100,y,135+90,225+90,r);
		arc(z+100,y,315,45,r);
}

void drawCloud1(int z,int y)
{
		int r=50;

		arc(z,y,45,135,r);
		arc(z+50,y,45,135,r);
		arc(z+100,y,45,135,r);
		arc(z,y,135,225,r);
		arc(z+50,y,135+90,225+90,r);
		arc(z,y,135+90,225+90,r);
		arc(z+100,y,135+90,225+90,r);
		arc(z+100,y,315,45,r);
}
//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>

void drawCloud2(int z,int y)
{
		int r=50;

		arc(z+400,y,45,135,r);
		arc(z+450,y,45,135,r);
		arc(z+500,y,45,135,r);
		arc(z+400,y,135,225,r);
		arc(z+450,y,135+90,225+90,r);
		arc(z+400,y,135+90,225+90,r);
		arc(z+500,y,135+90,225+90,r);
		arc(z+500,y,315,45,r);
}


//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>
void drawCloud3(int z,int y)
{
		int r=50;

		arc(z+400,y,45,135,r);
		arc(z+450,y,45,135,r);
		arc(z+500,y,45,135,r);
		arc(z+400,y,135,225,r);
		arc(z+450,y,135+90,225+90,r);
		arc(z+400,y,135+90,225+90,r);
		arc(z+500,y,135+90,225+90,r);
		arc(z+500,y,315,45,r);
}

void drawCloud4(int z,int y)
{
		int r=50;

		arc(z+800,y,45,135,r);
		arc(z+850,y,45,135,r);
		arc(z+900,y,45,135,r);
		arc(z+800,y,135,225,r);
		arc(z+850,y,135+90,225+90,r);
		arc(z+800,y,135+90,225+90,r);
		arc(z+900,y,135+90,225+90,r);
		arc(z+900,y,315,45,r);
}

//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>
void drawCloud5(int z,int y)
{
		int r=50;

		arc(z+800,y,45,135,r);
		arc(z+850,y,45,135,r);
		arc(z+900,y,45,135,r);
		arc(z+800,y,135,225,r);
		arc(z+850,y,135+90,225+90,r);
		arc(z+800,y,135+90,225+90,r);
		arc(z+900,y,135+90,225+90,r);
		arc(z+900,y,315,45,r);
		
}

void drawCloud6(int z,int y)
{
		int r=50;

		arc(z+1200,y,45,135,r);
		arc(z+1250,y,45,135,r);
		arc(z+1300,y,45,135,r);
		arc(z+1200,y,135,225,r);
		arc(z+1250,y,135+90,225+90,r);
		arc(z+1200,y,135+90,225+90,r);
		arc(z+1300,y,135+90,225+90,r);
		arc(z+1300,y,315,45,r);
		
}
void drawCloud7(int z,int y)
{
		int r=50;

		arc(z+1200,y,45,135,r);
		arc(z+1250,y,45,135,r);
		arc(z+1300,y,45,135,r);
		arc(z+1200,y,135,225,r);
		arc(z+1250,y,135+90,225+90,r);
		arc(z+1200,y,135+90,225+90,r);
		arc(z+1300,y,135+90,225+90,r);
		arc(z+1300,y,315,45,r);
		
}


main()
{
	
	
	initwindow(800*2, 800*2);

    int i,d=0,x=200,y=800*2,z=50,shouldMove=1;
    int rx,ry;
   
    while(!kbhit())
    {
	cleardevice();
	

	
	drawCloud(z,60);
    drawCloud1(z,63);
    drawCloud2(z,63);
    drawCloud3(z,66);
    drawCloud4(z,66);
    drawCloud5(z,69);
    drawCloud6(z,69);
    drawCloud7(z,72);

line(0, 600, 800*2, 600);
//line(0, 550, 800*2, 550);



for(int i=0;i<500;i++)
        {
        	
            rx=rand()%839*2;
            ry=rand()%600;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
            line(rx-5,ry+5,rx,ry);
//            delay(10);
    }
 
        
        x=(x+10)%1400
//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>

//first circle

circle(70+x,560, 40);
circle(70+x, 560, 32);

//second circle 
circle(280+x, 545, 55);
circle(280+x, 545, 47);

//first inner circle

circle(70+x, 560, 7);

//second inner circle 

circle(280+x, 545, 7);



//first circle

arc(70+x, 580, 310, 430, 15);

arc(67+x, 545, 310 , 430, 15);

arc(55+x, 550, 200, 315, 15);

//second circle 

arc(280+x, 572, 290, 440, 20);

arc(277+x, 520, 290, 440, 20);

arc(257+x, 540, 180, 325, 20);

//horizontal line first circle 

line(75+x, 560, 150+x, 560);

// circle paddle 

circle(150+x, 560, 15);
circle(150+x, 560, 6);

// first circle vertical line 

line(70+x, 553, 120+x, 500);
//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>

// paddle vertical line 

line(150+x, 560, 110+x, 485);

//second circle vertical line 

line(280+x, 545, 240+x, 485);

//line between first and second circle

line(117+x, 500, 241+x, 485);

//line between paddle to second circle join two line

line(150+x, 560, 241+x, 485);

//seat on cycle

line(100+x, 485, 130+x, 485);

line(100+x, 485, 100+x, 473);

line(130+x, 485, 130+x, 480);

line(100+x, 473, 130+x, 480);

//handle cycle 

line(240+x, 485, 238+x, 465);

line(220+x, 465, 270+x, 465);

//paddle moving line 

line(150+x, 560, 167+x, 580);

line(160+x, 585, 175+x, 570);

delay(200);


}

    getch();
//<<-----------------------------------------------------------  Satyam Coder -------------------------------------------------------------------------------------->>

}
