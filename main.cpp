#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdlib>
#include <bits/stdc++.h>
#include<math.h>
#include<queue>
#include<map>
#include <cctype>
#include <cstring>

static int itno=0;
using namespace std;
queue<string> myqueue;
 void cropmanage();
void wheat1();
void rice1();
void maize1();
void pulses1();
void jute1();
void sugarcane1();
void fertpest();
void admonishment();
void fmach();
void prosche();

class error
{
};
class personal
{

string arr[10];
public:
virtual void print()
{
cout<<"********SMART FARM*********";
}
string* getdetails()
{
cout<<"\n Enter farmer name:";
cin>>arr[0];
cout<<"\n Enter gender:";
cin>>arr[1];
cout<<"\n Enter address:";
cin>>arr[2];
cout<<"\n Enter age:";
cin>>arr[3];
cout<<"\n Enter no. of members in the family:";
cin>>arr[4];
cout<<"\n Enter salary:";
cin>>arr[5];
A:
cout<<"\n Enter phone no:";
cin>>arr[6];
int i;
try
{
if(arr[6].length()!=10)
throw error();
   }
   catch(error e)
   {
    cout<<"\n INVALID phone no!!\n";
    goto A;
}
return arr;

}
};
class land
{

string la[20];
public:
char ch;

string* getdetails1()
{  

cout<<"\n Enter the land location:";
cin>>la[0];
cout<<"\n Enter area of your land in acres:";
cin>>la[1];
cout<<"\n Enter the land owner's name:";
cin>>la[2];
cout<<"\n optional fields(soil,water,irrigation):\n (enter y to continue)";
cin>>ch;
if(ch=='y')
{
cout<<"\n Enter soil type:";
cin>>la[3];
cout<<"\n Enter water usage approximately needed in litres:";
cin>>la[4];
cout<<"\n Enter type of irrigation:";
cin>>la[5];
   }
   return la;
}
};
class login:public personal,public land
{
public:
string* brr;
string* hrr;
int i;
 void print()
{
cout<<"********SMART FARM*********\n";
}

void create()
{
int id;
char name[20];
int w = 25;
char input[w];
int sizeOf;
char* ptr = NULL;
char* ptr2 = NULL;
    fstream fout;
fout.open("farmerdet.csv", ios::out | ios::app);
  cout<<"\nEnter username:";
cin>>name;
  E:
    cout << "Enter your email address\n";
    cin>>input;
sizeOf = strlen(input);
    for(int i = 0; i < sizeOf; i++)
    {
        ptr= strstr(input, "@");
        if(ptr != NULL)
        {
            break;
        }
    }
    for(int i = 0; i < sizeOf; i++)
    {
        ptr2 = strstr(input, ".");
        if(ptr2 != NULL && &ptr2 > &ptr)
        {
            break;
        }
    }
    if(ptr != NULL)
    {
        if(ptr2 != 0 && &ptr2 < &ptr)
            {
                cout << "Email accepted.\n";
            }

        else
            {
                cout << "Missing . symbol after @\n";
                goto E;
            }
    }

    else
    {
        cout << "Missing @ symbol\n";
        goto E;
    }
srand( time(NULL) );     //to generate random no
    id = (rand() % 9000)+1000;
    cout<<"\nyour ID is:"<<id<<"(Use this id to log in)"<<endl;
   
   
  fout << id << ", "
             << name << ", "
             << input << ", ";
             brr = getdetails();
             for(i=0;i<7;i++)
             fout << brr[i] << ",";
             hrr = getdetails1();
             for(i=0;i<6;i++)
             fout << hrr[i] << ",";
             fout<< "\n";
        fout.close();
    }
void read_record()
{
 
   
    fstream fin;
    fin.open("farmerdet.csv", ios::in);
    int id, idchk, count = 0;
    cout << "Enter your ID:";
    cin >> id;
    vector<string> row;
    string line, word, temp;
    while (fin) {
        row.clear();
        getline(fin, line);     //to get the row and store it in string variable
        stringstream s(line);
        while (getline(s, word, ',')) {   //to separate each word
 
            row.push_back(word);
        }
       
       
        idchk = atoi(row[0].c_str());
 
       
     if(idchk == id)
{
 
             count = 1;
            cout << "ID: " << row[0] << "  \n";
            cout << "Name: " << row[1] << "\n";
            break;
        } }
     if(count==0)
     {
     
       cout << "Record not found!!\n";
   
   }
           
       
 fin.close();
}
};




