#include <iostream>
#include<cstdio>
long len(long);              //finding length
int main()
{
    /* Ques: What is the first term in fibonacci series to contain 1000 digits? */
    
    int ctr=2;
    unsigned long first, second, third, n;
    first=1;
    second=1;
    std::cout<<"\t **Project EULER Question 25**\n\n";
    for(int i=2;;++i)
    {
        third=first+second;
        //  cout<<" "<<third;
        int x=len(third);
        //  cout<<" Length: "<<x;
        //  cout<<"\n";

        first=second;
        second=third;
        ctr++;
            if(x>10)        // for small values, program works properly
        {
            std::cout<< " THE ANSWER: "<< ctr;
            system("pause");
            break;
        }

    }
}

long len(long num)
{


    int ctr=1;

    while(num!=0)
    {
        num=num/10;
                if(num!=0)
            {
                ctr++;
            }
    }

    return(ctr);
}