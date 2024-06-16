#include <iostream>
using namespace std;
int main() {
   int m,l;
    string t;
    int i;

   cout<<" ENTER THE NO OF TASKS YOU WANTS TO COMPLETE :";
   cin>>m;
   for (l=0;l<m;l++)
   {
       cout<<"Task:";
       cin>>t;
        cout<<"done(1) or not(0):";
        cin>>i;
         if(i==0)
    {
        cout<<"incomplete"<<endl<<endl;
    }
    else
    {
        cout<<"completed"<<endl<<endl;
    }



       
   }
    return 0;
}
    
	  
	
	

