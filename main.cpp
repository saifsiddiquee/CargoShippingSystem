#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Box
{
protected :
    int snum,mnum,lnum ;
};
class SmallBox : public Box
{
public :
    void set_s_value(int s1n)
    {
        snum = s1n ;
    }
    int get_s_value()
    {
        return snum ;
    }
};
class MediumBox : public Box
{
public :
    void set_m_value(int m1n)
    {
        mnum = m1n ;
    }
    int get_m_value()
    {
        return mnum ;
    }
};
class LargeBox : public Box
{
public :
    void set_l_value(int l1n)
    {
        lnum = l1n ;
    }
    int get_l_value()
    {
        return lnum ;
    }
};

int main()
{
    int option; //first shipment approval
    int cont ; // for selecting continent
    int weight ; // package weight selection
    int calculation,calculation1 ;
    int s_box_num , sbn ; //for selecting the small box number
    string description ;
    string cntry ;
    cout << "            Welcome to ZAS parcel \n" ;
    cout << "Please select your Continent - \n"<<"1.Asia\n"<<"2.Europe\n"<<"3.Africa\n"<<"4.Australia\n"<<"5.South America\n"<<"6.North America\n" ;
    cin >> cont ;
    system ("CLS");
    switch(cont)
    {
    // list of continents
    case 1 :// Asia and asian countries
    {
        int l ;
        cout<<"You are in Asia\n";
        cout << " A \n  1. Afghanistan \n 2. Armenia \n 3. Azerbaijan \n " ;
        cout << " B \n  4. Bahrain \n 5. Bangladesh \n 6. Bhutan \n 7. Brunei \n " ;
        cout << " C \n  8. Cambodia \n 9. China \n 10. Cyprus \n " ;
        cout << " G \n 11. Georgia \n " ;
        cout << " I \n 12. India \n 13. Indonesia \n 14. Iran \n 15. Iraq \n 16. Israel \n " ;
        cout << " J \n 17. Japan \n 18. Jordan \n " ;
        cout << " K \n 19. Kazakhstan \n 20. Kuwait \n 21. Kyrgyzstan \n" ;
        cout << " L \n 22. Laos \n 23. Lebanon \n " ;
        cout << " M \n 24. Malaysia \n 25. Maldives \n 26. Mongolia \n 27. Myanmar (Burma) \n" ;
        cout << " N \n 28. Nepal \n 29. North Korea \n " ;
        cout << " O \n 30. Oman \n "  ;
        cout << " P \n 31. Pakistan \n 32. Palestine \n 33. Philippines \n " ;
        cout << " Q \n 34. Qatar \n R \n 35. Russia \n S \n 36. Saudi Arabia \n 37. Singapore \n 38. South Korea \n 39. Sri Lanka \n 40. Syria \n " ;
        cout << " T \n 41. Taiwan \n42. Tajikistan \n43. Thailand \n44. Timor-Leste\n45. Turkey\n46. Turkmenistan \n " ;
        cout << " U \n 47. United Arab Emirates\n48. Uzbekistan\n " ;
        cout << " V \n 49. Vietnam \n Y \n50. Yemen \n ";
        cin >> l ;
        switch(l)
        {
        //case for country lists of asia
        case 1 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 2 :
        {
            cout << "You are in Armenia" ;
        }
        break ;
        case 3 :
        {
            cout << "You are in Azerbaijan" ;
        }
        break ;
        case 4 :
        {
            cout << "You are in Bahrain" ;
        }
        break ;
        case 5 :
        {
            cout << "You are in Bangladesh" ;
        }
        break ;
        case 6 :
        {
            cout << "You are in Bhutan" ;
        }
        break ;
        case 7 :
        {
            cout << "You are in Brunei" ;
        }
        break ;
        case 8 :
        {
            cout << "You are in Cambodia" ;
        }
        break ;
        case 9 :
        {
            cout << "You are in China" ;
        }
        break ;
        case 10 :
        {
            cout << "You are in Cyprus" ;
        }
        break ;
        case 11 :
        {
            cout << "You are in Georgia" ;
        }
        break ;
        case 12 :
        {
            cout << "You are in India" ;
        }
        break ;
        case 13 :
        {
            cout << "You are in Indonesia" ;
        }
        break ;
        case 14 :
        {
            cout << "You are in Iran" ;
        }
        break ;
        case 15 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 16 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 17 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 18 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 19 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 20 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 21 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 22 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 23 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 24 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 25 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 26 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 27 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 28 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 29 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 30 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 31 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 32 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 33 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 34 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 35 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 36 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 37 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 38 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 39 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 40 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 41 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 42 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 43 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 44 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 45 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 46 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 47 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 48 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 49 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        case 50 :
        {
            cout << "You are in Afghanistan" ;
        }
        break ;
        }//case for country lists of asia
    } // end of asian countries
    break;
    case 2 :
    {
        // case for europe
        cout<<"You are in Europe\n";

    } // end europe
    break;
    case 3 :
    {
        // start africa
        cout<<"You are in Africa\n";

    } // end africa
    break;
    case 4 :
    {
        //start australia
        cout<<"You are in Australia\n";

    } // end australia
    break;
    case 5 :
    {
        // start s. america
        cout<<"You are in South America\n";

    } // end s. america
    break;
    case 6 :
    {
        // start n. america
        cout<<"You are in North America\n";

    } // end n. america
    break;
    } // end of list of CONTINENTS

    cout << " For fast shipment process press 1 \n"   ;
    cin >> option ;
    if (option ==1) //after proceeding
    {
        // from and to information part starts here
        //for TO address
        int phone ;
        string name , address , email;
        //for recipient address
        int rphone ;
        string rname , raddress , rcity , remail ;
        cout << "FROM ADDRESS \n \n" ;//from start
        cout <<"Your first name and last name : " ;
        cin >> name >> name ;
        cout << " Your middle name : " ;
        cin >> name ;
        cout <<" \n Address : " ;
        cin >> address ;
        //cout <<" \n City : " ;
        //cin >> city ;
        cout << " \nMobile number : " ;
        cin >> phone ;
        cout << "\n email : ";
        cin >> email ;//from end
        cout << " \n\nTO ADDRESS \n \n" ;//to start
        cout <<"Recipient first name and last name : " ;
        cin >> rname >> rname ;
        cout << " middle name : " ;
        cin >> rname ;
        cout <<"\naddress : " ;
        cin >> raddress ;
        cout <<"\n City : " ;
        cin >> rcity ;
        cout << "\nMobile number : " ;
        cin >> rphone ;
        cout << "\nemail : ";
        cin >> remail ;//to end
    }//end of IF statement
    else
    {
        cout <<"Error" ;
    }
    cout << "Using ZAS you can send PARCEL outside or inside your country . select your option - \n 1.Inside country \n 2.Outside country " ;
    int inout ;
    cin >> inout ;
    switch(inout)
    {
    case 1 :
    {
        cout << "It will cost you only 100 taka . \n" ;
    }
    case 2 :
    {
        cout << "\n\nSelect your options \n\n" ;
        cout << "ZAS box types  \n" ;
        cout << "_____________________________________________________________________________________________" ;
        cout << "\nSmall : 10-7/8cm x 1-1/2cm x 12-3/8cm\n"<<" Medium : 11-1/2cm x 2-3/8cm x 13-1/4cm\n"<<"  Large : 12-3/8cm x 3cm x 17-1/2cm\n" ;
        cout << "_____________________________________________________________________________________________" ;
        cout << "\nPackage details \n" ;
        cout << "_____________________________________________________________________________________________" ;
        int s_num,s,sx,sy=0 ;
        SmallBox sb ;
        cout<< "Enter the number of small box : " ;
        cin >> s_num ;
        sb.set_s_value(s_num) ;
        cout<< endl;
        cout<< "Enter the values of " << sb.get_s_value() << " box(es) \n" ;
        for ( s=1 ; s<=sb.get_s_value() ; s++ )
        {
            cout << "Enter the weight of box no. "<< s<<endl ;
            cout << endl ;
            cin >> sx ;
            sy+=sx ;
        }
        cout << "Total : " << sy ;

        int m_num,m,mx, my=0 ;
        MediumBox mb ;
        cout<< "\nEnter the number of medium box : \n" ;
        cin >> m_num ;
        mb.set_m_value(m_num) ;
        cout<< endl;
        cout<< "Enter the values of " << mb.get_m_value() << " box(es) \n" ;
        for ( m=1 ; m<=mb.get_m_value() ; m++ )
        {
            cout << "Enter the weight of box no. "<< m ;
            cout << endl ;
            cin >> mx ;
            my+=mx ;
        }
        cout << "Total : " << my ;

        int l_num,l,lx,ly=0;
        LargeBox lb ;
        cout<< "\nEnter the number of large box : \n" ;
        cin >> l_num ;
        lb.set_l_value(l_num) ;
        cout<< endl;
        cout<< "Enter the values of " << lb.get_l_value() << " box(es) \n" ;
        for ( l=1 ; l<=lb.get_l_value() ; l++ )
        {
            cout << "Enter the weight of box no. "<< l ;
            cout << endl ;
            cin >> lx ;
            ly+=lx ;
        }
        cout << "Total : " << ly ;
    }
    }


    return 0 ;
}
