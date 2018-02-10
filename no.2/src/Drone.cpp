#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int quantity_of_drones;
    int num_of_customers;
    
    printf("how many drones you have?\n");
    scanf("%d", &quantity_of_drones);
    printf("how many customers there?\n");
    scanf("%d",&num_of_customers);
    int *each_demand = new int[num_of_customers];
    for (int i=0; i<num_of_customers;i++){
        printf("enter %d \'th customer's demand\n", i+1);
        int d;
        scanf("%d", &d);
        each_demand[i] = d;
    }
    sort(each_demand, each_demand+num_of_customers);
    int result=0;
    for(int i=0; i<num_of_customers;i++){
        if(quantity_of_drones < each_demand[i]) break;
        quantity_of_drones-=each_demand[i];
        result++;
    }
    printf("number of maximun possible customers : %d\n", result);
    return 0;
}