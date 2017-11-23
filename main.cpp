#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>

using namespace std;

char a[10][10];

void init()
{
    char k='1';
    for(int i=1;i<=3;i++)
      for(int j=1;j<=3;j++)
      {
          a[i][j]=k;
          k++;
      }
}

void afisare_matrice()
{
    cout<<"----------------"<<endl<<endl;
    for(int i=1;i<=3;i++){
        cout<<"|  ";
        for(int j=1;j<=3;j++)
         cout<<a[i][j]<<" | ";
        cout<<endl<<endl;}
    cout<<"----------------"<<endl;
}

int mutare(int m,char jucator)
{
    if (m<1 || m>9)
    {
        cout<<"Mutare invalida"<<endl;
        return 2;
    }
    int ok=0;
    switch(m)
    {
        case 1: if(a[1][1]!='X' && a[1][1]!='O') ok=1;break;
        case 2: if(a[1][2]!='X' && a[1][2]!='O') ok=1;break;
        case 3: if(a[1][3]!='X' && a[1][3]!='O') ok=1;break;
        case 4: if(a[2][1]!='X' && a[2][1]!='O') ok=1;break;
        case 5: if(a[2][2]!='X' && a[2][2]!='O') ok=1;break;
        case 6: if(a[2][3]!='X' && a[2][3]!='O') ok=1;break;
        case 7: if(a[3][1]!='X' && a[3][1]!='O') ok=1;break;
        case 8: if(a[3][2]!='X' && a[3][2]!='O') ok=1;break;
        case 9: if(a[3][3]!='X' && a[3][3]!='O') ok=1;break;


    }
    if(ok==1)
    {
        switch(m)
        {
        case 1: a[1][1]=jucator;break;
        case 2: a[1][2]=jucator;break;
        case 3: a[1][3]=jucator;break;
        case 4: a[2][1]=jucator;break;
        case 5: a[2][2]=jucator;break;
        case 6: a[2][3]=jucator;break;
        case 7: a[3][1]=jucator;break;
        case 8: a[3][2]=jucator;break;
        case 9: a[3][3]=jucator;break;
        }
    }
    else cout<<"Acea pozitie este deja ocupata "<<endl;
    return ok;


}

int mutare_AI(int m,char jucator)
{

    int ok=0;
    switch(m)
    {
        case 1: if(a[1][1]!='X' && a[1][1]!='O') ok=1;break;
        case 2: if(a[1][2]!='X' && a[1][2]!='O') ok=1;break;
        case 3: if(a[1][3]!='X' && a[1][3]!='O') ok=1;break;
        case 4: if(a[2][1]!='X' && a[2][1]!='O') ok=1;break;
        case 5: if(a[2][2]!='X' && a[2][2]!='O') ok=1;break;
        case 6: if(a[2][3]!='X' && a[2][3]!='O') ok=1;break;
        case 7: if(a[3][1]!='X' && a[3][1]!='O') ok=1;break;
        case 8: if(a[3][2]!='X' && a[3][2]!='O') ok=1;break;
        case 9: if(a[3][3]!='X' && a[3][3]!='O') ok=1;break;


    }
    if(ok==1)
    {
        switch(m)
        {
        case 1: a[1][1]=jucator;break;
        case 2: a[1][2]=jucator;break;
        case 3: a[1][3]=jucator;break;
        case 4: a[2][1]=jucator;break;
        case 5: a[2][2]=jucator;break;
        case 6: a[2][3]=jucator;break;
        case 7: a[3][1]=jucator;break;
        case 8: a[3][2]=jucator;break;
        case 9: a[3][3]=jucator;break;
        }
    }
    else return 5;
    return ok;


}

