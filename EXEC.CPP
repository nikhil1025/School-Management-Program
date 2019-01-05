	   
 #include<String.h>
 #include<sys/stat.h>
 #include<conio.h>
 #include<fstream.h>
 #include<dir.h>
 #include<stdlib.h>
 #include<stdio.h>
////////////////////////////FUNCTION PROTOTYPES///////////////////////////////

	

void studentListFiler(char locate2[90]);
void studentInfoFiler(char locate1[90]);
void nonInfoFiler(char locate1[90]);
void nonListFiler(char locate1[90]);
void tread();
void sread(char locate1[90]);
void nread(char locate1[90]);
void welhead();
void iconBye();
void iconOpen();
void header();
int entries1();
void list();
char classChooser();
char postChooser();
	
////////////////////////////FUNCTION  PROTOTYPES///////////////////////////////

//////////////////////////////GLOBAL VARIABLES/////////////////////////////////
int record;
int selectMainOption;
char locationate[90];
//////////////////////////////GLOBAL VARIABLES/////////////////////////////////

/////////////////////////DIRECTORY MAKER FUNCTIONS/////////////////////////////
int dirExists(char* curDir){struct stat st;if(stat(curDir, &st)==0)return 1; else return 0;}

void directories(){
mkdir("C://OPS");

if(dirExists("C://OPS")==1) {
       recurr:
	if(dirExists("C://OPS//TEACHER")==1) {

	}

	else  {mkdir("C://OPS//TEACHER");

	}

	if(dirExists("C://OPS//STUDENT")==1) {
	    mkdir("C://OPS//STUDENT//CLASS1");  mkdir("C://OPS//STUDENT//CLASS2");
	    mkdir("C://OPS//STUDENT//CLASS3");  mkdir("C://OPS//STUDENT//CLASS4");
	    mkdir("C://OPS//STUDENT//CLASS5");  mkdir("C://OPS//STUDENT//CLASS6");
	    mkdir("C://OPS//STUDENT//CLASS7");  mkdir("C://OPS//STUDENT//CLASS8");
	    mkdir("C://OPS//STUDENT//CLASS9");  mkdir("C://OPS//STUDENT//CLASS10");
	    mkdir("C://OPS//STUDENT//CLASS11");  mkdir("C://OPS//STUDENT//CLASS12");
	    mkdir("C://OPS//STUDENT//Nursury");
		}

	else{ mkdir("C://OPS//STUDENT");
	    mkdir("C://OPS//STUDENT//CLASS1");  mkdir("C://OPS//STUDENT//CLASS2");
	    mkdir("C://OPS//STUDENT//CLASS3");  mkdir("C://OPS//STUDENT//CLASS4");
	    mkdir("C://OPS//STUDENT//CLASS5");  mkdir("C://OPS//STUDENT//CLASS6");
	    mkdir("C://OPS//STUDENT//CLASS7");  mkdir("C://OPS//STUDENT//CLASS8");
	    mkdir("C://OPS//STUDENT//CLASS9");  mkdir("C://OPS//STUDENT//CLASS10");
	    mkdir("C://OPS//STUDENT//CLASS11");  mkdir("C://OPS//STUDENT//CLASS12");
	    mkdir("C://OPS//STUDENT//Nursury");
	}

	if(dirExists("C://OPS//NON-TEC")==1) {
	    mkdir("C://OPS//NON-TEC//CARETAKR");  mkdir("C://OPS//NON-TEC//WATCHMEN");
	    mkdir("C://OPS//NON-TEC//DRIVERS");
	}

	else{ mkdir("C://OPS//NON-TEC");
	     mkdir("C://OPS//NON-TEC//CARETAKR");  mkdir("C://OPS//NON-TEC//WATCHMEN");
	    mkdir("C://OPS//NON-TEC//DRIVERS");
	}
} }
/////////////////////////DIRECTORY MAKER FUNCTIONS/////////////////////////////

