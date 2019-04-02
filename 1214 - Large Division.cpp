#include <bits/stdc++.h>
#include<string.h>
#define ll long long int
#define max_num 9,223,372,036,854,775,807
using namespace std;


int main()
{
    ll T, i=1;


    scanf("%lld", &T);

    while(T--)
    {
        ll a,   temp,  num = 0, start, rem, k=1;
        string str;
        char x;

        cin >> str;

        scanf("%c", &x);

        scanf("%lld", &a);


        //length_str = strlen(str.c_str());


       if(str[0] == '-')
       {
          start = 1;
       }

        else
            start = 0;

        for(ll j = start ; str[j] != '\0'; j++ )
        {
            rem = ((num*10) + (str[j] - '0'));

            num =rem % a;





        }


         if(num == 0)
         {
            printf("Case %lld: divisible\n", i++);

         }

         else{
            printf("Case %lld: not divisible\n", i++);
         }


    }




    return 0;
}