class guidelines
{
public:


void wheat1()
{
cout<<"\n General info:";cout<<"\n____________";cout<<"\n1.Wheat is the main cereal crop in India.\n 2.Wheat growing zone in TN:Nilgiris & Palani Hills of Tamil Nadu.\n 3.Climate requirement:The best wheat are produced in areas favoured with cool, moist weather. \n 4.The optimum temperature range for ideal germination  is 20-25°C.\n 5. Soil: Soils with a clay loam ,good structure and moderate water holding capacity are ideal for wheat cultivation. \n 6.Fertilizer Management: 120 kg nitrogen, 60 kg phosphorus and 30 kg potash per hectare were required for optimum productivity. \n 7.Nutrient Management: strategies may include:\n a.Site specific nutrient management.\n b.Integration of crop residues.\n c.Tillage techniques like FIRBS.\n d.Remote sensing for efficient Nutrient management.\n";
 
cout<<"\n Seed varieties:";cout<<"\n______________";
cout<<"\n 1.PBW 343 \n 2.HPW 42 \n 3.HS 365 \n 4.HW 971 \n 5.HUW 318 \n 6.HW 1085 \n 7. HW 2044\n";

}

void rice1()
{

  cout<<"\n General info:";cout<<"\n____________";
  cout<<"\n 1.Climate requirement: Rice crop needs a hot and humid climate. \n 2.Nutritional value: Rice is a nutritional staple food containing carbohydrate (starch). \n 3. Medicinal value: Treats many health related maladies such as indigestion, diabetes, arthritis, paralysis, epilepsy.\n 4. Crop production practices: \n a.Dry or Semi-dry upland cultivation. \n b.Wet or lowland cultivation\n";

cout<<"\n Seed varities:";cout<<"\n______________";
cout<<"\n 1.MDU-3 \n 2.Moti (IET-7328)\n 3.MTU-2 (9353)\n 4.MTU-5182 (Nandi) \n 5.MTU-6024 \n 6.MTU-9993\n";

}
void maize1()
{

cout<<"\n General info:";cout<<"\n____________";
  cout<<"\n 1.Maize (Zea mays) is known as queen of cereals because it has the highest genetic yield potential among the cereals.\n 2. Maize growing zones: AP,Karnataka,Rajasthan. \n 3.Soil: Maize can be grown successfully in variety of soils ranging from loamy sand to clay loam. \n 4. Industrial products: starch, oil, protein, pharmaceutical and paper industries. \n";

cout<<"\n Seed varities:";cout<<"\n______________";
cout<<"\n 1.Ganga-5 \n 2.Ganga-9 \n 3. Deccan 103 \n 4. Diara \n 5. Diara-3 \n 6.D765\n";

}
void pulses1()
{

   cout<<"\n General info:";cout<<"____________";
  cout<<"\n 1. Pulses are  cheap source of plant protein. \n 2.Pulses Growing Zones: Haryana,Punjab,Rajasthan. \n 3.Climatic requirement: Pulse crops are cultivated in Kharif, Rabi and Zaid seasons of the Agricultural year. ";

   cout<<"\n Seed varities:";cout<<"______________";
cout<<"\n Varieties: \n 1.chickpeas \n 2. pigeon pea \n 3. moong beans \n 4. urd \n 5.masur  \n 6.peas \n 7.various kinds of beans.";

}
void jute1()
{

  cout<<"\n General info:";cout<<"\n____________";
  cout<<"\n 1. Jute is an important natural fibre crop in India.\n 2. Jute cultivation zones:  Assam, UP, West Bengal. \n 3 .Climatic Requirements: The suitable climate for growing jute is warm and wet climate. \n 4. Soil: The new gray alluvial soil is best for jute.\n";

cout<<"\n Seed varities:";cout<<"\n______________";
cout<<"\n 1. AAUOJ-1 (Tarun) \n 2. JBO-2003H (Ira) \n 3. JRO-204 (Suren) \n 4. S-19 (Subala) \n 5. JRO-8432 (Shakti) \n 6. CO-58 (Sourav)\n";

            cout<<"\n Pest and diseases";cout<<"\n__________________";
            cout<<"\n 1. 1. Stem girdling beetle: Management strategy: Spray application of phosalone 0.07% or endosulfan 0.07 % at fortnightly interval. \n 2. Jute weevil:  Spray application of phosalone 0.07% or endosulfan 0.07 or cypermethrin 0.005%. \n 3. Spodoptera exigua: Management strategy: Collection and destruction of egg masses.\n";

}
void sugarcane1()
{

  cout<<"\n General info:";cout<<"\n____________";
  cout<<"\n 1. Sugarcane (Saccharum officinarum) is widely grown crop in India. \n 2. Sugarcane cultivation zones:  TN,AP,Maharashtra. \n 3. Climatic requirements: For ripening ,low temperatures in the range of 12° to 14° are desirable. \n 4. Soil: thrives best on well drained soils.\n";

cout<<"\n Seed varities:";cout<<"\n______________";
cout<<"\n 1.Co 0118 \n 2.  Co 0232 \n 3. Co 0237 \n 4. Co 0238 \n 5. Co 0239 \n 6. CoSe 01421 \n 7. Co 05009\n";

}

void cropmanage()
{  
   int x;
   do
   {
   int a;
cout<<"\n Enter your choice:\n 1.WHEAT \n 2.RICE \n 3.MAIZE \n 4.PULSES \n 5.JUTE \n 6.SUGAR CANE\n";
cin>>a;
myqueue.push("major_crop");
switch(a)
{
case 1:
wheat1();
break;
case 2:
rice1();
break;
case 3:
maize1();
break;
case 4:
pulses1();
break;
case 5:
jute1();
break;
case 6:
sugarcane1();
break;
default:
cout<<"\n enter valid choice:";
    }
    cout<<"\n Do you want to continue(1/0):";
    cin>>x;
   
   }while(x==1);
}

void fertpest()
{
cout<<"\n____________________________________________________________________________";
cout<<"\n Pesticides (DO's)";
cout<<"\n While Purchasing:\n \t Purchase pesticides/biopesticides only from Registered pesticide dealers having valid Licence.\n  During Storage: \n \t  Store the pesticides away from house premises.\n  While handling:\n \t  Keep pesticides separate during transportation.\n  While preparing spray solution:\n \t Always use clean water.\n While applying spray solutions:\n \t Apply only recommended dose and dilution.\n After Spray Operation: \n \t Left over spray solutions should be disposed off at safer place viz. barren isolated area.";
   cout<<"\n Types of FERTILIZERS: \n Type # 1. Nitrogenous Fertilizers \n Type # 2. Organic Nitrogenous Fertilizers \n Type # 3. Phosphate Fertilizers \n  Type # 4. Potassic Fertilizers";
}

void admonishment()
{
cout<<"\n____________________________________________________________________________";
cout<<"\n RISK MANAGEMENT:\n \t 3 layers of risks: \n \t \t 1.Normal variations in production, prices and weather do not require any specific policy response.\n \t \t 2.Infrequent but catastrophic events that cause significant damage and affect many farmers. \n \t \t3.marketable risk layer which includes hail damage ";
}

void fmach()
{
cout<<"\n____________________________________________________________________________";
cout<<"\n Most commonly used machinery in agriculture: \n 1.Tractor \n 2.Sprayer \n 3.Field cultivator \n 4.Shredders \n 5.Plough \n 6.Baler";
   cout<<"\n Innovation in machinery is about working smart. \n Various planters,climbers and threshers are used in modern farming.";
}

void prosche()
{
cout<<"\n____________________________________________________________________________";
cout<<"\n Programmes and schemes: \n 1.pradhan Mantri fasal bima yojana \n 2.Pradhan Mantri krishi sinchai yojana \n 3. Paramparagat krishi vikas yojana Rainfed Area Development(RAD) \n 4. Sub Mission on Agro Forestry (SMAF)";
}
};