////////////////////////////////CLASSES USED///////////////////////////////////
class teachers{
public:
int menu();
int enterdata();
char displayData();

}teach;
class students{
public:
int menu();
int enterdata();
char displayData();

}stud;
class nontec{
public:
int menu();
int enterdata();
char displayData();

}ntec;
class intro{
public:
void banner();
int menu();
}in;
////////////////////////////////CLASSES USED///////////////////////////////////

//////////////////////////////STRUCTURES USED//////////////////////////////////
struct tea1{
char Name[100];
}o;

struct teacher{
char name[45];//Teacher's Name
char qul[45];//Teacher's Qualification
int exp;//Experience
int age;char gender;float salary;
}tea,tt;

struct student{
char name[45];//Students's Name
char clas[45];//
int marks;//Previous School Marks
int age;
int rno;//Roll number
char gender;
}stu;

struct staff{
char name[45];//Staff's Name
char qul[45];//Staff's Qualification
int exp;
char post[90];//Job Type
int age;
char gender;
float salary;
}note;
//////////////////////////////STRUCTURES USED//////////////////////////////////

void success(){
	cout<<"\t\t####################################\n";
	cout<<"\t\t#######  Successfully Added  #######\n";
	cout<<"\t\t####################################\n";
	cout<<"\n\n\t\tPress Any Key To CONTINUE...";
	getch();
}
void fail(){ clrscr();header();
	cout<<"\t\t####################################\n";
	cout<<"\t\t#######  Adding Failed!!!!!  #######\n";
	cout<<"\t\t####################################\n";
	cout<<"\n\n\t\tPress Any Key To CONTINUE...";
	getch();
}
///////////////////////////MAIN FUNCTION STARTS//////////////////////////////////
void main(){

///CREATING DIRECTORIES/////////////////
directories();
///DATA Variables///////////////////////
int get;char getTeIn;
char locate1[90],locate2[90];
char k; int open2,open3;
///DATA Variables///////////////////////
iconOpen();clrscr();
welhead();clrscr();    //---------------Welcome Screen
header();in.banner();  //---------------OPS Banner
chooseAgain:

::selectMainOption=in.menu();

if(::selectMainOption==1){ //-----------Teachers' Directory
   Return1:  clrscr();  int open1;
   get=teach.menu();
	if(get==1){  open1=entries1();
	if(open1==1){list();
       clrscr();      header();   success(); }
       else{
	     fail();
       }
	      goto Return1;

	}else if(get==2){
	   mylife:
	clrscr();
		tread();
		 getTeIn=teach.displayData();
		 if(getTeIn=='1'){
		 goto Return1;
		 }
		 else if(getTeIn=='x'||getTeIn=='X') {exit(1);}
		 else if(getTeIn=='r'||getTeIn=='R') {goto Return1;}
		 else if(getTeIn=='0'){
			clrscr();
			header();
			cout<<"\n\tNo such record\n\n\t\t press Enter to return...";
			getch();
			goto mylife;
		 }
	}else if(get==3){
		goto chooseAgain;
	}else if(get==4){
	      iconBye();	exit(1);
	}

}

else if(::selectMainOption==2){ //-----------Students' Directory
   Return2:  char c,k;
   get=stud.menu();
	if(get==1){
		    oye:
	       open2=stud.enterdata();
	       if(open2==1){
		    if(strcmpi(stu.clas,"1")==0)
			   k='1';
		    if(strcmpi(stu.clas,"2")==0)
			   k='2';
		    if(strcmpi(stu.clas,"3")==0)
			   k='3';
		    if(strcmpi(stu.clas,"4")==0)
			   k='4';
		    if(strcmpi(stu.clas,"5")==0)
			   k='5';
		    if(strcmpi(stu.clas,"6")==0)
			   k='6';
		    if(strcmpi(stu.clas,"7")==0)
			   k='7';
		    if(strcmpi(stu.clas,"8")==0)
			   k='8';
		    if(strcmpi(stu.clas,"9")==0)
			   k='9';
		    if(strcmpi(stu.clas,"10")==0)
			   k='T';
		    if(strcmpi(stu.clas,"11")==0)
			   k='E';
		    if(strcmpi(stu.clas,"12")==0)
			   k='W';
		    if(strcmpi(stu.clas,"NURSURY")==0)
			   k='N';
	   switch(k){
		 case '1':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS1//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS1//list.dat");
		 break;
		 case '2':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS2//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS2//list.dat");
		 break;
		 case '3':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS3//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS3//list.dat");
		 break;
		 case '4':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS4//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS4//list.dat");
		 break;
		 case '5':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS5//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS5//list.dat");
		 break;
		 case '6':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS6//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS6//list.dat");
		 break;
		 case '7':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS7//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS7//list.dat");
		 break;
		 case '8':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS8//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS8//list.dat");
		 break;
		 case '9':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS9//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS9//list.dat");
		 break;
		 case 'T':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS10//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS10//list.dat");
		 break;
		 case 'E':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS11//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS11//list.dat");
		 break;
		 case 'W':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS12//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS12//list.dat");
		 break;
		 case 'N':
		 strcpy(locate1,"C://OPS//STUDENT//NURSURY//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//NURSURY//list.dat");
		 break;
		 default:
		  cout<<"\n\n\t\t\t\tCLASS ENTRY ERROR\n";
		 cout<<"\t\t\t\tRetry...\n";
		 getch();
		 goto oye;
		 }
		 studentInfoFiler(locate1);
		   studentListFiler(locate2);
			clrscr();      header();   success();
			 }
		       else{
		       fail();
		       }

		       goto Return2;
	}else if(get==2){ char q;getter1:
	  c=classChooser(); retry:
		   switch(c){
		 case '1':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS1//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS1//list.dat");
		 break;
		 case '2':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS2//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS2//list.dat");
		 break;
		 case '3':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS3//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS3//list.dat");
		 break;
		 case '4':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS4//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS4//list.dat");
		 break;
		 case '5':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS5//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS5//list.dat");
		 break;
		 case '6':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS6//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS6//list.dat");
		 break;
		 case '7':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS7//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS7//list.dat");
		 break;
		 case '8':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS8//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS8//list.dat");
		 break;
		 case '9':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS9//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS9//list.dat");
		 break;
		 case 'T':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS10//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS10//list.dat");
		 break;
		 case 't':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS10//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS10//list.dat");
		 break;
		 case 'E':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS11//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS11//list.dat");
		 break;
		 case 'e':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS11//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS11//list.dat");
		 break;
		 case 'W':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS12//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS12//list.dat");
		 break;
		 case 'w':
		 strcpy(locate1,"C://OPS//STUDENT//CLASS12//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//CLASS12//list.dat");
		 break;
		 case 'N':
		 strcpy(locate1,"C://OPS//STUDENT//NURSURY//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//NURSURY//list.dat");
		 break;
		 case 'n':
		 strcpy(locate1,"C://OPS//STUDENT//NURSURY//Info.dat");
		 strcpy(locate2,"C://OPS//STUDENT//NURSURY//list.dat");
		 break;
		 case 'X':
		 exit(1);
		 break;
		 case 'x':
		 exit(1);
		 break;
		 case 'r':
		 goto Return2;
		 case 'R':
		 goto Return2;
		 default:
		 cout<<"\n\n\t\t\t\tNO SUCH CLASS\n";
		 cout<<"\t\t\t\tRetry...\n";
		 getch();
		 goto getter1;
		 }
		 sread(locate2);
		 strcpy(::locationate, locate1);
		 getTeIn=stud.displayData();
		if(getTeIn=='1'){
		 goto retry;
		 }
		 else if(getTeIn=='x'||getTeIn=='X') {exit(1);}
		 else if(getTeIn=='r'||getTeIn=='R') {goto getter1;}
		 else if(getTeIn=='0'){
			clrscr();
			header();
			cout<<"\n\tNo such record\n\n\t\t press Enter to return...";
			getch();
			goto retry;
		 }
	}else if(get==3){
		goto chooseAgain;
	}else if(get==4){
	       iconBye();	exit(1);
	}
}

else if(::selectMainOption==3){ //-----------NonTeachingStaffs' Directory
   Return3:        char c,k;
   get=ntec.menu();
	if(get==1){ repeat:
	open3=ntec.enterdata();
		  if(open3==1){
		   if(strcmpi(note.post,"CareTaker")==0)
			   k='1';
		   if(strcmpi(note.post,"Driver")==0)
			   k='2';
		   if(strcmpi(note.post,"WatchMan")==0)
			   k='3';
		    switch(k){
		 case '1':    //CareTakers
		       strcpy(locate1,"C://OPS//NON-TEC//CARETAKR//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//CARETAKR//list.dat");
		 break;
		 case '2':    //Drivers
		       strcpy(locate1,"C://OPS//NON-TEC//DRIVERS//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//DRIVERS//list.dat");
		 break;
		 case '3':    //Watchmen
		       strcpy(locate1,"C://OPS//NON-TEC//WATCHMEN//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//WATCHMEN//list.dat");
		 break;
		 default:
		 cout<<"\n\n\t\t\t\tPOST ENTRY ERROR\n";
		 cout<<"\t\t\t\tRetry...\n";
		 getch();
		 goto repeat;

		 }
		   nonInfoFiler(locate1);
		   nonListFiler(locate2);
		   clrscr();header();success();
		   }
		    else{
		    fail();
		    }
		   goto Return3;
	}else if(get==2){  repeat1:
		   k=postChooser();  repeat2:
		 switch(k){
		 case '1':    //CareTakers
		       strcpy(locate1,"C://OPS//NON-TEC//CARETAKR//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//CARETAKR//list.dat");
		 break;
		 case '2':    //Drivers
		       strcpy(locate1,"C://OPS//NON-TEC//DRIVERS//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//DRIVERS//list.dat");
		 break;
		 case '3':    //Watchmen
		       strcpy(locate1,"C://OPS//NON-TEC//WATCHMEN//Info.dat");
		       strcpy(locate2,"C://OPS//NON-TEC//WATCHMEN//list.dat");
		 break;
		 case 'r':
		 goto Return3;
		 case 'R':
		 goto Return3;
		 case 'X':
		 exit(1);
		 break;
		 case 'x':
		 exit(1);
		 break;
		 default:
		 cout<<"\n\n\t\t\t\tNO SUCH POST\n";
		 cout<<"\t\t\t\tRetry...\n";
		 getch();
		 goto repeat1;
		}
		nread(locate2);
		strcpy(::locationate, locate1);
		 getTeIn=ntec.displayData();
		if(getTeIn=='1'){
		 goto repeat2;
		 }
		 else if(getTeIn=='x'||getTeIn=='X') {exit(1);}
		 else if(getTeIn=='r'||getTeIn=='R') {goto repeat1;}
		 else if(getTeIn=='0'){
			clrscr();
			header();
			cout<<"\n\tNo such record\n\n\t\t press Enter to return...";
			getch();
			goto repeat2;
		 }

	}else if(get==3){
		goto chooseAgain;
	}else if(get==4){
	       iconBye();	exit(1);
	}
}

else if(::selectMainOption==4){ //-----------Exit
iconBye();exit(1);
}

else{ cout<<"\n\n\tWRONG CHOICE Press Enter To Retry";
getch();
clrscr();
goto chooseAgain;
}
iconBye();exit(1);
}
////////////////////////////MAIN FUNCTION ENDS//////////////////////////////////

