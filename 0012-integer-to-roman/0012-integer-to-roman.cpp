class Solution {
public:
    string intToRoman(int num) {
        map<int,char>mp;
        mp[1]='I';
        mp[5]='V';
        mp[10]='X';
        mp[50]='L';
        mp[100]='C';
        mp[500]='D';
        mp[1000]='M';
        string ans="";
        int r=0;
        int c=0;
        int b;
        while(num){
            r=num%10;
            b=pow(10,c);
            if(r<=3){
                for(int i=0;i<r;i++){
                    ans=mp[b]+ans;
                }
            }
            else if(r==4){
                int h=4*b+b;
                ans=mp[h]+ans;
                ans=mp[b]+ans;
                
            }
            else if(r<=8){
                for(int i=0;i<r-5;i++){
                    ans=mp[b]+ans;
                }
                ans=mp[5*b]+ans;
            }
            else{
                int h=9*b+b;
                ans=mp[h]+ans;
                ans=mp[b]+ans;
            }
            c++;
            num/=10;
        }
        return ans;
    }
};