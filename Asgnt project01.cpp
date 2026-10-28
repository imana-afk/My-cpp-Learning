#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    char names[5][20];
    int marks[5][3];
    int total[5];
    double average[5];
    
    //taking all inputs from the user
        for(int i=0;i<5;i++){
        cout<<"Enter Student "<<i+1<<"'s name: ";
        cin.getline(names[i],20);

        cout<<"Enter Three Marks: ";
        for(int j=0;j<3;j++){
         cin>>marks[i][j];
        }
        cin.ignore(100,'\n');
     }

     //calculating total and average for each students
       for(int i=0;i<5;i++){
       total[i]=0;

       for(int j=0;j<3;j++){
      total[i]=total[i]+marks[i][j];
        }
        average[i]=total[i]/3.0;
     }

      //creating table headers
      cout<<left<<setw(20)<<"NAMES";
      cout<<left<<setw(10)<<"MARK1";
      cout<<left<<setw(10)<<"MARK2";
      cout<<left<<setw(10)<<"MARK3";
      cout<<left<<setw(10)<<"TOTAL";
      cout<<left<<setw(10)<<"AVERAGE"<<endl;

      //dsplaying our inputs
      for(int i=0;i<5;i++){
      cout<<left<<setw(20)<<names[i];
      
      for(int j=0;j<3;j++){
        cout<<setw(10)<<marks[i][j];
      }
      cout<<setw(10)<<total[i];
      cout<<setw(10)<<average[i];
      cout<<endl;//for a new line after the end of preceeding row
      }

      //finding TOP student
      int top=0;
      for(int i=0;i<5;i++){
      if(total[i]>total[top]){
      top=i;
      } 
      }

      cout<<"Top Student Is: "<<names[top];


 return 0;   
}