//////////////////////////OTHER FUNCTIONS STARTS//////////////////////////////////
int entries1(){int x;//teacher t=tea;
fstream f("C://OPS//TEACHER//info.dat", ios::app|ios::in|ios::binary);
x=teach.enterdata();
if(x==1) {
 f.write((char*)&tea, sizeof(tea));
 f.close();
 return x;
 }
 else return x;
}

void list(){tea1 ff;
  strcpy(ff.Name,tea.name);
fstream f("C://OPS//TEACHER//list.dat", ios::app|ios::in|ios::binary);
 f.write((char*)&ff, sizeof(ff));
 f.close();
}




////////////MENUS////////////MENUS///////////////////MENUS///////////////////
//////////////MENUS/////////////////////MENUS////////////////MENUS///////////
//MENUS///////////////MENUS/////////////////////////MENUS////////////////////
////////////MENUS//////////////////////MENUS////////////////////////MENUS////

int intro::menu(){  clrscr();
header();
cout<<"\t\t\t\tMAIN MENU\n";
cout<<"\t\tPRESS ::---------------------------\n\n";
cout<<"\t\t\t1>. Teachers' Records\n";
cout<<"\t\t\t2>. Students' Records\n";
cout<<"\t\t\t3>. Non - Teaching Staffs' Records\n";
cout<<"\t\t\t4>. Exit";
cout<<"\n\n\n\n\n\t\tSelect an Option and then Press ENTER to Continue...   ";
cin>>::record;
return ::record;
}

