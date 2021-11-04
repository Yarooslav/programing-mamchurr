int main()
{
    int n = 9;
    int f=1;
    if(n%2==0)
    {
       for(int i=2; i<=n; i+=2)
       {
           f*=i;
       }
    }
    else
    {
        for(int i=1; i<=n; i+=2)
       {
           f*=i;
       }
    }return f;
}
