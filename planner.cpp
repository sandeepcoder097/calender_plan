//WELCOME TO THE PLANNER PROGRAM FOR THE YEAR 2016.
/*
Program Title-Year Planner(2016).                                                                   
This program is valid only for the year 2016..                                                      
to make it usable in other year,just change the dates in the months.                                
FOR GRAPHIC ERROR:-                                                                                 
-------------------                                                                                 
THE TWO FUNCTION NAMED ENTRY() & COUNT DOWN()IN WHICH GRAPHICS HAVE BEEN USED,  
 ARE ONLY FOR THE DEMONSTRATION PURPOSE,USER CAN RUN THE PROGRAM                
 ,WITHOUT CALLING THE TWO GRAPHIC FUNCTIONS NAMED ENTRY() & COUNTDOWN()         

*/			//including header file
#include<iostream.h>
#include<conio.h>
#include<fstream.h> //for file i/o in the file
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h> //for graphic functions
#include<dos.h>
#include<math.h>
#include<string.h>  //for gets()/puts()
#include<process.h>  //for exit()

 //making class
class planner                
{
public:
   int date,monthno;
   char plan[100];

   void welcome();
   void getdata();
   void fwriter();
   void search();
   void modify();
   void option();

   void january();
   void february();
   void march();
   void april();
   void may();
   void june();
   void july();
   void august();
   void september();
   void october();
   void november();
   void december();
};
//making global object
planner fd;

//WELCOMING PAGE LAYOUT


 void planner::welcome()
{
cout<<"\t#     # ##### #     ##### ###### ##   ## #####   ####### ######        "<<endl;
cout<<"\t#     # #     #     #     #    # # # # # #          #    #    #  o     "<<endl;
cout<<"\t#  #  # ####  #     #     #    # #  #  # ####       #    #    #   ooo  "<<endl;
cout<<"\t# # # # #     #     #     #    # #     # #          #    #    #  o     "<<endl;
cout<<"\t##   ## ##### ##### ##### ###### #     # #####      #    ######        "<<endl;
cout<<"\t==============================================   ================   "<<endl;

cout<<endl;
cout<<"\t\t#####  #       ##   ##    # ##    # ##### ####  "<<endl;
cout<<"\t\t#    # #      #  #  # #   # # #   # #     #   # "<<endl;
cout<<"\t\t#####  #     ###### #  #  # #  #  # ####  ####  "<<endl;
cout<<"\t\t#      #     #    # #   # # #   # # #     #  #  "<<endl;
cout<<"\t\t#      ##### #    # #    ## #    ## ##### #   #  (v.2016)"<<endl;
cout<<"\t\t================================================"<<endl;
cout<<endl;

cout<<"\t\t\tP R O J E C T    M A D E    B Y :- "<<endl;
cout<<endl;
cout<<"\t\t\t\t1.NEHA SHARMA"<<endl;
cout<<"\t\t\t\t2.SANDEEP SHARMA"<<endl;      //programmers
cout<<"\t\t\t\t\t\t\tG U I D E D  B Y:-"<<endl;
cout<<"\t\t\t\t\t\t\t\tRACHNA SINHA"<<endl;
cout<<"Press Any Key"<<endl;
}
//FUNCTION FOR THE DATA INPUT 

void planner::getdata()
{
clrscr();
cout<<""<<endl;
cout<<endl;
cout<<"___MONTHS___"<<endl;    //showing month no
cout<<"1.January"<<endl;
cout<<"2.February"<<endl;
cout<<"3.March"<<endl;
cout<<"4.April"<<endl;
cout<<"5.May"<<endl;
cout<<"6.June"<<endl;
cout<<"7.July"<<endl;
cout<<"8.August"<<endl;
cout<<"9.September"<<endl;
cout<<"10.October"<<endl;
cout<<"11.November"<<endl;
cout<<"12.December"<<endl;
cout<<endl;
for(int x=40;x>=25;x--)        //for floating line on screen
{delay(10);
 gotoxy(x,20);
 cout<<" Enter the month no.:- "<<endl;
 gotoxy(x,21);
 cout<<" ------------------- "<<endl;
}
cin>>monthno;
clrscr();
if(monthno==1)    //checking input and giving proper output
{
 fd.january();
}else
if(monthno==2)
{
 fd.february();
}else
if(monthno==3)
{
 fd.march();
}else
if(monthno==4)
{
 fd.april();
}else
if(monthno==5)
{
 fd.may();
}else
if(monthno==6)
{
 fd.june();
}else
if(monthno==7)
{
 fd.july();
}else
if(monthno==8)
{
 fd.august();
}else
if(monthno==9)
{
 fd.september();
}else
if(monthno==10)
{
 fd.october();
}else
if(monthno==11)
{
 fd.november();
}else
if(monthno==12)
{
 fd.december();
}else
{

cout<<"\t\t\t\t! WRONG INPUT !"<<endl;
option(); //calling option function
getch();
}

cout<<""<<endl;
cout<<endl;
cout<<"Enter the date :-"<<endl;
cout<<"---------------- "<<endl;
cin>>date;
cout<<"Now enter your plan:- "<<endl;
cout<<"-------------------- "<<endl;
gets(plan);
}