int teachers::menu(){  int t_val; clrscr();
header();
cout<<"\t\t\t     TEACHERS' MENU\n\n";
cout<<"\t\tPRESS ::---------------------------\n\n";
cout<<"\t\t\t*1>. New Teacher Entry \n";
cout<<"\t\t\t 2>. Available Teachers Information\n";
cout<<"\t\t\t 3>. Back To Main Menu";
cout<<"\t\t\t 4>. Exit";

cout<<"\n\n\n\n\n\t\tSelect an Option and then Press ENTER to Continue...  ";
cin>>t_val; return t_val;
}

int students::menu(){  int s_val; clrscr();
header();
cout<<"\t\t\t     STUDENTS' MENU\n\n";
cout<<"\t\tPRESS ::---------------------------\n\n";
cout<<"\t\t\t*1>. New Admission \n";
cout<<"\t\t\t 2>. Available Students Information\n";
cout<<"\t\t\t 3>. Back To Main Menu";
cout<<"\t\t\t 4>. Exit";

cout<<"\n\n\n\n\n\t\tSelect an Option and then Press ENTER to Continue...  ";
cin>>s_val; return s_val;
}
int nontec::menu(){  int n_val;
clrscr();
header();
cout<<"\t\t\t     STAFFS' MENU\n\n";
cout<<"\t\tPRESS ::---------------------------\n\n";
cout<<"\t\t\t*1>. New Staff Entry \n";
cout<<"\t\t\t 2>. Available Staff's Information\n";
cout<<"\t\t\t 3>. Back To Main Menu";
cout<<"\t\t\t 4>. Exit";

cout<<"\n\n\n\n\n\t\tSelect an Option and then Press ENTER to Continue...  ";
cin>>n_val; return n_val;
}

