#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define st string
const int N = 10e7+10;
int32_t main()  
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //////////////// BITWISE AND(&) /////////////////////////////

    // both bits must be 1 to get 1

    //ex:
    //0&0=0
    //0&1=0
    //1&0=0
    //1&1=1


    // if we want to know what is the last bit of a number we can get the last bit using and(&);

    // the number of which we want to get the last bit is "n";
    // if we do n&1, we will get the last bit



    //////////////// BITWISE OR(|) /////////////////////////////

    // Atleast one bit have to be 1 to get 1

    //ex:
    //0|0=0
    //0|1=1
    //1|0=1
    //1|1=1



















    ///////////// LEFT SHIFT OPERATOR //////////////////////////
    //a<<b
    //for small number, left shift operator multiply a by 2, b time;


    // 5<<1         -> left shift 5, 1 time
    // 101<<1       -> 00...0101<<1
    //              -> 00...1010 = 10


    // cout<<(5<<1)<<endl;     //10
    // cout<<(5<<2)<<endl;     //20




    //////////// RIGHT SHIFT OPERATOR ////////////////////////////////
    //a>>b
    //for small number, right shift operator divide a by 2, b time;

    // 9>>1         -> right shift 9, 1 time
    // 1001>>1      -> 00...1001>>1
    //              -> 00...0100 = 4


    // cout<<(9>>1)<<endl;     //4
    // cout<<(9>>2)<<endl;     //2





    //////////////////////////// INCREAMENT && DECREAMENT //////////////////////////
    // INCREAMENT -> post and pre increament
    // i++ -> post increament   ,   ++i-> pre increament



    // post increament

    // int i=5;
    // int a= i++;
    // cout<<a; //5
    // cout<<i; //6

    // pre increament

    // int i=5;
    // int a = ++i;
    // cout<<a; //6
    // cout<<i; //6


    // for decreament its exactly same





    ///////////////////////// CONTINUE AND BREAK ///////////////////////////

    // for(int i=0;i<5;++i){
    //     cout<<"hi"<<'\n';
    //     continue;           // if we use break this will end here. only one hi would be print;
    //     cout<<"hello"<<'\n';//for continue statement this line is unreachable;
    // }














    //////////////////////// LEETCODE->NUMBER OF 1 BIT /////////////////////////////////////////

    // int n; cin>>n;
    // int count =0;
    // while(n){
    //     if(n&1){// it check if the last digit of n in binary form is 1 or not. if 1 then condition satisfies;
    //         count++;
    //     }
    //     n=n>>1;
    // }   
    // cout<<count;







    ////////////////////////// DECIMAL TO BINARY ////////////////////////////////////////////

    //process-1:

    // int n; cin>>n;
    // float ans=0;
    // int i=0;
    // while(n){
    //     int bit = (n&1);                  // will get the last bit  
    //     ans = ( bit *  pow(10,i) ) + ans;
    //     n = (n>>1);                       // dividing the number by 2
    //     i++;        
    // }   
    // cout<<ans;



    //process-2:

    // int n; cin>>n;
    // string s; 
    // while(n){
    //     int lastDigit = (n&1);
    //     s.push_back(lastDigit+48);
    //     n = (n>>1);
    //     // n>>=1;                        // we can also use this;
    // }
    reverse(s.begin(), s.end());
    cout<<s;










    ////////////////////////// BINARY TO DECIMAL ////////////////////////////////////////////



    // int n; cin>>n;
    // int i=0, ans =0;
    // while(n){
    //     int digit = n%10;
    //     ans += digit*pow(2, i);
    //     ++i;
    //     n /=10;;
    // }
    // cout<<ans;


    ////////////////////////// LEETCODE - REVERSE INTEGER ////////////////////////////////////////////


    // int n ;cin>>n;

    // int ans=0;

    // while(n){
    //     int digit =n%10;
    //     ans = (ans*10) +digit;
    //     if(digit>(INT_MAX)/2) return 0;
    //     n/=10;
    // }
    // cout<<ans;









    ////////////////////////// LEETCODE - COMPLEMENT OF BASE 10 INTEGER ////////////////////////////////////////////

    // int n; cin>>n;
    // if(n == 0) cout<<1;
    // else {
    //     int m=n;
    //     int mask = 0;
    //     while(m){
    //         mask = (mask<<1) | 1;
    //         m = (m>>1);
    //     }

    //     int ans = (~n) & mask;
    //     cout<<ans;
    // }



    //explaination of code: 
    // for 5->
                //mask -> 0000.....000
                //        0000.....001   
                //        0000.....011   
                //        0000.....111  

                //~n  ->  ~(0000......101)
                //         11111......010

                //~n & mask -> 11111......010)&(00000......111)
                //             00000.....010 = 2




    ////////////////////////// LEETCODE - COMPLEMENT OF BASE 10 INTEGER ////////////////////////////////////////////


    // int n; cin>>n;
    // int c=0;
    // int m=abs(n);
    // while(m){
    //     int lastDigit = m&1;
    //     if(lastDigit == 1) c++;
    //     m = (m>>1);
    // }
    // if(c == 1) cout<<"YES";
    // else cout<<"NO";



}