//FUNCTION FOR OPTION MENU



void planner::option()
 {
 cout<<endl;
 cout<<"\t\tSELECT FROM OPTIONS BELOW:-"<<endl;
 cout<<"\t\t--------------------------"<<endl;
 cout<<"\t\t1.Do you want to plan an event?"<<endl;
 cout<<"\t\t2.Do you want to modify an event?"<<endl;
 cout<<"\t\t3.Do you want to see an event?"<<endl;
 cout<<"\t\t4.EXIT"<<endl;
 char choice;
 cin>>choice;
 if(choice=='1')
 {
  fd.fwriter();
 }else
 if(choice=='2')
 {
  fd.modify();
 }else
 if(choice=='3')
 {
  fd.search();
 }else
 if(choice=='4')
 {
  exit(1);    //exiting
 }else
 {
 cout<<"\t\t\t! WRONG INPUT !"<<endl;
 cout<<"\t\t\tThanks"<<endl;
 cin>>choice;
 }
}

//FUNCTION TO WRITE IN THE FILE


void planner::fwriter()
{
char ch;
clrscr();
ofstream fout("planner.txt",ios::out|ios::app|ios::binary);
if(fout)
{
fd.getdata();

 fout.write((char*)&fd,sizeof(fd));     //writing
    fout.close();
    cout<<"\n\nYour Plan Has Been Created "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"\t\tSELECT FROM OPTIONS BELOW:-"<<endl;
    cout<<"\t\t1.Do you want to see any event?"<<endl;
    cout<<"\t\t2.Do you want to modify any existing event?"<<endl;
    cout<<"\t\t3.Want to plan more?"<<endl;
    cout<<"\t\t4.EXIT"<<endl;
    char option;
    cin>>option;
   if(option=='1')
   {
    fd.search();
   }else
   if(option=='2')
   {
    fd.modify();
   }else
   if(option=='3')
   {
    fd.fwriter();
   }else
   if(option=='4')
   {
    exit(1);
   }else
    cout<<"\t\t\t\t---THANK YOU---"<<endl;


}
else
{
cout<<"! File not opened !";}
}

// FUNCTION TO SEARCH THE REQUIRED EVENT

void planner::search()
{
clrscr();
int dt,mt;
char cho;
char found='n';
 ifstream fin("planner.txt",ios::in|ios::binary);
  cout<<"Enter the date,to see your plan:-"<<endl;
  cout<<"-------------------------------"<<endl;
  cin>>dt;
cout<<""<<endl;
cout<<endl;
cout<<"___MONTHS___"<<endl;          //showing month no.
cout<<"1.January"<<endl;
cout<<"2.February"<<endl;
cout<<"3.March"<<endl;
cout<<"4.April"<<endl;
cout<<"5.May"<<endl;
cout<<"6.June"<<endl;
cout<<"7.July"<<endl;
cout<<"8.August"<<endl;
cout<<"9.September"<<endl;
cout<<"10.October"<<endl;
cout<<"11.November"<<endl;
cout<<"12.December"<<endl;
cout<<endl;

for(int ax=40;ax>=25;ax--)
{delay(10);
 gotoxy(ax,20);
 cout<<" Enter the month no.:- "<<endl;
 gotoxy(ax,21);
 cout<<" ------------------- "<<endl;
}

   cin>>mt;
   while(!fin.eof())
   {
     fin.read((char*)&fd,sizeof(fd));       //reading from file
     if((fd.date==dt)&&(fd.monthno==mt))    //checking and matching
    {
     cout<<"Today's plan is:-";
     cout<<"'"<<fd.plan<<"'"<<endl;          //showing plan
     cout<<endl;
     found='y';
     break;
     }
   }
     fin.close();                            //closing stream
  if(found=='n')
   cout<<"\t\t\t\t! No Any Event !"<<endl;
   cout<<endl;
   cout<<"\t\tSELECT FROM OPTIONS BELOW:-"<<endl;
   cout<<"\t\t1.Do you want to create any event?"<<endl;
   cout<<"\t\t2.Do you want to modify any existing event?"<<endl;
   cout<<"\t\t3.Want to see more events?"<<endl;
   cout<<"\t\t4.EXIT"<<endl;
   cin>>cho;
   if(cho=='1')
   {
    fd.fwriter();
   }else
   if(cho=='2')
   {
    fd.modify();
   }else
   if(cho=='3')
   {
    fd.search();
   }else
   if(cho=='4')
   {
    exit(1);                            //for exit
   }else
    cout<<"\t\t\t\t---THANK YOU---"<<endl;
}