////////////ENTERDATA////////////ENTERDATA///////////////////ENTERDATA///////////////////
//////////////ENTERDATA/////////////////////ENTERDATA////////////////ENTERDATA///////////
//ENTERDATA///////////////ENTERDATA/////////////////////////ENTERDATA////////////////////
////////////ENTERDATA//////////////////////ENTERDATA////////////////////////ENTERDATA////

int teachers::enterdata() {
clrscr();
header();
cout<<"\t\tEnter Experience:-";
cin>>tea.exp;
if(tea.exp<5)
{
clrscr();
header();
cout<<"\t SORRY THE CANDIDATE IS NOT ELIGIBLE \n\n\t\tAS HIS/HER EXPERIENCE IS BELOW 5 YEARS";
cout<<"\n\n\n\n\t\t\tPress Any Key To Return...";
getch();
return 0;
}else{
cout<<"\t\tEnter Name:-";
gets(tea.name);
cout<<"\t\tEnter Qualification:-";
gets(tea.qul);
cout<<"\t\tEnter Age:-";
cin>>tea.age;
cout<<"\t\tGender:-";
cin>>tea.gender;
cout<<"\t\tEnter Salary:-";
cin>>tea.salary;
return 1;
}
}

int students::enterdata() {
clrscr();
header();
cout<<"\t\tEnter Previous School %age:-";
cin>>stu.marks;
if(stu.marks<23)
{     clrscr();
header();
cout<<"\t SORRY THE CANDIDATE IS NOT ELIGIBLE \n\n\t\tAS HIS/HER MARKS ARE VERY LESS";
cout<<"\n\n\n\n\t\t\tPress Any Key To Return...";
getch();
return 0;
}else{
cout<<"\t\tEnter Name:-";
gets(stu.name);
cout<<"\t\tEnter Class:-";
gets(stu.clas);
cout<<"\t\tEnter Roll Number:-";
cin>>stu.rno;
cout<<"\t\tEnter Age:-";
cin>>stu.age;
cout<<"\t\tGender:-";
cin>>stu.gender;
return 1;
}
}

