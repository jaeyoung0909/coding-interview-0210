#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int quantity_of_drones;
    int num_of_customers;
    
    cout << "how many drones you have?" <<endl;
    cin >> quantity_of_drones;
    cout << "how many customers there?" << endl;
    cin >> num_of_customers;
    int *each_demand = new int[num_of_customers];
    for (int i=0; i<num_of_customers;i++){
        cout << "enter each customer's demand" << endl;
        int d;
        cin >> d;
        each_demand[i] = d;
    }
    sort(each_demand, each_demand+num_of_customers);
    int result=0;
    for(int i=0; i<num_of_customers;i++){
        if(quantity_of_drones < each_demand[i]) break;
        quantity_of_drones-=each_demand[i];
        result++;
    }
    cout << "number of maximun possible customers : " << result << endl;
    return 0;
}