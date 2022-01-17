#include <stdio.h>
#include <math.h>

void red() 
{
  printf("\033[1;31m");
}

void yellow() 
{
  printf("\033[1;33m");
}

void cyan() 
{
  printf("\033[1;36m");
}


void green() 
{
  printf("\033[1;32m");
}

void reset() 
{
  printf("\033[1;37m");
}

float mth(float m)
{
    float hr;
    hr=m/60;
    return hr;
}

float mts(float m)
{
    float sec;
    sec=60*m;
    return sec;
}

float mtd(float m)
{
    float day;
    day=m/1440;
    return day;
}

float htm(float h)
{
    float min;
    min=h*60;
    return min;
}

float htd(float h)
{
    float day;
    day=h/24;
    return day;
}

float hts(float h)
{
    float sec;
    sec=3600*h;
    return sec;
}

float dth(float d)
{
    float hr;
    hr=24*d;
    return hr;
}

float dts(float d)
{
    float sec;
    sec=86400*d;
    return sec;
}

float dtm(float d)
{
    float min;
    min=1440*d;
    return min;
}

float std(float s)
{
    float day;
    day=s/86400;
    return day;
}

float stm(float s)
{
    float min;
    min=s/60;
    return min;
}

float sth(float s)
{
    float hr;
    hr=s/3600;
    return hr;
}

float ctm(float c)
{
    float met;
    met=c/100;
    return met;
}

float ctk(float c)
{
    float kilo;
    kilo=c/100000;
    return kilo;
}

float cti(float c)
{
    float inch;
    inch=c/2.54;
    return inch;
}

float mtc(float m)
{
    float centi;
    centi=100*m;
    return centi;
}

float mtk(float m)
{
    float kilo;
    kilo=m/1000;
    return kilo;
}

float mti(float m)
{
    float inch;
    inch=m/0.0254;
    return inch;
}

float ktc(float k)
{
    float centi;
    centi=100000*k;
    return centi;
}

float ktm(float k)
{
    float met;
    met=1000*k;
    return met;
}

float kti(float k)
{
    float inch;
    inch=39370*k;
    return inch;
}

float itm(float i)
{
    float met;
    met=i/39.37;
    return met;
}

float itc(float i)
{
    float centi;
    centi=2.54*i;
    return centi;
}

float itk(float i)
{
    float kilo;
    kilo=i/39370;
    return kilo;
}

float ktg(float k)
{
    float gm;
    gm=1000*k;
    return gm;
}

float ktp(float k)
{
    float po;
    po=2.2046*k;
    return po;
}

float kto(float k)
{
    float ou;
    ou=35.274*k;
    return ou;
}

float gtk(float g)
{
    float kilo;
    kilo=g/1000;
    return kilo;
}

float gtp(float g)
{
    float po;
    po=0.00220462*g;
    return po;
}

float gto(float g)
{
    float ou;
    ou=0.035274*g;
    return ou;
}

float ptk(float p)
{
    float kilo;
    kilo=0.453592*p;
    return kilo;
}

float ptg(float p)
{
    float gm;
    gm=453.592*p;
    return gm;
}

float pto(float p)
{
    float ou;
    ou=16*p;
    return ou;
}

float otg(float o)
{
    float gm;
    gm=28.3495*o;
    return gm;
}

float otk(float o)
{
    float kilo;
    kilo=0.0283495*o;
    return kilo;
}

float otp(float o)
{
    float po;
    po=0.0625*o;
    return po;
}

float cctmc(float c)
{
    float met;
    met=c*0.000001;
    return met;
}

float ctl(float c)
{
    float lit;
    lit=c*0.001;
    return lit;
}

float ctg(float c)
{
    float gall;
    gall=0.000264*c;
    return gall;
}

float mctcc(float m)
{
    float centi;
    centi=1000000*m;
    return centi;
}

float mtl(float m)
{
    float lit ;
    lit=1000*m;
    return lit ;
}

float mtg(float m)
{
    float gall;
    gall=264.1721*m;
    return gall;
}

float ltc(float l)
{
    float centi;
    centi=1000*l;
    return centi;
}

float ltm(float l)
{
    float met;
    met=0.001*l;
    return met;
}

float ltg(float l)
{
    float gall;
    gall=0.2641721*l;
    return gall;
}

float gtc(float g)
{
    float centi;
    centi=3785.412*g;
    return centi;
}

float gtm(float g)
{
    float met;
    met=0.003785*g;
    return met;
}

float gtl(float g)
{
    float lit;
    lit=3.785412*g;
    return lit;
}

float bta(float b)
{
    float atm;
    atm=0.986923*b;
    return atm;
}

float btp(float b)
{
    float pas;
    pas=100000*b;
    return pas;
}

float btt(float b)
{
    float torr;
    torr=b*750.062;
    return torr;
}
 
float atb(float a)
{ 
float bar; 
bar=1.01325*a; 
return bar; 
} 

float atp(float a)
{ 
float pas; 
pas=101325*a; 
return pas; 
} 

float att(float a)
{ 
float torr; 
torr=760*a; 
return torr;
 }

float pta(float p)
{
    float atm;
    atm=p/101325;
    return atm;
}

float ptb(float p)
{
    float bar;
    bar=p/100000;
    return bar;
}

float ptt(float p)
{
    float torr;
    torr=0.00750062*p;
    return torr;
}

float tta(float t)
{
    float atm;
    atm=0.00131579*t;
    return atm;
}

float ttp(float t)
{
    float pas;
    pas=133.322*t;
    return pas;
}

float ttb(float t)
{
    float bar;
    bar=0.00133322*t;
    return bar;
}

float sctsm(float c)
{
    float sqm;
    sqm=0.0001*c;
    return sqm;
}

float sctsk(float c)
{
    float sqkm;
    sqkm=0.000000001*c;
    return sqkm;
}

float scth(float c)
{
    float hectare;
    hectare=0.00000001*c;
    return hectare;
}