class treeNode:public guidelines
{
public:
    int price;
    int itno;
    string itemname;
    int quantity;
    treeNode *left;
    treeNode *right;

treeNode* FindMin(treeNode *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return FindMin(node->left);
    else
        return node;
}
treeNode *Insert(treeNode *node,int itno,int price,string itemname,int quantity)
{

    if(node==NULL)
   {
        treeNode *temp;
        temp=new treeNode;
        temp -> itno = itno;
        temp -> price = price;
        temp -> itemname = itemname;
        temp -> quantity = quantity;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(price >(node->price))
    {
        node->right = Insert(node->right,itno,price,itemname,quantity);
    }
    else if(price < (node->price))
    {
        node->left = Insert(node->left,itno,price,itemname,quantity);
    }
    return node;
}
 treeNode * Delet(treeNode *node,int itno)
{

    treeNode *temp;
    if(node==NULL)
    {
        cout<<"Item Not Found!!!";
    }
    else if(itno< node->itno)
    {
        node->left = Delet(node->left,itno);
    }
    else if(itno > node->itno)
    {
        node->right = Delet(node->right,itno);
    }
    else
 {

        if(node->right && node->left)
        {
            temp = FindMin(node->right);
            node -> itno = temp->itno;
            node -> right = Delet(node->right,temp->itno);
        }
        else
        {


            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp);
        }
    }
    return node;
}

treeNode * Find(treeNode *node, int itno)
{
    if(node==NULL)
    {
         return NULL;
    }
    if(itno> node->itno)
    {

        return Find(node->right,itno);
    }
    else if(itno < node->itno)
    {

        return Find(node->left,itno);
    }
    else
    {

        return node;
    }
}
void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<"\nitem number:"<<node->itno<<"\t"<<"item name: "<<node->itemname<<"\t"<<"quantity: "<<node->quantity<<"\t"<<"price: "<<node->price<<endl;
    Inorder(node->right);
}
};

