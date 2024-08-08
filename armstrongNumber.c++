//Check Armstrong
class Solution{
public:
bool checkArmstrong(int n){
  int sum=0;
int num=n;
int k = to_string(n).length();
while(n>0){
int id = n%10;
sum += pow(id, k);
n = n/10;
}
return sum==n ? true:false;
}