int nontec::enterdata() {
clrscr();
header();
cout<<"\t\tEnter Experience:-";
cin>>note.exp;
if(note.exp<5)
{     clrscr();
header();
cout<<"\t SORRY THE CANDIDATE IS NOT ELIGIBLE \n\n\t\tAS HIS/HER EXPERIENCE IS BELOW 5 YEARS";
cout<<"\n\n\n\n\t\t\tPress Any Key To Return...";
getch();
return 0;
}else{
cout<<"\t\tEnter Name:-";
gets(note.name);
cout<<"\t\tEnter Qualification:-";
gets(note.qul);
cout<<"\t\tEnter Post:-";
gets(note.post);
cout<<"\t\tEnter Age:-";
cin>>note.age;
cout<<"\t\tGender:-";
cin>>note.gender;
cout<<"\t\tEnter Salary:-";
cin>>note.salary;
return 1;
}
}

////////////DISPLAYDATA////////////DISPLAYDATA///////////////////DISPLAYDATA///////////////////
//////////////DISPLAYDATA/////////////////////DISPLAYDATA////////////////DISPLAYDATA///////////
//DISPLAYDATA///////////////DISPLAYDATA/////////////////////////DISPLAYDATA////////////////////
////////////DISPLAYDATA//////////////////////DISPLAYDATA////////////////////////DISPLAYDATA////
 static char x='0';

char teachers::displayData(){ char n[56];//teacher t;
cout<<"Enter Name or option...";
gets(n); clrscr();
header();
 fstream f("C://OPS//TEACHER//info.dat", ios::app|ios::in|ios::binary);
 f.seekg(0,ios::beg);
 while(f.read((char*)&tt, sizeof(tt))){
if(strcmpi(tt.name,n)==0){
 cout<<"\n\t\tName            :   "<<tt.name<<"\n";
 cout<<"\n\t\tQualification   :   "<<tt.qul<<"\n";
 cout<<"\n\t\tExperience      :   "<<tt.exp<<"\n";
 cout<<"\n\t\tAge             :   "<<tt.age<<"\n";
 cout<<"\n\t\tGender          :   "<<tt.gender<<"\n";
 cout<<"\n\t\tSalary          :   "<<tt.salary<<"\n\n";
 cout<<"\n\n\t\tPress Any Key To Return...";
  getch(); clrscr();
 return '1';
}
}
f.close();
if(strcmpi(n,"x")==0 || strcmpi(n,"X")==0){return 'x';  }
else if(strcmpi(n,"r")==0 || strcmpi(n,"R")==0) {return 'r';   }
else return '0';
}

void tread(){
  clrscr();header();
    int i=1;tea1 e;
fstream f("C://OPS//TEACHER//list.dat",ios::in|ios::binary);
 f.seekg(0,ios::beg);
while(f.read((char*)&e,sizeof(e))){
     cout<<"\t"<<i<<">."<<e.Name<<"\t";   i++;
}           cout<<"\n\n\t\tR for previous menu\n\t\tX To Exit";
f.close();
}