class loan
{  public:
long loan_accno;
float loan_amt,emi;
float loan_r,loan_t;
loan()
{
loan_accno=0;
loan_amt=emi=0;
loan_r=0;loan_t=0;
}
void get_loan()
{

cout<<"\nEnter your loan account number: ";
cin>>loan_accno;
cout<<"\nWhat is the principal loan amount: ";
cin>>loan_amt;
cout<<"\nwhat is the rate of interest per annum?";
cin>>loan_r;
loan_r=(loan_r/(12*100));
cout<<"\nHow many years to repay the loan?";
cin>>loan_t;
loan_t=loan_t*12;
}
int calc_loan()
{
float d=0;
d=(pow(1+loan_r,loan_t)-1)/(pow(1+loan_r,loan_t)*loan_r);
emi=loan_amt/d;
  return emi;
}
};

class rd
{  public:
long rd_accno;
float rd_amt,mi;
float rd_r,rd_t;
rd()
{rd_accno=0;
rd_amt=mi=0;
rd_r=0;rd_t=0;}
void get_rd()
{

cout<<"\nEnter RD account number: ";
cin>>rd_accno;
cout<<"\nEnter the amount of investment: ";
cin>>rd_amt;
cout<<"\nEnter the annual rate of interest: ";
cin>>rd_r;
cout<<"\nEnter maturity time period(in years): ";
cin>>rd_t;
rd_t=rd_t*12;
}
int calc_rd()
{ mi=(float)(rd_amt*rd_r*rd_t*(rd_t+1))/(2*12*100);
  return mi;
}
int ret_amt()
{return rd_amt;}
};