// FUNCTION TO MODIFY THE EXISTING EVENT


void planner::modify()      
{
clrscr();
char option;
cout<<"\t\tDo you really want to modify the plan(y/n):-"<<endl;
cout<<"\t\t------------------------------------------- "<<endl;
cin>>option;
 if(option=='y'||option=='Y')
 {
  fstream fout;
  fout.open("planner.txt",ios::in|ios::out|ios::binary);
  fout.seekg(0);    //making pointer reach at starting of file
 //modify the contents
 cout<<"Enter the date to modify:-"<<endl;
 cout<<"------------------------- "<<endl;
 int dt,mno;
 cin>>dt;
 cout<<""<<endl;
 cout<<endl;
 cout<<"___MONTHS___"<<endl;          //showing month no.
 cout<<"1.January"<<endl;
 cout<<"2.February"<<endl;
 cout<<"3.March"<<endl;
 cout<<"4.April"<<endl;
 cout<<"5.May"<<endl;
 cout<<"6.June"<<endl;
 cout<<"7.July"<<endl;
 cout<<"8.August"<<endl;
 cout<<"9.September"<<endl;
 cout<<"10.October"<<endl;
 cout<<"11.November"<<endl;
 cout<<"12.December"<<endl;

 for(int vx=40;vx>=25;vx--) //for floating line on screen
 {
 delay(10);
 gotoxy(vx,20);
 cout<<" Enter the month no.:- "<<endl;
 gotoxy(vx,21);
 cout<<" ------------------- "<<endl;
 }
 cin>>mno;
  while(!fout.eof())           //loop till the file ends
  {
     int location=fout.tellg();          //storing current location of get pointer
     fout.read((char*)&fd,sizeof(fd));   //reading file
     if((fd.date==dt)&&(fd.monthno==mno))//checking and matching
     {
     cout<<"Enter new plan:-"<<endl;
     cout<<"--------------- "<<endl;
     char pl[100];
     gets(pl);                           //taking new plan
     strcpy(fd.plan,pl);                 //replacing plans
     fout.seekg(location);               //moving get pointer to specified location
     fout.write((char*)&fd,sizeof(fd));  //writing file
     cout<<"Your plan has been updated"<<endl;
     break;                              //breaking
     }

   }

 }else
 cout<<"\t\t\t\tTHANKS"<<endl;
 cout<<"\t\t\t\t------"<<endl;
 cout<<endl;
 fd.option();    //calling option

}
// CALANDER 2016

