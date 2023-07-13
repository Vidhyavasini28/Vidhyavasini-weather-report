/* ----Weather Application Program---- 

Name:P.S.Vidhyavasini
College Name:Vivekanandha College Of Engineering for women


    *Here use class and objects
    *Inside the class i declare a function and call the function using objects
    *There are five ways of weather Report
        *Today
        *yesterday
        *Tomorrow
        *weekly
        *Monthly
    ->Tempature is above 90 t0 100
            It is Sunny
    ->Tempature is above 70 t0 below 90
            It is Normal heat
    ->Tempature is above 50 t0 below 70
            It is possible to rain
    ->Tempature is above 30 t0 below 50
            It is thunder and lightning
    ->Tempature is above 0 t0 below 30
            It is rainy
    
*/
#include <iostream>

using namespace std;

class Weather
{
    
    public:
        void loc()
        {
            string loc;
            cout<<"Enter the location:";
            cin>>loc;
        }
        
        void today()
        {
            int temp;
            cout<<"Enter the temperature:";
            cin>>temp;
            if((temp>=90)&&(temp<=100))
            {
                cout<<"The climate is sunny."<<endl;
            }
            else if((temp>=70)&&(temp<90))
            {
                cout<<"The climate is in normal heat"<<endl;
            }
             else if((temp>=50)&&(temp<70))
            {
                cout<<"It is possible to rain"<<endl;
            }
            else if((temp>=30)&&(temp<50))
            {
                cout<<"It is thunder and lightning"<<endl;
            }
            else if((temp>=0)&&(temp<30))
            {
                cout<<"It is rainy"<<endl;
                
            }
        }
        void yesterday()
        {
            int temp;
            cout<<"Enter the temperature:";
            cin>>temp;
            if((temp>=90)&&(temp<=100))
            {
                cout<<"The climate is sunny."<<endl;
            }
            else if((temp>=70)&&(temp<90))
            {
                cout<<"The climate is in normal heat"<<endl;
            }
             else if((temp>=50)&&(temp<70))
            {
                cout<<"It is possible to rain"<<endl;
            }
            else if((temp>=30)&&(temp<50))
            {
                cout<<"It is thunder and lightning"<<endl;
            }
            else if((temp>=0)&&(temp<30))
            {
                cout<<"It is rainy"<<endl;
                
            }
        }
         void tomorrow()
        {
            int temp;
            cout<<"Enter the temperature:";
            cin>>temp;
            if((temp>=90)&&(temp<=100))
            {
                cout<<"The climate is sunny."<<endl;
            }
            else if((temp>=70)&&(temp<90))
            {
                cout<<"The climate is in normal heat"<<endl;
            }
             else if((temp>=50)&&(temp<70))
            {
                cout<<"It is possible to rain"<<endl;
            }
            else if((temp>=30)&&(temp<50))
            {
                cout<<"It is thunder and lightning"<<endl;
            }
            else if((temp>=0)&&(temp<30))
            {
                cout<<"It is rainy"<<endl;
                
            }
        }
         void weekly()
        {
            int i,temp;
            for(i=1;i<=7;i++)
            {
                switch(i)
                {
                    case 1:cout<<"Monday"<<endl;
                    break;
                    case 2:cout<<"Tuesday"<<endl;
                    break;
                    case 3:cout<<"Wednesday"<<endl;
                    break;
                    case 4:cout<<"Thrusday"<<endl;
                    break;
                    case 5:cout<<"Friday"<<endl;
                    break;
                    case 6:cout<<"Saturday"<<endl;
                    break;
                    case 7:cout<<"Sunday"<<endl;
                    break;
                
                }
                {
                if((i==1)||(i==2)||(i==3)||(i==4)||(i==5)||(i==6)||(i==7))
                {
                cout<<"Enter the temperature:";
                cin>>temp;
                if((temp>=90)&&(temp<=100))
                {
                    cout<<"The climate is sunny."<<endl;
                }
                else if((temp>=70)&&(temp<90))
                {
                    cout<<"The climate is in normal heat"<<endl;
                }
                 else if((temp>=50)&&(temp<70))
                {
                    cout<<"It is possible to rain"<<endl;
                }
                else if((temp>=30)&&(temp<50))
                {
                    cout<<"It is thunder and lightning"<<endl;
                }
                else if((temp>=0)&&(temp<30))
                {
                    cout<<"It is rainy"<<endl;
                    
                }
                }
                }
            }
           
        }
        void monthly()
        {
            int i,temp;
            for(i=1;i<=12;i++)
            {
                switch(i)
                {
                    case 1:cout<<"January"<<endl;
                    break;
                    case 2:cout<<"February"<<endl;
                    break;
                    case 3:cout<<"March"<<endl;
                    break;
                    case 4:cout<<"April"<<endl;
                    break;
                    case 5:cout<<"May"<<endl;
                    break;
                    case 6:cout<<"June"<<endl;
                    break;
                    case 7:cout<<"July"<<endl;
                    break;
                    case 8:cout<<"August"<<endl;
                    break;
                    case 9:cout<<"September"<<endl;
                    break;
                    case 10:cout<<"October"<<endl;
                    break;
                    case 11:cout<<"November"<<endl;
                    break;
                    case 12:cout<<"December"<<endl;
                    break;
                    default:cout<<"Wrong choice!.....";
                }
                {
                if((i==1)||(i==2)||(i==3)||(i==4)||(i==5)||(i==6)||(i==7)||(i==8)||(i==9)||(i==10)||(i==11)||(i==12))
                {
                cout<<"Enter the temperature:";
                cin>>temp;
                if((temp>=90)&&(temp<=100))
                {
                    cout<<"The climate is sunny."<<endl;
                }
                else if((temp>=70)&&(temp<90))
                {
                    cout<<"The climate is in normal heat"<<endl;
                }
                 else if((temp>=50)&&(temp<70))
                {
                    cout<<"It is possible to rain"<<endl;
                }
                else if((temp>=30)&&(temp<50))
                {
                    cout<<"It is thunder and lightning"<<endl;
                }
                else if((temp>=0)&&(temp<30))
                { 
                    cout<<"It is rainy"<<endl;
                    
                }
                }
                }
            }
           
        }
};
int main()
{
    int choice;
    Weather w;
    w.loc();
    cout<<"\t\t----Weather Report----"<<endl;
    cout<<"1.Today weather report"<<endl;
    cout<<"2.Yesterday weather report"<<endl;
    cout<<"3.Tomorrow weather report"<<endl;
    cout<<"4.Weekly weather report"<<endl;
    cout<<"5.Monthly weather report"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:w.today();
        break;
        case 2:w.yesterday();
        break;
        case 3:w.tomorrow();
        break;
        case 4:w.weekly();
        break;
        case 5:w.monthly();
        break;
        default:"Wrong input!...";
    }
    return 0;
    
}



