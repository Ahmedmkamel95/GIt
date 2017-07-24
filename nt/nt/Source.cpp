#include <iostream>
using namespace std;
 int cal(int x, int y)
{
	 int res = x + y;
	 return res;

}
int main()
{

	int x,y,res;
	 cin>>x>>y;
	 res = cal(x, y);

	cout << res;
}