void planner::january()
{


cout<<"\t\t\t         JANUARY(2016)       "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   |   | 1 | 2 | 3 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 4 | 5 | 6 | 7 | 8 | 9 |10 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|11 |12 |13 |14 |15 |16 |17 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|18 |19 |20 |21 |22 |23 |24 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|25 |26 |27 |28 |29 |20 |31 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<endl;
}
void planner::february()
{
cout<<"\t\t\t        FEBRUARY(2016)       "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 8 | 9 |10 |11 |12 |13 |14 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|15 |16 |17 |18 |19 |20 |21 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|22 |23 |24 |25 |26 |27 |28 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|29 |   |   |   |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::march()
{
cout<<"\t\t\t         MARCH(2016)         "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   | 1 | 2 | 3 | 4 | 5 | 6 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 7 | 8 | 9 |10 |11 |12 |13 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|14 |15 |16 |17 |18 |19 |20 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|21 |22 |23 |24 |25 |26 |27 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|28 |29 |30 |31 |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::april()
{
cout<<"\t\t\t          APRIL(2016)        "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   |   | 1 | 2 | 3 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 4 | 5 | 6 | 7 | 8 | 9 |10 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|11 |12 |13 |14 |15 |16 |17 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|18 |19 |20 |21 |22 |23 |24 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|25 |26 |27 |28 |29 |30 |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::may()
{
cout<<"\t\t\t	        MAY(2016)         "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   |   |   |   | 1 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 2 | 3 | 4 | 5 | 6 | 7 | 8 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 9 |10 |11 |12 |13 |14 |15 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|16 |17 |18 |19 |20 |21 |22 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|23 |24 |25 |26 |27 |28 |29 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|30 |31 |   |   |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}

void planner::june()
{
cout<<"\t\t\t	       JUNE(2016)         "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   | 1 | 2 | 3 | 4 | 5 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 6 | 7 | 8 | 9 |10 |11 |12 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|13 |14 |15 |16 |17 |18 |19 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|20 |21 |22 |23 |24 |25 |26 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|27 |28 |29 |30 |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::july()
{
cout<<"\t\t\t	       JULY(2016)         "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   |   | 1 | 2 | 3 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 4 | 5 | 6 | 7 | 8 | 9 |10 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|11 |12 |13 |14 |15 |16 |17 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|18 |19 |20 |21 |22 |23 |24 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|25 |26 |27 |28 |29 |20 |31 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::august()
{
cout<<"\t\t\t	      AUGUST(2016)        "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 8 | 9 |10 |11 |12 |13 |14 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|15 |16 |17 |18 |19 |20 |21 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|22 |23 |24 |25 |26 |27 |28 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|29 |30 |31 |   |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::september()
{
cout<<"\t\t\t       SEPTEMBER(2016)       "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   | 1 | 2 | 3 | 4 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 5 | 6 | 7 | 8 | 9 |10 |11 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|12 |13 |14 |15 |16 |17 |18 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|19 |20 |21 |22 |23 |24 |25 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|26 |27 |28 |29 |30 |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::october()
{
cout<<"\t\t\t	     OCTOBER(2016)        "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   |   |   | 1 | 2 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 3 | 4 | 5 | 6 | 7 | 8 | 9 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|10 |11 |12 |13 |14 |15 |16 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|17 |18 |19 |20 |21 |22 |23 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|24 |25 |26 |27 |28 |29 |30 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|31 |   |   |   |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::november()
{
cout<<"\t\t\t        NOVEMBER(2016)       "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   | 1 | 2 | 3 | 4 | 5 | 6 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 7 | 8 | 9 |10 |11 |12 |13 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|14 |15 |16 |17 |18 |19 |20 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|21 |22 |23 |24 |25 |26 |27 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|28 |29 |30 |   |   |   |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
void planner::december()
{
cout<<"\t\t\t	     DECEMBER(2016)       "<<endl;
cout<<"\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
cout<<"\t\t\t| M   T   W   T   F   S  Su |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|   |   |   | 1 | 2 | 3 | 4 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t| 5 | 6 | 7 | 8 | 9 |10 |11 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|12 |13 |14 |15 |16 |17 |18 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|19 |20 |21 |22 |23 |24 |25 |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
cout<<"\t\t\t|26 |27 |28 |29 |30 |31 |   |"<<endl;
cout<<"\t\t\t|---|---|---|---|---|---|---|"<<endl;
}
//FUNCTIONS USING GRAPHICS
//SOURCE:INTERNET


//COUNTER COLOURED SCREEN 
void countdown()
{
   /* select a driver and mode that supports */
   /* multiple background colors.            */
   int gdriver = EGA, gmode = EGAHI, errorcode;
   int bkcol, maxcolor, x, y;
   char msg[80];

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   /* maximum color index supported */
   maxcolor = getmaxcolor();

   /* for centering text messages */
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   x = getmaxx() / 2;
   y = getmaxy() / 2;
   /* loop through the available colors */
   for (bkcol=maxcolor; bkcol>=0; bkcol--)
   {
      /* clear the screen */
      cleardevice();

      /* select a new background color */
      setbkcolor(bkcol);

      /* output a messsage */
      if (bkcol == WHITE)
	 setcolor(EGA_BLUE);
      sprintf(msg, "count down: %d", bkcol);
      outtextxy(x, y, msg);
      delay(500);
   }

   /* clean up */
   closegraph();
}





//BALL BOUNCING ON THE SURFACE
void entry()        
{

   int d=DETECT,m;
   initgraph(&d,&m,"e:\tcc\bgi");
   float x=1,y=0.00000,j=.5,count=.1;
   float r=15;
   setcolor(14);
   line(0,215,650,215);
    sleep(1);
    for(int k=0;k<=7;k++)
     {

      for(float i=90;i<270;i+=10)
       {
	y=cos(((i*22/7)/180))/j;

	if(y>0)
	y=-y;
	x+=5;

	setcolor(14);
	setfillstyle(1,14);
	circle(x,y*100+200,r);
	floodfill(x,y*100+200,14);

       delay(40);

	setcolor(0);
	setfillstyle(1,0);
	circle(x,y*100+200,r);
	floodfill(x,y*100+200,0);

       }

      j+=count;
      count+=.1;
    }
}

// FROM WHERE EXECUTION STARTS


void main()
{ int choice,monthno;
  char op;
 clrscr();
 entry();
 countdown();
 fd.welcome();  //calling welcome function
 getch();
 clrscr();
cout<<""<<endl;
cout<<endl;
cout<<"\t\t\tSELECT FROM THE OPTIONS BELOW:-"<<endl; //taking user choice
cout<<"\t\t\t-------------------------------"<<endl;
cout<<"\t\t\t1.Plan your monthly events."<<endl;       //options
cout<<"\t\t\t2.Modify your plan."<<endl;
cout<<"\t\t\t3.See your existing plan"<<endl;
cout<<"\t\t\t4.See monthwise calender 2016"<<endl;
cout<<"\t\t\t5.EXIT"<<endl;
cout<<endl;
cout<<"\tWARNING-All the specified options are valid only for the year 2016" <<endl;
cin>>choice;
if(choice==1)
  {
   fd.fwriter();
   cout<<"Want to plan more (y/n) "<<endl;
   cin>>op;
   if(op=='y')
     {fd.fwriter();
     }else
   if(op=='n')
     {
       cout<<"\t\t\t -----THANK YOU-----"<<endl;      //calling writer function
     }else
  exit(1);
  }
if(choice==2)
 {
  fd.modify();
 }else
if(choice==3)
 {
  fd.search();       //calling search function
 }else
if(choice==5)
 {
  exit(1);
 }else
if(choice==4)   //monthwise calander
{
clrscr();
cout<<""<<endl;
cout<<endl;
cout<<"___MONTHS___"<<endl;
cout<<"1.January"<<endl;
cout<<"2.February"<<endl;
cout<<"3.March"<<endl;
cout<<"4.April"<<endl;
cout<<"5.May"<<endl;
cout<<"6.June"<<endl;
cout<<"7.July"<<endl;
cout<<"8.August"<<endl;
cout<<"9.September"<<endl;
cout<<"10.October"<<endl;
cout<<"11.November"<<endl;
cout<<"12.December"<<endl;
cout<<endl;
for(int cx=40;cx>=25;cx--)
{
 delay(10);
 gotoxy(cx,20);
 cout<<" Enter the month no.:- "<<endl;
 gotoxy(cx,21);
 cout<<"-------------------- "<<endl;
}
cin>>monthno;
clrscr();
 if(monthno==1)            //checking month no
 {
  fd.january();
 }else
 if(monthno==2)
 {
  fd.february();
 }else
 if(monthno==3)
 {
  fd.march();
 }else
 if(monthno==4)
 {
  fd.april();
 }else
 if(monthno==5)
 {
  fd.may();
 }else
 if(monthno==6)
 {
  fd.june();
 }else
 if(monthno==7)
 {
  fd.july();
 }else
 if(monthno==8)
 {
  fd.august();
 }else
 if(monthno==9)
 {
  fd.september();
 }else
 if(monthno==10)
 {
  fd.october();
 }else
 if(monthno==11)
 {
  fd.november();
 }else
 if(monthno==12)
 {
  fd.december();
 }else
 {
 cout<<"\t\t\t\t! WRONG INPUT !";
 }

}
fd.option();
getch();
}
