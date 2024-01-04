#include<iostream>
using namespace std;

void FindSequences (string str , string Output , int index)
{   
    //base case
    if (index>=str.length())
    {
        cout<<"->"<<Output<<endl;
        return ; 
   
    }

    //exclude
     char ch = str[index];
    
     FindSequences ( str ,  Output ,  index+1); //Recursion relation

     //include

     Output.push_back(ch);
     FindSequences ( str ,  Output ,  index+1); // Recursion relation


    
}

int main()
{
    string str = "Shan";
    string Output="";
    int index=0;

    FindSequences(str , Output , index);
    return 0;
}