void sread(char location[90]){
 clrscr();header();
    int i=1;
fstream f(location,ios::in|ios::binary);
 f.seekg(0,ios::beg);
while(f.read((char*)&stu,sizeof(stu))){
     cout<<"\t"<<i<<">."<<stu.name<<"\t";   i++;
}           cout<<"\n\n\t\tR for previous menu\n\t\tX To Exit\n\t\t";
f.close();
}

void nread(char location[90]){
clrscr();header();
    int i=1;
fstream f(location,ios::in|ios::binary);
 f.seekg(0,ios::beg);
while(f.read((char*)&note,sizeof(note))){
     cout<<"\t"<<i<<">."<<note.name<<"\t";   i++;
}           cout<<"\n\n\t\tR for previous menu\n\t\tX To Exit";
f.close();
}

char students::displayData(){char n[56];//teacher t;
cout<<" Enter Name or option...";
gets(n);
clrscr();
header();
 fstream f(::locationate, ios::app|ios::in|ios::binary);
 f.seekg(0,ios::beg);
 while(f.read((char*)&stu, sizeof(stu))){
if(strcmpi(stu.name,n)==0){
 cout<<"\n\t\tName          	        :   "<<stu.name<<"\n";
 cout<<"\n\t\tClass                   :   "<<stu.clas<<"\n";
 cout<<"\n\t\tRoll Number             :   "<<stu.rno<<"\n";
 cout<<"\n\t\tAge           	        :   "<<stu.age<<"\n";
 cout<<"\n\t\tGender       	        :   "<<stu.gender<<"\n";
 cout<<"\n\t\tPrevious School Marks   :   "<<stu.marks<<"\n\n";
 cout<<"\n\n\t\tPress Any Key To Return...";
  getch(); clrscr();
 return '1';
}
}
f.close();
if(strcmpi(n,"x")==0 || strcmpi(n,"X")==0){return 'x';  }
else if(strcmpi(n,"r")==0 || strcmpi(n,"R")==0) {return 'r';   }
else return '0';
}
void getter2(){

}
char nontec::displayData(){
 char n[56];
cout<<" Enter Name or option...";
gets(n);
clrscr();
header();
 fstream f(::locationate, ios::app|ios::in|ios::binary);
 f.seekg(0,ios::beg);
 while(f.read((char*)&note, sizeof(note))){
if(strcmpi(note.name,n)==0){
 cout<<"\n\t\tName                 :   "<<note.name<<"\n";
 cout<<"\n\t\tPost                 :   "<<note.post<<"\n";
 cout<<"\n\t\tExperience           :   "<<note.exp<<"\n";
 cout<<"\n\t\tAge                  :   "<<note.age<<"\n";
 cout<<"\n\t\tGender               :   "<<note.gender<<"\n";
 cout<<"\n\t\tQualification        :   "<<note.qul<<"\n";
 cout<<"\n\t\tSalary               :   "<<note.salary<<"\n\n";
 cout<<"\n\t\tPress Any Key To Return...";
  getch(); clrscr();
 return '1';
}
}
f.close();
if(strcmpi(n,"x")==0 || strcmpi(n,"X")==0){return 'x';  }
else if(strcmpi(n,"r")==0 || strcmpi(n,"R")==0) {return 'r';   }
else return '0';
}

void studentListFiler(char locate1[90]){
fstream f(locate1, ios::app|ios::in|ios::binary);
 f.write((char*)&stu, sizeof(stu));
 f.close();
}

void studentInfoFiler(char locate1[90]){
fstream f(locate1, ios::app|ios::in|ios::binary);
 f.write((char*)&stu, sizeof(stu));
 f.close();
}
void nonListFiler(char locate1[90]){
fstream f(locate1, ios::app|ios::in|ios::binary);
 f.write((char*)&note, sizeof(note));
 f.close();
}

void nonInfoFiler(char locate1[90]){
fstream f(locate1, ios::app|ios::in|ios::binary);
 f.write((char*)&note, sizeof(note));
 f.close();
}

