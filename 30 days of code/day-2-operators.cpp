#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double meal_cost,tip_percent,tax_percent,total_cost;
    cin>>meal_cost>>tip_percent>>tax_percent;
    total_cost=meal_cost+((tip_percent/100)*meal_cost)+((tax_percent/100)*meal_cost);
    cout<<round(total_cost)<<endl;
    return 0;
}