float smtsc(float m)
{
    float sqcm;
    sqcm=10000*m;
    return sqcm;
}

float smtsk(float m)
{
    float sqkm;
    sqkm=0.000001*m;
    return sqkm;
}

float smth(float m)
{
    float hectare;
    hectare=0.0001*m;
    return hectare;
}

float sktsc(float k)
{
    float sqcm;
    sqcm=1000000000*k;
    return sqcm;
}

float sktsm(float k)
{
    float sqm;
    sqm=1000000*k;
    return sqm;
}

float skth(float k)
{
    float hectare;
    hectare=100*k;
    return hectare;
}

float htsc(float h)
{
    float sqcm;
    sqcm=100000000*h;
    return sqcm;
}

float htsm(float h)
{
    float sqm;
    sqm=10000*h;
    return sqm;
}

float htsk(float h)
{
    float sqkm;
    sqkm=0.01*h;
    return sqkm;
}

float wth(float w)
{
    float hp;
    hp=w/745.7;
    return hp;
}

float htw(float hp)
{
    float w;
    w=hp*745.7;
    return w;
}

float jtc(float j)
{
    float c;
    c = j / 4.184;
    return c;
}

float ctj(float c)
{
    float j;
    j = c * 4.184;
    return j;
}

float ctf(float c)
{
    float f;
    f = (c*1.8) + 32;
    return f;
}

float ftc(float f)
{
    float c;
    c = (f-32)/1.8;
    return c;
}

float dtr(float d)
{
    float rupee;
    rupee=72.74*d;
    return rupee;
}

float dte(float d)
{
    float  euro;
    euro=0.83*d;
    return euro;
}

float dtp(float d)
{
    float pound;
    pound=0.72*d;
    return pound;
}

float rtd(float r)
{
    float dollar;
    dollar=0.014*r;
    return dollar;
}

float rte(float r)
{
    float euro;
    euro=0.011*r;
    return euro;
}

float rtp(float r)
{
    float pound;
    pound=0.098*r;
    return pound;
}

float ptr(float p)
{
    float rupee;
    rupee=101.74*rupee;
    return rupee;
}

float ptd(float p)
{
    float dollar;
    dollar=1.40*p;
    return dollar;
}

float pte(float p)
{
    float euro;
    euro=1.16*p;
    return euro;
}

float etr(float e)
{
    float rupee;
    rupee=87.67*e;
    return rupee;
}

float etd(float e)
{
    float dollar;
    dollar=1.21*e;
    return dollar;
}

float etp(float e)
{
    float pound;
    pound=0.86*e;
    return pound;
}

float nroot(float num, int power)
{
    float ans;
    if(num<0 && power%2!=0)
    {
        num = num*(-1);
        ans = pow(num,(1.0/power));
        printf("%d root of %f is : -%f",power,num,ans);
    }
    else if(num<0 && power%2==0)
    {
        printf("No Real Root.");
    }
    else
    {
        ans = pow(num,(1.0/power));
        printf("%d root of %f is : %f",power,num,ans);
    }
}

float alog(float num)
{
    float ans;
    ans = pow(2.718281828,num);
    return ans;
}

float alog10(float num)
{
    float ans;
    ans = pow(10,num);
    return ans;
}

int fact(int num)
{
    int ans = 1;
    if(num>=0)
    {
        if(num==0)
        {
            printf("Factorial of 0 is 1.");
        }
        else
        {
            for(int i=1; i<=num; i++)
            {
                ans = ans * i;
            }
            printf("Factorial of %d is %d.",num,ans);
        }
    }
    else
    {
        printf("Fatorial of Negative Number can't be calculated.");
    }
    return 0;
}