char classChooser(){
clrscr(); char t;
 header();
 cout<<"\t\t\t\tCLASSES\n\n"; cout<<"\t1\t\t\t2\t\t\t3\n";
 cout<<"\t4\t\t\t5\t\t\t6\n"; cout<<"\t7\t\t\t8\t\t\t9\n";
 cout<<"\tT for 10\t\tE for 11\t\tW for 12\n"; cout<<"\t\t\t   N for Nursury\n\n\t\t\tR>. Back to STUDENTS' MENU\n\t\tX>. Exit...";
 cin>>t;
 return t;
}

char postChooser(){
clrscr(); char t;
 header();
 cout<<"\t\t\tCATEGORIES\n\n"; cout<<"\t1 for CareTakers\n\t2 for Drivers\t\t3 for WatchMen\n";
  cout<<"\n\n\tR>. Back to STAFFS' MENU\n\tX>. Exit\n\n\t";
 cin>>t;
 return t;
}

void intro::banner(){
cout<<"\n\n\t\t\t\t Welcome To\n\n \t\t\t    OXFORD PUBLIC SCHOOL\n\n";
cout<<"\t\t\t\tPragati Path\n\n\t\t\t      Ranchi - 834011";
cout<<"\n\n\n\n\n\t\t\t\t\t\tPress ENTER to Continue...";
getch();
}

void welhead(){
clrscr();
cout<<"###############################################################################";
cout<<"                               MY WORLD OF PROGRAMMING                        \n";
cout<<"###############################################################################\n\n\n\n\n";
cout<<"           w   w  EEEEE  L        C      O    M     M  EEEEE              ";
cout<<"	           w   w  E      L       C C    O O   MM   MM  E                  ";
cout<<"	           w   w  E      L      C   C  O   O  M M M M  E                  ";
cout<<"	           w   w  EEE    L      C      O   O  M  M  M  EEE                ";
cout<<"	           w   w  EEE    L      C      O   O  M     M  EEE                ";
cout<<"	           w w w  E      L      C   C  O   O  M     M  E                  ";
cout<<"	           ww ww  E      L       C C    O O   M     M  E                  ";
cout<<"	           w   w  EEEEE  LLLLL    C      O    M     M  EEEEE              ";
cout<<"\n\n\n\n\n\t\t\t\t\t\tPress ENTER to Continue...";
getch();
clrscr();
}
void iconOpen(){
clrscr();
header();
cout<<"\t\t¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹\n";
cout<<"\t\t¹¹¹                                             ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹        ¹¹¹¹¹        ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹    HELLO   ¹   WORLD    ¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹        ¹¹¹¹¹        ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹ ¹ ¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹ ¹¹¹ ¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹  ¹¹ ¹¹¹¹¹ ¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹  ¹¹¹¹¹¹¹  ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹                                             ¹¹¹\n";
cout<<"\t\t¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹\n";
cout<<"\n\t\t\t\t\t Press Any Key...";
getch();
}

void iconBye(){
clrscr();
header();
cout<<"\t\t¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹\n";
cout<<"\t\t¹¹¹                                             ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹        ¹¹¹¹¹        ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹    GOOD    ¹    BYE!    ¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹        ¹¹¹¹¹        ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹¹¹ ¹ ¹¹¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹¹¹ ¹¹¹ ¹¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹  ¹¹ ¹¹¹¹¹ ¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹  ¹¹¹¹¹¹¹  ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹ ¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹ ¹¹¹\n";
cout<<"\t\t¹¹¹                                             ¹¹¹\n";
cout<<"\t\t¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹¹\n";
cout<<"\n\t\t\t\t\t Press Any Key...";
getch();
}

void header(){
cout<<"###############################################################################";
cout<<"                  SCHOOL RECORD MANAGEMENT SYSTEM Version 0.0.0.1                ";
cout<<"###############################################################################\n\n\n";
}
//////////////////////////OTHER FUNCTIONS ENDS//////////////////////////////////