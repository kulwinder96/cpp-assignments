#include<iostream>
using namespace std;
int main()
{
    int rows{0};
    int columns{0};
    cout<<"how many rows you want "<<endl;
    cin>>rows;
    cout<<"how many columns you want "<<endl;
    cin>>columns;
    int **first_table=new int*[rows];
int **second_table=new int*[rows];
int **third_table=new int*[rows];
cout<<"lets store values in tables "<<endl;
cout<<endl;
for(int i=0; i<rows; ++i)
{
    first_table[i]= new int[columns];
    for(int j=0; j<columns; ++j)
    {
        int value{0};
        cout<<"enter value for row "<<i+1<<"column "<<j+1<<endl;
cin>>first_table[i][j];
//first_table[i][j]=value;
    }
}
cout<<"values stored in first table "<<endl;
cout<<endl;
cout<<"lets go for second table"<<endl;
cout<<endl;
for(int i=0; i<rows; ++i)
{
    second_table[i]=new int[columns];
    for(int j=0; j<columns; ++j)
    {
int value{0}        ;
cout<<" in a second table enter value for row "<<i+1<<" column "<<j+1<<endl;
cin>>second_table[i][j];


    }
}
cout<<"value storing is done"<<endl;
char symbol=' ';
again:
cout<<" enter + for addition - for substraction / for division and * for multipication"<<endl;
cin>>symbol;
for(int i=0; i<rows; ++i)
{
    third_table[i]=new int[columns];
    for(int j=0; j<columns; ++j)
    {
        switch(symbol)
        {
            case '+':
            third_table[i][j]=first_table[i][j]+second_table[i][j];
            break;
            case '-':
                        third_table[i][j]=first_table[i][j]+second_table[i][j];
                        break;
                        case '/':
                                    third_table[i][j]=first_table[i][j]+second_table[i][j];
                                    break;
                                    case '*':
                                                third_table[i][j]=first_table[i][j]+second_table[i][j];
                                                break;
                                                default:
                                                cout<<"invalid symbol try again"<<endl;
                                                goto again;
        }
    }
}
cout<<"arthmethic operation is performed"<<endl;
switch(symbol)
{
    case '+':
cout<<" after addition values are "<<endl;
cout<<endl;
break;
case '-':
cout<<"after substraction values are "<<endl;
cout<<endl;
break;
case '/':
cout<<"after division values are "<<endl;
cout<<endl;
break;
case '*':
cout<<"after multipication values are"<<endl;
cout<<endl;
break;
}
for(int i=0; i<rows; ++i)
{
    for(int j=0; j<columns; ++j)
    {
        cout<<third_table[i][j];
        cout<<" ";
    }
    cout<<endl;
}
    return 0;
}