int fct(int num)
{
    int ans = 1;
    for(int i=1; i<=num; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int npr(int n,int r)
{
    int ans;
    
    if(n<=0 || r<=0 || r>n)
    {
        if(r==0)
        {
            printf("%dP0 = 1",n);
        }
        if(r==n)
        {
            printf("%dP%d = %d",n,n,n);
        }
        else
        {
            printf("Please Enter the proper data.");
        }
    }
    else
    {
        ans = fct(n)/fct(n-r);
        printf("%dP%d = %d.",n,r,ans);
    }
    return 0;
}

int ncr(int n,int r)
{
    int ans;
    
    if(n<=0 || r<=0 || r>n)
    {
        if(r==0 || r==n)
        {
            printf("%dC0 = 1",n);
        }
        else
        {
            printf("Please Enter the proper data.");
        }
    }
    else
    {
        ans = fct(n)/(fct(r)*fct(n-r));
        printf("%dC%d = %d.",n,r,ans);
    }
    return 0;
}

long long btd(long long int bin)
{
    long long dec = 0, i = 0, rem;
    while (bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

long long dtb(int dec)
{
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (dec != 0)
    {
        rem = dec % 2;
        dec /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

float GST(float amount,int tax)
{
    float SGST,CGST,TOTAL_TAX;
    SGST = (0.01 * amount) * (tax / 2);
    CGST = (0.01 * amount) * (tax / 2);
    TOTAL_TAX = SGST + CGST;
    printf("\nSGST = %f /-", SGST);
    printf("\nCGST = %f /-", CGST);
    printf("\nTOTAL TAX = %f /-", TOTAL_TAX);
    return 0;
}

void age(int y, int m, int d, int yp, int mp, int dp)
{
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(y>yp)
    {
        red();
        printf("Birth Year Can't be greater than Present Year.");
    }
    if(d>31 || dp>31)
    {
        red();
        printf("Date Can't be greater than 31.");
    }
    if(m>12 || mp>12)
    {
        red();
        printf("Month Can't be greater than 12.");
    }
    if((d>28 && m==02) || (dp>28 && mp==2) && (y%4!=0 || yp%4!=0))
    {
        red();
        printf("Invalid Date.");
    }
    if(d>31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
    {
        red();
        printf("Invalid Birth Date.");
    }
    if(dp>31 && (mp==1 || mp==3 || mp==5 || mp==7 || mp==8 || mp==10 || mp==12))
    {
        red();
        printf("Invalid Present Date.");
    }
    if(d>30 && (m==4 || m==6 || m==9 || m==11))
    {
        red();
        printf("Invalid Birth Date.");
    }
    if(dp>30 && (mp==4 || mp==6 || mp==9 || mp==11))
    {
        red();
        printf("Invalid Present Date.");
    }
    else
    {
        if(d>dp)
        {
            dp = dp + month[m - 1];
            m = m - 1;
        }
    
        if(m > mp)
        {
            yp = yp - 1;
            mp = mp + 12;
        }
    
        int cal_date = dp - d;
        int cal_month = mp - m;
        int cal_year = yp - y;
    
        printf("Your age is : %d years, %d months, %d days.", cal_year, cal_month, cal_date);
    }
}

void htb(char hex[100])
{
    long long int i = 0;
 
    while (hex[i])
    {
        switch (hex[i])
        {
        
        case '0':
        printf("0000");
        break;
        
        case '1':
        printf("0001");
        break;
        
        case '2':
        printf("0010");
        break;
        
        case '3':
        printf("0011");
        break;
        
        case '4':
        printf("0100");
        break;
        
        case '5':
        printf("0101");
        break;
        
        case '6':
        printf("0110");
        break;
        
        case '7':
        printf("0111");
        break;
        
        case '8':
        printf("1000");
        break;
        
        case '9':
        printf("1001");
        break;
        
        case 'A':
        case 'a':
        printf("1010");
        break;
        
        case 'B':
        case 'b':
        printf("1011");
        break;
        
        case 'C':
        case 'c':
        printf("1100");
        break;
        
        case 'D':
        case 'd':
        printf("1101");
        break;
        
        case 'E':
        case 'e':
        printf("1110");
        break;
        
        case 'F':
        case 'f':
        printf("1111");
        break;
        
        default:
        printf("\nInvalid hexadecimal digit %c",hex[i]);
        }
        i++;
    }
}

int main()
{
    cyan();
    printf("WELCOME TO THE CALCULATOR.\n");
    printf("CHOOSE THE CALCULATOR YOU WISH TO USE\n\n");
    
    int choice;
    
    yellow();
    printf("[1] Standard Algebraic Calculator\n");
    printf("[2] Scientific Calculator\n");
    printf("[3] Trignometric Calculator\n");
    printf("[4] Conversions\n");
    printf("[5] Miscellaneous Functions\n");
    
    green();
    printf("\nEnter Your Choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        
        red();
        printf("\nChoose the Operation You wish to perform\n\n");
        int choice1;
        
        yellow();
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Square of any Number\n");
        printf("[6] Square root of any Number\n");
        printf("[7] Cube of any Number\n");
        printf("[8] Cube root of any Number\n");
        
        green();
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice1);
        
        reset();
        switch(choice1)
        {
            float ans,x,y;
            float a[1000];
            int n;
            
            case 1:
            
            n=0;
            printf("Enter the Numbers You wish to Add.Enter '0' to stop and get results'\n");
            
            for(int i=0 ; ;)
            {
                scanf("%f",&a[i]);
                
                if(a[i]==0)
                {
                    break;
                }
                
                i++;
                n++;
            }
            for( int j=0 ; j<n ; j++)
            {
                ans = ans + a[j];
            }
            printf("The Sum is : %f",ans);
            break;
            
            case 2:
            
            printf("Enter Two 'a' and 'b' to find 'a-b' : ");
            scanf("%f",&x); scanf("%f",&y);
            ans = x - y;
            printf("Difference is : %f",ans);
            break;
            
            case 3:
            
            n=0;
            ans=1;
            printf("Enter the Numbers You wish to Multiply.Enter '1' to stop and get results'\n");
            
            for(int i=0 ; ;)
            {
                scanf("%f",&a[i]);
                
                if(a[i]==1)
                {
                    break;
                }
                
                i++;
                n++;
            }
            for( int j=0 ; j<n ; j++)
            {
                ans = ans * a[j];
            }
            printf("The Product is : %f",ans);
            break;
            
            case 4:
            
            printf("Enter Two 'a' and 'b' to find 'a/b' : ");
            scanf("%f",&x); scanf("%f",&y);
            ans = x/y;
            printf("Answer is : %f",ans);
            break;
            
            case 5:
            
            printf("Enter a Number to find its Square : ");
            scanf("%f",&x);
            ans = x*x;
            printf("Square of %f is %f",x,ans);
            break;
            
            case 6:
            
            printf("Enter a Number to find its Square root : ");
            scanf("%f",&x);
            if(x>=0)
            {
                ans = sqrt(x);
                printf("Square root of %f is %f",x,ans);
            }
            else
            {
                red();
                printf("Please Enter a Positive Number.\n");
            }
            
            break;
            
            case 7:
            
            printf("Enter a Number to find its Cube : ");
            scanf("%f",&x);
            ans = x*x*x;
            printf("Cube of %f is %f",x,ans);
            break;
            
            case 8:
            
            printf("Enter a Number to find its Cube root : ");
            scanf("%f",&x);
            ans = cbrt(x);
            printf("Cube root of %f is %f",x,ans);
            break;
            
            default:
            red();
            printf("Please Choose a Valid Operation");
            break;
        }
        break;
        
        case 2:
        
        red();
        printf("\nChoose the Operation You wish to perform\n\n");
        int choice2;
        
        yellow();
        printf("[1] Natural Logarithm(base e) of any Number.\n");
        printf("[2] Common Logarithm(base 10) of any Number.\n");
        printf("[3] Natural Antilogarithm(base e) of any Number.\n");
        printf("[4] Common Antilogarithm(base 10) of any Number.\n");
        printf("[5] nth Power of any Number.\n");
        printf("[6] nth root of any Number.\n");
        printf("[7] nth power of 'e'.\n");
        printf("[8] Factorial of any Number.\n");
        printf("[9] Permutations.\n");
        printf("[10] Combinations.\n");
        printf("[11] Greatest integer part function of any Number.\n");
        printf("[12] Fractional part function of any Number.\n");
        
        green();
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice2);
        
        reset();
        switch(choice2)
        {
            float x,n,ans;
            int a,b,ans2;
            
            case 1:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = log(x);
            printf("logₑ(%f) = %f",x,ans);
            break;
            
            case 2:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = log10(x);
            printf("log₁₀(%f) = %f",x,ans);
            break;
            
            case 3:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = alog(x);
            printf("alogₑ(%f) = %f",x,ans);
            break;
            
            case 4:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = alog10(x);
            printf("alog₁₀(%f) = %f",x,ans);
            break;
            
            case 5:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            printf("Enter the Power : ");
            scanf("%f",&n);
            ans = pow(x,n);
            printf("%f raised to %f is %f",x,n,ans);
            break;
            
            case 6:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            printf("Enter 'n' for nth root  : ");
            scanf("%d",&a);
            nroot(x,a);
            break;
            
            case 7:
            
            printf("Enter the Power of 'e' : ");
            scanf("%f",&n);
            ans = pow(2.71828,n);
            printf("e raised to %f is %f",n,ans);
            break;
            
            case 8:
            
            printf("Enter a Number : ");
            scanf("%d",&a);
            ans2 = fact(a);
            break;
            
            case 9:
            
            printf("Enter 'n' and 'r' to find nPr : ");
            scanf("%d",&a); scanf("%d",&b);
            npr(a,b);
            break;
            
            case 10:
            
            printf("Enter 'n' and 'r' to find nCr : ");
            scanf("%d",&a); scanf("%d",&b);
            ncr(a,b);
            break;
            
            case 11:
            
            printf("Enter Number : ");
            scanf("%f",&x);
            ans2 = floor(x);
            printf("Greatest Integer Value is : %d",ans2);
            break;
            
            case 12:
            
            printf("Enter Number : ");
            scanf("%f",&x);
            ans = x - floor(x);
            printf("Fractional Part is : %f",ans);
            break;
            
            default:
            red();
            printf("Please Choose a Valid Operation");
            break;
            
        }
        break;
        
        case 3:
        
        red();
        printf("\nChoose the Trignometric Function for any angle in Radians\n\n");
        int choice3;
        
        yellow();
        printf("[1] sin\n");
        printf("[2] cos\n");
        printf("[3] tan\n");
        printf("[4] cot\n");
        printf("[5] sec\n");
        printf("[6] cosec\n");
        printf("[7] asin\n");
        printf("[8] acos\n");
        printf("[9] atan\n");
        printf("[10] acot\n");
        printf("[11] asec\n");
        printf("[12] acosec\n");
        
        green();
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice3);
        
        reset();
        switch(choice3)
        {
            float x,ans;
            
            case 1:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = sin(x);
            printf("sin(%f) = %f",x,ans);
            break;
            
            case 2:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = cos(x);
            printf("cos(%f) = %f",x,ans);
            break;
            
            case 3:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = sin(x)/cos(x);
            printf("tan(%f) = %f",x,ans);
            break;
            
            case 4:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = cos(x)/sin(x);
            printf("cot(%f) = %f",x,ans);
            break;
            
            case 5:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = 1/cos(x);
            printf("sec(%f) = %f",x,ans);
            break;
            
            case 6:
            
            printf("Enter angle in radians : ");
            scanf("%f",&x);
            ans = 1/sin(x);
            printf("cosec(%f) = %f",x,ans);
            break;
            
            case 7:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = asin(x);
            printf("asin(%f) = %f",x,ans);
            break;
            
            case 8:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = acos(x);
            printf("acos(%f) = %f",x,ans);
            break;
            
            case 9:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = atan(x);
            printf("atan(%f) = %f",x,ans);
            break;
            
            case 10:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = atan(1/x);
            printf("acot(%f) = %f",x,ans);
            break;
            
            case 11:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = acos(1/x);
            printf("asec(%f) = %f",x,ans);
            break;
            
            case 12:
            
            printf("Enter the Number : ");
            scanf("%f",&x);
            ans = asin(1/x);
            printf("acosec(%f) = %f",x,ans);
            break;
            
            default:
            red();
            printf("Please Choose a Valid Function.");
            break;
            
        }
        break;
        
        case 4:
        
        red();
        printf("\nChoose the Conversions you wish to Perform\n\n");
        int choice4;
        
        yellow();
        printf("[1] Length Conversions\n");
        printf("[2] Time Conversions\n");
        printf("[3] Mass Conversions\n");
        printf("[4] Area Conversions\n");
        printf("[5] Volume Conversions\n");
        printf("[6] Pressure Conversions\n");
        printf("[7] Energy Conversions\n");
        printf("[8] Power Conversions\n");
        printf("[9] Temperature Conversions\n");
        printf("[10] Currency Conversions\n");
        printf("[11] Binary to Hexadecimal Conversion\n");
        printf("[12] Hexadecimal to Binary Conversion\n");
        printf("[13] Binary to Decimal Conversion\n");
        printf("[14] Decimal to Binary Conversion\n");
        printf("[15] Decimal to Hexadecimal Conversion\n");
        printf("[16] Hexadecimal to Decimal Conversion\n");
        
        green();
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice4);
        
        switch(choice4)
        {
            case 1:
            
            red();
            printf("\nChoose Desired Length Conversion\n\n");
            int choice4_1;
            
            yellow();
            printf("[1] Centimeters to Meters\n");
            printf("[2] Centimeters to Kilometers\n");
            printf("[3] Centimeters to Inches\n");
            printf("[4] Meters to Centimeters\n");
            printf("[5] Meters to Kilometers\n");
            printf("[6] Meters to Inches\n");
            printf("[7] Kilometers to Centimeters\n");
            printf("[8] Kilometers to Meters\n");
            printf("[9] Kilometers to Inches\n");
            printf("[10] Inches to Meters\n");
            printf("[11] Inches to Centimeters\n");
            printf("[12] Inches to Kilometers\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_1);
            
            reset();
            switch(choice4_1)
            {
                float cm,in,m,km;
                
                case 1:
                
                printf("Enter Centimeters : ");
                scanf("%f",&cm);
                m = ctm(cm);
                printf("Metres are : %f",m);
                break;
                
                case 2:
                
                printf("Enter Centimeters : ");
                scanf("%f",&cm);
                km = ctk(cm);
                printf("Kilometers are : %f",km);
                break;
                
                case 3:
                
                printf("Enter Centimeters : ");
                scanf("%f",&cm);
                in = cti(cm);
                printf("Inches are : %f",in);
                break;
                
                case 4:
                
                printf("Enter Meters : ");
                scanf("%f",&m);
                cm = mtc(m);
                printf("Centimeters are : %f",cm);
                break;
                
                case 5:
                
                printf("Enter Meters : ");
                scanf("%f",&m);
                km = mtk(m);
                printf("Kilometers are : %f",km);
                break;
                
                case 6:
                
                printf("Enter Meters : ");
                scanf("%f",&m);
                in = mti(m);
                printf("Inches are : %f",in);
                break;
                
                case 7:
                
                printf("Enter Kilometers : ");
                scanf("%f",&km);
                cm = ktc(km);
                printf("Centimeters are : %f",cm);
                break;
                
                case 8:
                
                printf("Enter Kilometers : ");
                scanf("%f",&km);
                m = ktm(km);
                printf("Meters are : %f",m);
                break;
                
                case 9:
                
                printf("Enter Kilometers : ");
                scanf("%f",&km);
                in = kti(km);
                printf("Inches are : %f",in);
                break;
                
                case 10:
                
                printf("Enter Inches : ");
                scanf("%f",&in);
                m = itm(in);
                printf("Meters are : %f",m);
                break;
                
                case 11:
                
                printf("Enter Inches : ");
                scanf("%f",&in);
                cm = itc(in);
                printf("Centimeters are : %f",cm);
                break;
                
                case 12:
                
                printf("Enter Inches : ");
                scanf("%f",&in);
                km = itk(in);
                printf("Kilometers are : %f",m);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 2:
            
            red();
            printf("\nChoose Desired Time Conversion\n\n");
            int choice4_2;
            
            yellow();
            printf("[1] Minutes to Hours\n");
            printf("[2] Minutes to Seconds\n");
            printf("[3] Minutes to Days\n");
            printf("[4] Hours to Minutes\n");
            printf("[5] Hours to Days\n");
            printf("[6] Hours to Seconds\n");
            printf("[7] Days to Hours\n");
            printf("[8] Days to Seconds\n");
            printf("[9] Days to Minutes\n");
            printf("[10] Seconds to Days\n");
            printf("[11] Seconds to Minutes\n");
            printf("[12] Seconds to Hours\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_2);
            
            reset();
            switch(choice4_2)
            {
                float min,hr,sec,days;
                
                case 1:
                
                printf("Enter Minutes : ");
                scanf("%f",&min);
                hr = mth(min);
                printf("Hours are : %f",hr);
                break;
                
                case 2:
                
                printf("Enter Minutes : ");
                scanf("%f",&min);
                sec = mts(min);
                printf("Seconds are : %f",sec);
                break;
                
                case 3:
                
                printf("Enter Minutes : ");
                scanf("%f",&min);
                days = mtd(min);
                printf("Days are : %f",days);
                break;
                
                case 4:
                
                printf("Enter Hours : ");
                scanf("%f",&hr);
                min = htm(hr);
                printf("Minutes are : %f",min);
                break;
                
                case 5:
                
                printf("Enter Hours : ");
                scanf("%f",&hr);
                days = htd(hr);
                printf("Days are : %f",days);
                break;
                
                case 6:
                
                printf("Enter Hours : ");
                scanf("%f",&hr);
                sec = hts(hr);
                printf("Seconds are : %f",sec);
                break;
                
                case 7:
                
                printf("Enter Days : ");
                scanf("%f",&days);
                hr = dth(days);
                printf("Hours are : %f",hr);
                break;
                
                case 8:
                
                printf("Enter Days : ");
                scanf("%f",&days);
                sec = dts(days);
                printf("Seconds are : %f",sec);
                break;
                
                case 9:
                
                printf("Enter Days : ");
                scanf("%f",&days);
                min = dtm(days);
                printf("Minutes are : %f",min);
                break;
                
                case 10:
                
                printf("Enter Seconds : ");
                scanf("%f",&sec);
                days = std(sec);
                printf("Days are : %f",days);
                break;
                
                case 11:
                
                printf("Enter Seconds : ");
                scanf("%f",&sec);
                min = stm(sec);
                printf("Minutes are : %f",min);
                break;
                
                case 12:
                
                printf("Enter Seconds : ");
                scanf("%f",&sec);
                hr = sth(sec);
                printf("Hours are : %f",hr);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 3:
            
            red();
            printf("\nChoose Desired Mass Conversion.\n\n");
            int choice4_3;
            
            yellow();
            printf("[1] Kilograms to Grams\n");
            printf("[2] Kilograms to Pounds\n");
            printf("[3] Kilograms to Ounces\n");
            printf("[4] Grams to Kilograms\n");
            printf("[5] Grams to Pounds\n");
            printf("[6] Grams to Ounces\n");
            printf("[7] Pounds to Kilograms\n");
            printf("[8] Pounds to Grams\n");
            printf("[9] Pounds to Ounces\n");
            printf("[10] Ounces to Grams\n");
            printf("[11] Ounces to Kilograms\n");
            printf("[12] Ounces to Pounds\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_3);
            
            reset();
            switch(choice4_3)
            {
                float g,kg,p,o;
                
                case 1:
                
                printf("Enter Kilograms : ");
                scanf("%f",&kg);
                g = ktg(kg);
                printf("Grams are : %f",g);
                break;
                
                case 2:
                
                printf("Enter Kilograms : ");
                scanf("%f",&kg);
                p = ktp(kg);
                printf("Pounds are : %f",p);
                break;
                
                case 3:
                
                printf("Enter Kilograms : ");
                scanf("%f",&kg);
                o = kto(kg);
                printf("Ounces are : %f",o);
                break;
                
                case 4:
                
                printf("Enter Grams : ");
                scanf("%f",&g);
                kg = gtk(g);
                printf("Kilograms are : %f",kg);
                break;
                
                case 5:
                
                printf("Enter Grams : ");
                scanf("%f",&g);
                p = gtp(g);
                printf("Pounds are : %f",p);
                break;
                
                case 6:
                
                printf("Enter Grams : ");
                scanf("%f",&g);
                o = gto(g);
                printf("Ounces are : %f",o);
                break;
                
                case 7:
                
                printf("Enter Pounds : ");
                scanf("%f",&p);
                kg = ptk(p);
                printf("Kilograms are : %f",kg);
                break;
                
                case 8:
                
                printf("Enter Pounds : ");
                scanf("%f",&p);
                g = ptg(p);
                printf("Grams are : %f",g);
                break;
                
                case 9:
                
                printf("Enter Pounds : ");
                scanf("%f",&p);
                o = pto(p);
                printf("Ounces are : %f",o);
                break;
                
                case 10:
                
                printf("Enter Ounces : ");
                scanf("%f",&o);
                g = otg(o);
                printf("Grams are : %f",g);
                break;
                
                case 11:
                
                printf("Enter Ounces : ");
                scanf("%f",&o);
                kg = otk(o);
                printf("Kilograms are : %f",kg);
                break;
                
                case 12:
                
                printf("Enter Ounces : ");
                scanf("%f",&o);
                p = otp(o);
                printf("Pounds are : %f",p);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 4:
            
            red();
            printf("\nChoose Desired Area Conversion.\n\n");
            int choice4_4;
            
            yellow();
            printf("[1] cm² to m²\n");
            printf("[2] cm² to km²\n");
            printf("[3] cm² to Hectares\n");
            printf("[4] m² to cm²\n");
            printf("[5] m² to km²\n");
            printf("[6] m² to Hectares\n");
            printf("[7] km² to cm²\n");
            printf("[8] km² to m²\n");
            printf("[9] km² to Hectares\n");
            printf("[10] Hectares to cm²\n");
            printf("[11] Hectares to m²\n");
            printf("[12] Hectares to km²\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_4);
            
            reset();
            switch(choice4_4)
            {
                float sc,sm,sk,hec;
                
                case 1:
                
                printf("Enter cm² : ");
                scanf("%f",&sc);
                sm = sctsm(sc);
                printf("m² is : %f",sm);
                break;
                
                case 2:
                
                printf("Enter cm² : ");
                scanf("%f",&sc);
                sk = sctsk(sc);
                printf("km² is : %f",sk);
                break;
                
                case 3:
                
                printf("Enter cm² : ");
                scanf("%f",&sc);
                hec = scth(sc);
                printf("Hectares are : %f",hec);
                break;
                
                case 4:
                
                printf("Enter m² : ");
                scanf("%f",&sm);
                sc = smtsc(sm);
                printf("cm² is : %f",sc);
                break;
                
                case 5:
                
                printf("Enter m² : ");
                scanf("%f",&sm);
                sk = smtsk(sm);
                printf("km² is : %f",sk);
                break;
                
                case 6:
                
                printf("Enter m² : ");
                scanf("%f",&sm);
                hec = smth(sm);
                printf("Hectares are : %f",hec);
                break;
                
                case 7:
                
                printf("Enter km² : ");
                scanf("%f",&sk);
                sc = sktsc(sk);
                printf("cm² is : %f",sc);
                break;
                
                case 8:
                
                printf("Enter km² : ");
                scanf("%f",&sk);
                sm = sktsm(sk);
                printf("m² is : %f",sm);
                break;
                
                case 9:
                
                printf("Enter km² : ");
                scanf("%f",&sk);
                hec = skth(sk);
                printf("Hectares are : %f",hec);
                break;
                
                case 10:
                
                printf("Enter Hectares : ");
                scanf("%f",&hec);
                sc = htsc(hec);
                printf("cm² is : %f",sc);
                break;
                
                case 11:
                
                printf("Enter Hectares : ");
                scanf("%f",&hec);
                sm = htsm(hec);
                printf("m² is : %f",sm);
                break;
                
                case 12:
                
                printf("Enter Hectares : ");
                scanf("%f",&hec);
                sk = htsk(hec);
                printf("km² is : %f",sk);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 5:
            
            red();
            printf("\nChoose Desired Volume Conversion\n\n");
            int choice4_5;
            
            yellow();
            printf("[1] cm³ to m³\n");
            printf("[2] cm³ to Litres\n");
            printf("[3] cm³ to Gallons\n");
            printf("[4] m³ to cm³\n");
            printf("[5] m³ to Litres\n");
            printf("[6] m³ to Gallons\n");
            printf("[7] Litres to cm³\n");
            printf("[8] Litres to m³\n");
            printf("[9] Litres to Gallons\n");
            printf("[10] Gallons to cm³\n");
            printf("[11] Gallons to m³\n");
            printf("[12] Gallons to Litres\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_5);
            
            reset();
            switch(choice4_5)
            {
                float cc,mc,l,g;
                
                case 1:
                
                printf("Enter cm³ : ");
                scanf("%f",&cc);
                mc = cctmc(cc);
                printf("m³ is : %f",mc);
                break;
                
                case 2:
                
                printf("Enter cm³ : ");
                scanf("%f",&cc);
                l = ctl(cc);
                printf("Litres are : %f",l);
                break;
                
                case 3:
                
                printf("Enter cm³ : ");
                scanf("%f",&cc);
                g = ctg(cc);
                printf("Gallons are : %f",g);
                break;
                
                case 4:
                
                printf("Enter m³ : ");
                scanf("%f",&mc);
                cc = mctcc(mc);
                printf("cm³ is : %f",cc);
                break;
                
                case 5:
                
                printf("Enter m³ : ");
                scanf("%f",&mc);
                l = mtl(mc);
                printf("Litres are : %f",l);
                break;
                
                case 6:
                
                printf("Enter m³ : ");
                scanf("%f",&mc);
                g = mtg(mc);
                printf("Gallons are : %f",g);
                break;
                
                case 7:
                
                printf("Enter Litres : ");
                scanf("%f",&l);
                cc = ltc(l);
                printf("cm³ is : %f",cc);
                break;
                
                case 8:
                
                printf("Enter Litres : ");
                scanf("%f",&l);
                mc = ltm(l);
                printf("m³ is : %f",mc);
                break;
                
                case 9:
                
                printf("Enter Litres : ");
                scanf("%f",&l);
                g = ltg(l);
                printf("Gallons are : %f",g);
                break;
                
                case 10:
                
                printf("Enter Gallons : ");
                scanf("%f",&g);
                cc = gtc(g);
                printf("cm³ is : %f",cc);
                break;
                
                case 11:
                
                printf("Enter Gallons : ");
                scanf("%f",&g);
                mc = gtm(g);
                printf("m³ is : %f",mc);
                break;
                
                case 12:
                
                printf("Enter Gallons : ");
                scanf("%f",&g);
                l = gtl(g);
                printf("Litres are : %f",l);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 6:
            
            red();
            printf("\nChoose Desired Pressure Conversion.\n\n");
            int choice4_6;
            
            yellow();
            printf("[1] bar to atm\n");
            printf("[2] bar to Pascal\n");
            printf("[3] bar to torr\n");
            printf("[4] atm to bar\n");
            printf("[5] atm to Pascal\n");
            printf("[6] atm to torr\n");
            printf("[7] Pascal to atm\n");
            printf("[8] Pascal to bar\n");
            printf("[9] Pascal to torr\n");
            printf("[10] torr to atm\n");
            printf("[11] torr to Pascal\n");
            printf("[12] torr to bar\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_6);
            
            reset();
            switch(choice4_6)
            {
                float atm,bar,pa,tr;
                
                case 1:
                
                printf("Enter bar : ");
                scanf("%f",&bar);
                atm = bta(bar);
                printf("atm is : %f",atm);
                break;
                
                case 2:
                
                printf("Enter bar : ");
                scanf("%f",&bar);
                pa = btp(bar);
                printf("Pascal is : %f",pa);
                break;
                
                case 3:
                
                printf("Enter bar : ");
                scanf("%f",&bar);
                tr = btt(bar);
                printf("torr is : %f",tr);
                break;
                
                case 4:
                
                printf("Enter atm : ");
                scanf("%f",&atm);
                bar = atb(atm);
                printf("bar is : %f",bar);
                break;
                
                case 5:
                
                printf("Enter atm : ");
                scanf("%f",&atm);
                pa = atp(atm);
                printf("Pascal is : %f",pa);
                break;
                
                case 6:
                
                printf("Enter atm : ");
                scanf("%f",&atm);
                tr = att(atm);
                printf("torr is : %f",tr);
                break;
                
                case 7:
                
                printf("Enter Pascal : ");
                scanf("%f",&pa);
                atm = pta(pa);
                printf("atm is : %f",atm);
                break;
                
                case 8:
                
                printf("Enter Pascal : ");
                scanf("%f",&pa);
                bar = ptb(pa);
                printf("bar is : %f",bar);
                break;
                
                case 9:
                
                printf("Enter Pascal : ");
                scanf("%f",&pa);
                tr = ptt(pa);
                printf("torr is : %f",tr);
                break;
                
                case 10:
                
                printf("Enter torr : ");
                scanf("%f",&tr);
                atm = tta(tr);
                printf("atm is : %f",atm);
                break;
                
                case 11:
                
                printf("Enter torr : ");
                scanf("%f",&tr);
                pa = ttp(tr);
                printf("Pascal is : %f",pa);
                break;
                
                case 12:
                
                printf("Enter torr : ");
                scanf("%f",&tr);
                bar = ttb(tr);
                printf("bar is : %f",bar);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 7:
            
            red();
            printf("\nChoose Desired Energy Conversion\n\n");
            int choice4_7;
            
            yellow();
            printf("[1] Joules to Calories\n");
            printf("[2] Calories to Joules\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_7);
            
            reset();
            switch(choice4_7)
            {
                float j,c;
                
                case 1:
                
                printf("Enter Joules : ");
                scanf("%f",&j);
                c = jtc(j);
                printf("Calories are : %f",c);
                break;
                
                case 2:
                
                printf("Enter Calories : ");
                scanf("%f",&c);
                j = ctj(c);
                printf("Joules are : %f",j);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 8:
            
            red();
            printf("\nChoose Desired Power Conversion\n\n");
            int choice4_8;
            
            yellow();
            printf("[1] Watt to Horsepower\n");
            printf("[2] Horsepower to Watt\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_8);
            
            reset();
            switch(choice4_8)
            {
                float w,hp;
                
                case 1:
                
                printf("Enter Watt : ");
                scanf("%f",&w);
                hp = wth(w);
                printf("Horsepower is : %f",hp);
                break;
                
                case 2:
                
                printf("Enter Horsepower : ");
                scanf("%f",&hp);
                w = htw(hp);
                printf("Watt is : %f",w);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 9:
            
            red();
            printf("\nChoose Desired Temperature Conversion\n\n");
            int choice4_9;
            
            yellow();
            printf("[1] Celcius to Fahrenheit\n");
            printf("[2] Fahrenheit to Celcius\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_9);
            
            reset();
            switch(choice4_9)
            {
                float c,f;
                
                case 1:
                
                printf("Enter Celcius : ");
                scanf("%f",&c);
                f = ctf(c);
                printf("Fahrenheit is : %f",f);
                break;
                
                case 2:
                
                printf("Enter Fahrenheit : ");
                scanf("%f",&f);
                c = ftc(f);
                printf("Celcius is : %f",c);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            case 10:
            
            red();
            printf("\nChoose Desired Currency Conversion\n\n");
            int choice4_11;
            
            yellow();
            printf("[1] USD to Rupees\n");
            printf("[2] USD to Euros\n");
            printf("[3] USD to Pounds\n");
            printf("[4] Rupees to USD\n");
            printf("[5] Rupees to Euros\n");
            printf("[6] Rupees to Pounds\n");
            printf("[7] Pounds to Rupees\n");
            printf("[8] Pounds to USD\n");
            printf("[9] Pounds to Euros\n");
            printf("[10] Euros to Rupees\n");
            printf("[11] Euros tp USD\n");
            printf("[12] Euros to Pounds\n");
            
            green();
            printf("\nEnter Your Choice : ");
            scanf("%d",&choice4_11);
            
            reset();
            switch(choice4_11)
            {
                float r,d,p,e;
                
                case 1:
                
                printf("Amount in USD : ");
                scanf("%f",&d);
                r = dtr(d);
                printf("Amount in Rupees : %f",r);
                break;
                
                case 2:
                
                printf("Amount in USD : ");
                scanf("%f",&d);
                e = dte(d);
                printf("Amount in Euros : %f",e);
                break;
                
                case 3:
                
                printf("Amount in USD : ");
                scanf("%f",&d);
                p = dtp(d);
                printf("Amount in Pounds : %f",p);
                break;
                
                case 4:
                
                printf("Amount in Rupees : ");
                scanf("%f",&r);
                d = rtd(r);
                printf("Amount in USD : %f",d);
                break;
                
                case 5:
                
                printf("Amount in Rupees : ");
                scanf("%f",&r);
                e = rte(r);
                printf("Amount in Euros : %f",e);
                break;
                
                case 6:
                
                printf("Amount in Rupees : ");
                scanf("%f",&r);
                p = rtp(r);
                printf("Amount in Pounds : %f",p);
                break;
                
                case 7:
                
                printf("Amount in Pounds : ");
                scanf("%f",&p);
                r = ptr(p);
                printf("Amount in Rupees : %f",r);
                break;
                
                case 8:
                
                printf("Amount in Pounds : ");
                scanf("%f",&p);
                d = ptd(p);
                printf("Amount in USD : %f",d);
                break;
                
                case 9:
                
                printf("Amount in Pounds : ");
                scanf("%f",&p);
                e = pte(p);
                printf("Amount in Euros : %f",e);
                break;
                
                case 10:
                
                printf("Amount in Euros : ");
                scanf("%f",&e);
                r = etr(e);
                printf("Amount in Rupees : %f",r);
                break;
                
                case 11:
                
                printf("Amount in Euros : ");
                scanf("%f",&e);
                d = etd(e);
                printf("Amount in USD : %f",d);
                break;
                
                case 12:
                
                printf("Amount in Euros : ");
                scanf("%f",&e);
                p = etp(e);
                printf("Amount in Pounds : %f",p);
                break;
                
                default:
                red();
                printf("Please Choose a Valid Conversion.");
                break;
            }
            break;
            
            reset();
            long long int b,d,h;
            char hex[100];
            
            case 11:
            
            printf("Enter Binary : ");
            scanf("%lld",&b);
            d = btd(b);
            printf("Hexadecimal is : %llx",d);
            break;
            
            case 12:
            
            printf("Enter Hexadecimal : ");
            scanf("%s",hex);
            printf("Binary is : ");
            htb(hex);
            break;
            
            case 13:
            
            printf("Enter Binary : ");
            scanf("%lld",&b);
            d = btd(b);
            printf("Decimal is : %lld",d);
            break;
            
            case 14:
            
            printf("Enter Decimal : ");
            scanf("%lld",&d);
            b = dtb(d);
            printf("Binary is : %lld",b);
            break;
            
            case 15:
            
            printf("Enter Decimal : ");
            scanf("%lld",&d);
            printf("Hexadecimal is : %llx",d);
            break;
            
            case 16:
            
            printf("Enter Hexadecimal : ");
            scanf("%llx",&h);
            printf("Decimal is : %lld",h);
            break;
            
            default:
            red();
            printf("Please Choose a Valid Conversion.\n");
            break;
            
        }
        break;
        
        case 5:
        
        red();
        printf("\nChoose the Miscellaneous Function you wish to perform.\n");
        int choice5;
        
        yellow();
        printf("[1] Tax Calculator\n");
        printf("[2] Age Calculator\n");
        
        green();
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice5);
        
        reset();
        switch(choice5)
        {
            float amount,tax;
            
            case 1:
            
            printf("Enter Amount : ");
            scanf("%f", &amount);
            printf("Enter Percentage GST : ");
            scanf("%f", &tax);
            GST(tax,amount);
            break;
            
            int y,m,d,dp,mp,yp;
            
            case 2:
            
            printf("Enter Date of Birth (dd mm yyyy) : ");
            scanf("%d %d %d", &d, &m, &y);
            printf("Enter Present Date (dd mm yyyy) : ");
            scanf("%d %d %d", &dp, &mp, &yp);
            age(y, m, d, yp, mp, dp);
            break;
            
            default:
            red();
            printf("Please Choose a Valid Function.\n");
            break;
        }
        break;
        
        default:
        red();
        printf("Please Choose Valid Calculator\n");
        break;
    }
    
    cyan();
    printf("\nTHANKS FOR USING THE CALCULATOR !");
    return 0;
}
