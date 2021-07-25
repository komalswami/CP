    #include<iostream>
    using namespace std;
    int main()
    {
        int h,n,cnt=0;
        cin>>n>>h;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
     
            if(a[i]>h)
            {
                cnt=cnt+2;
            }
            else
            {
                cnt=cnt+1;
            }
        }
        
        cout<<cnt;
       return 0; 
    }