class bank:public loan,public rd
{   public:
    float balance;
    float rd_bal;
    long accno;
    bank()
    {balance=0;
     accno=0;
     rd_bal=0;
    }
    void create()
  {
 
  cout<<"Enter account number:"<<endl;
    cin>>accno;
cout<<"Enter  your Current balance: "<<endl;
cin>>balance;
    }
void display()
    {
cout<<"\nAccount number: ";
     cout<<accno<<endl;
     cout<<"You need to pay Rs."<<calc_loan()<<" every month to repay the loan within "<<loan_t/12<<" years.";  
     cout<<"\ncurrent balance after 1st installment: "<<balance<<endl;
    }
    void loan_pay()
    { static int i=0;
        if(calc_loan()<=balance)
      {balance-=calc_loan();
       i++;
      display();
      cout<<"\nLoan amount due after 1st installment: Rs."<<(loan_amt-(calc_loan()));
      }
      else if(calc_loan()>balance)
      {cout<<"\nInsufficient funds!!!";}
      else if((loan_t-i)<0)
      {cout<<"\nLoan repaid completely!";}
   }
   void rd_pay()
    { static int j=0;
        if(ret_amt()<=balance&&rd_t>0)
 {balance-=ret_amt();
       rd_bal=rd_bal+calc_rd()+ret_amt();
       j++;
      cout<<"\nAfter "<<rd_t<<"months the investment of Rs."<<rd_amt<<" will be worth of Rs."<<rd_bal<<"\nTime left for maturity:"<<(rd_t-j)<<"months";
      }
      else if(ret_amt()>balance)
      {cout<<"\nInsufficient funds!!!";}
      else
      {
 cout<<"\nAccount matured!";
        balance+=rd_bal;
        rd_bal=0;
        display();
        }
   }
};