int test_castig(char tura)
{
    if(a[1][1]==tura && a[1][2]==tura && a[1][3]==tura) return 1;
    if(a[2][1]==tura && a[2][2]==tura && a[2][3]==tura) return 1;
    if(a[3][1]==tura && a[3][2]==tura && a[3][3]==tura) return 1;
    if(a[1][1]==tura && a[2][1]==tura && a[3][1]==tura) return 1;
    if(a[1][2]==tura && a[2][2]==tura && a[3][2]==tura) return 1;
    if(a[1][3]==tura && a[2][3]==tura && a[3][3]==tura) return 1;
    if(a[1][1]==tura && a[2][2]==tura && a[3][3]==tura) return 1;
    if(a[3][1]==tura && a[2][2]==tura && a[1][3]==tura) return 1;
    return 0;

}

int AIbot()
{
    /*if(a[1][1]=='O' && a[1][2]=='O' && a[1][3]!='X') return 3;
    if(a[2][1]=='O' && a[2][2]=='O' && a[2][3]!='X') return 6;
    if(a[3][1]=='O' && a[3][2]=='O' && a[3][3]!='X') return 9;
    if(a[1][1]=='O' && a[2][1]=='O' && a[3][1]!='X') return 7;
    if(a[1][2]=='O' && a[2][2]=='O' && a[3][2]!='X') return 8;
    if(a[1][3]=='O' && a[2][3]=='O' && a[3][3]!='X') return 9;
    if(a[1][1]=='O' && a[1][3]=='O' && a[1][2]!='X') return 2;
    if(a[2][1]=='O' && a[2][3]=='O' && a[2][2]!='X') return 5;
    if(a[3][1]=='O' && a[3][2]=='O' && a[1][3]!='X') return 8;
    if(a[1][2]=='O' && a[1][3]=='O' && a[1][1]!='X') return 1;
    if(a[2][2]=='O' && a[2][3]=='O' && a[2][1]!='X') return 4;
    if(a[3][2]=='O' && a[3][3]=='O' && a[3][1]!='X') return 7;
*/



}


void joc_AI()
{
int test,muta,ok=1,nr=0;
while(nr!=9)
{
cout<<"Fa o mutare! "<<endl;
        do
        {
            cin>>muta;
            test=mutare(muta,'X');
        }while(test!=1);
        if(test_castig('X')==1)
        {
          cout<<"Castigatorul este "<<'X'<<endl;
          break;
        } nr++;
        if(nr==9)
            if(test_castig('X')==test_castig('O'))
            {
                cout<<"Remiza"<<endl;
                break;
            }

        do
        {
        srand(time(NULL));
        int range = 9 - 1 + 1;
        int alegere_bot = rand() % range + 1;
        test=mutare_AI(alegere_bot,'O');
        }while(test!=1);
        afisare_matrice();

        if(test_castig('O')==1)
        {
          cout<<"Castigatorul este "<<'O'<<endl;
          break;
        }
        nr++;

        afisare_matrice();
}



}

void joc()
{
    int muta,test,nr=0;
    char tura='X';
    while(nr!=9)
    {
        cout<<"Este randul lui "<<tura<<endl;
        cout<<"Fa o mutare! "<<endl;
        do
        {
            cin>>muta;
            test=mutare(muta,tura);
        }while(test!=1);
        afisare_matrice();
        if(test_castig(tura)==1) break;
        if(tura=='X') tura='O';
        else tura='X';
        nr++;


    }
    if(nr==9 && test_castig('X')==0 && test_castig('O')==0)
        cout<<"Remiza!"<<endl;
        else
        cout<<"Castigatorul este "<<tura<<"!"<<endl;
}

int main()
{
    int alegere;
    cout<<"Apasa 1 pentru a incepe jocul"<<endl;
        cout<<"Apasa 0 pentru a incheia"<<endl;
    do
    {
       cin>>alegere;
    }
    while(alegere!=1 && alegere !=0);

    while(alegere==1)
    {
     init();
     afisare_matrice();
     joc();
     cout<<"Apasa 1 pentru a juca din nou"<<endl;
     cout<<"Apasa 0 pentru a iesi din joc"<<endl;
      do
    {
       cin>>alegere;
    }while(alegere!=1 && alegere !=0);
    }
    cout<<"Multumesc pentru ca ai jucat!";
    init();
    afisare_matrice();
    //joc_AI();
    afisare_matrice();

}
