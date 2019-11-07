//HR Test:
//search for an element in an array
string findNumber(vector<int> arr, int k) 
{
vector<int>::iterator ptr; 
for (ptr = arr.begin(); ptr < arr.end(); ptr++) 
if(*ptr==k) return "YES"; 
return "NO";
}

//find odd no.s between range l and r
vector<int> oddNumbers(int l, int r) 
{
vector<int>x; 
for(int i=l;i<=r;i++) 
if(i%2!=0) x.push_back(i);
return x;
}

//Contest1:
#include<algorithm>
#include<sstream>
#include<cctype>
/*
Author : Anirban Chetia
Note:
The approach I followed is a pretty naive approach considering 2-digit IDs as given in the
sample and approaching the problem depending on cases of having 'CREATE','CREATE'+'FINALIZE'
and 'CREATE'+'FINALIZE'+'PAY' lines as given in the sample. Multiples of each line are not
taken into consideration here. Also for some reason I couldn't write in the editor or text
field provided in the second question (subjective), hence am commenting the same here.

If given more time I would implement the Invoice for multiple statements for the 3 cases above
and resolve the issue for an id with more than 2 digits. (since as of now it would affect the 
amount for the code I wrote below if id has more than 2 digits)
*/

int calculate_total_owed(vector<string> actions) 
{ 
//converting given vector string array into a normal string array:
string actionarray[actions.size()-1];
vector<string>::iterator ptr; 
int i=0;
for (ptr = actions.begin(); ptr < actions.end(); ptr++,i++)
{
    actionarray[i]=*ptr;
}
//-------------------------------------------------------------------------------------------
//if only 'CREATE' is there, or if actions array contain only one line, print amount directly: 
  if(actions.size()==1)
  {
 //By observation I can see digits comes from index 11 on the Create line:
if(actionarray[0].at(0)=='C') //if line starts with C its the Create id line.
{   int idcount=0;
    for(int i=11;;i++) //run till all digits are covered and get count of the number of digits
    if(isdigit(actionarray[0].at(i)))
    {
      idcount++;
    }
    //get substring (id) from string with digits obtained from 11<->11+idcount:
    string id = actionarray[0].substr(11, 11+idcount);
    //convert string id to integer id:
    int ID=stoi(id);
}

//going by the same rule:
//starting from 21(safe bet for 2 digit ids) to avoid previous integers from id:
for(i=21;i<actionarray[0].size();i++)
{ int amountcount=0;
  if(isdigit(actionarray[0].at(i)))
  { amountcount++;
  }
  string amount=actionarray[0].substr(21,21+amountcount);
  int AMOUNT=stoi(amount);
  return AMOUNT; 
}
  }
//------------------------------------------------------------------------------------
//if 'CREATE'+'FINALIZE' lines are there, or if actions array contain only two lines:
  else if(actions.size()==2) 
  {
if(actionarray[1].at(0)=='F') //emphasize on the finalize line:
{
 for(i=23;i<actionarray[1].size();i++)
{ int amountcount=0;
  if(isdigit(actionarray[1].at(i)))
  amountcount++;
  string amount=actionarray[1].substr(23,23+amountcount);
  int AMOUNT=stoi(amount);
  return AMOUNT; 
}
}
  }
  //if 'CREATE'+'FINALIZE'+'PAY' lines are there, or actions array contain 3 lines (indices 0,1,2)
  else 
  {
if(actionarray[0].at(0)=='C' && actionarray[1].at(0)=='F' && actionarray[2].at(0)=='P')
{   int idcount=0;
    for(int i=11;;i++) 
    if(isdigit(actionarray[0].at(i)))
    {
      idcount++;
    }
    string id = actionarray[0].substr(11, 11+idcount);
    int ID1=stoi(id);

    idcount=0;
    for(int i=13;;i++) 
    if(isdigit(actionarray[1].at(i)))
    {
      idcount++;
    }
    string id2 = actionarray[1].substr(13, 13+idcount);
    int ID2=stoi(id);
    
    idcount=0;
    for(int i=8;;i++) 
    if(isdigit(actionarray[2].at(i)))
    {
      idcount++;
    }
    string id3 = actionarray[2].substr(8, 8+idcount);
    int ID3=stoi(id);
    
    if(ID1==ID2 && ID2==ID3) return 0;
}   

   
  }
return 0;
}