int main()
{

personal p;
land l;
login lg;
personal *ptr;
ptr = &lg;
ptr->print();
int a;
cout<<"\nHave an account?(1)\tCreate an account?(0)\nenter choice:";
cin>>a;
myqueue.push("log in");
if(a==1)
lg.read_record();
if(a==0)
lg.create();


 guidelines g;
  treeNode tn;
    treeNode *root = NULL,*temp;
   
   
int cho;
char c;
char h;
int pri,pri1;
int q,q1;
char sv[100],cont,ferti,fe[100],cont1;
do
{
cout<<"\n____________________________________________________________________________";
cout<<"\n Enter your choice:\n 1.CROP MANAGEMENT\n 2.FERTILIZERS AND PESTICIDES\n 3.ADMONISHMENT\n 4.FARM MACHINARIES\n 5.PROGRAMMES AND SCHEMES\n";
cin>>cho;
myqueue.push("guidelines");
switch(cho)
{
case 1:
g.cropmanage();
cout<<"\n Do you want to buy any seeds?[y/n] ";
cin>>h;
if(h=='y')
{
map<string, int> mp;
    mp["wheat"]=38;
    mp["rice"]=280;
    mp["pulse"]=64;
    mp["maize"]=100;
    mp["jute"]=300;
    mp["sugarcane"]=90;

map<string, int>::iterator itr;
    cout << "\tITEMNAME\t\t\tPRICE\n";
     for (itr = mp.begin();itr != mp.end();itr++)
{
      cout << '\t' << itr->first << "\t\t\t\t\t" << itr->second << '\n';
}
do
{
q=0;
cout<<"\n Enter the seed variety(wheat/rice/pulse/maize/sugarcane/jute) and Quantity : ";
cin>>sv>>q;
map<string, int>::iterator it ;
it = mp.find(sv);

if(it == mp.end())
{
cout << "\nNot present!" ;
goto U;
}
else
{
cout << "\nItemname->price:" << it->first << "->" << it->second ;
pri=q*it->second;
cout<<"\n price:"<<pri;
}
itno=itno+1;
root=tn.Insert(root,itno,pri,sv,q);
U:
cout<<"\n Want to buy more?(y/n) ";
cin>>cont;

}while(cont=='y');

}
break;
case 2:
g.fertpest();
cout<<"\n Do you want to buy any fertilizers(y/n) ";
cin>>ferti;
if(ferti=='y')
{
map< string, int > mpf;
map<string, int>::iterator it ;
 
mpf["nitrogen"]=800;
mpf["potassium"]=500;
mpf["phosphorus"]=300;
mpf["sulphur"]=700;  
map<string, int>::iterator itr;
cout << "\tFERTILIZER\t\t\tPRICE\n";
for (itr = mpf.begin();itr != mpf.end();itr++)
{
    cout << '\t' << itr->first << "\t\t\t\t\t" << itr->second << '\n';
}

do
{
q1=0;
  cout<<"\n Enter the fertilizer(nitrogen/potassium/sulphur/phosphorus) and Quantity : ";
  cin>>fe>>q1;
it= mpf.find(fe);
if(it == mpf.end())
{
cout << "Not present!" ;
goto D;
}
else
{

cout << "Fertilizer->price:"<< it->first << "->" << it->second ;
pri1=q1*it->second;
cout<<"\n price:"<<pri1;
}
  itno=itno+1;
  root=tn.Insert(root,itno,pri1,fe,q1);
  D:
  cout<<"\n Want to buy more?(y/n) ";
  cin>>cont1;
}while(cont1=='y');

}

break;
case 3:
g.admonishment();
break;
case 4:
g.fmach();
break;
case 5:
g.prosche();
break;
default:
cout<<"\n enter a valid choice";
}
cout<<"\n Do you want to continue? (y/n) ";
cin>>c;
  }while(c=='y');
    cout<<"\nItems in the tree are: ";
            root->Inorder(root);
            char del;
            cout<<"\n Do u want to delete any item?(y/n) ";
            cin>>del;
            if(del=='y')
            {
            int delid;
            cout<<"\n Enter the id to be deleted : ";
            cin>>delid;
            root = tn.Delet(root,delid);
            root->Inorder(root);
}
int findid;
char fnd;
cout<<"\n Do u want to search any item?(y/n) ";
            cin>>fnd;
            if(fnd=='y')
            {
cout<<"\nEnter the id to be searched: ";
            cin>>findid;
            temp = root->Find(root,findid);
            if(temp==NULL)
            {
                cout<<"\nElement is not found\n";
            }
            else
            {
                cout<<"item no "<<temp->itno<<" is Found!\n"<<"item "<<temp->itemname<<"\t"<<"quantity "<<temp->quantity;
            }
        }
        bank b;
           char ch;
           cout<<"\n____________________________________________________________________________";
  cout<<"\nNeed agricultural finance?(y/n)\t ";
  cin>>ch;
  myqueue.push("agri_finance");
  if(ch=='y'||ch=='Y')
  {
 
  b.create();
  b.get_loan();
  b.loan_pay();
}
  char rdp;
  cout<<"\n____________________________________________________________________________\n";
  cout<<"\nWant to know your profit from rd?(y/n) ";
  cin>>rdp;
  myqueue.push("RD");
  if(rdp=='y')
  {
  b.get_rd();
  b.rd_pay();
  }
  char hist;
  cout << "\nWant to see the history?(y/n)\n ";
  cin >> hist;
  if(hist == 'y')
  {
  cout<<"*******************************************************\n";
  cout << "HISTORY\n ";
  while(!myqueue.empty()) {
    cout << myqueue.front() << "\n";
    myqueue.pop();
}
}
   return 0;


}
