int reverse_integer(int num1)
{
int temp=num1,sum=0,rem;
while(temp!=0)
{
	rem=temp%10;
	temp=temp/10;
	sum=sum*10+rem;

}
return sum;
}

