//exp10c 
//employee salary hike 

#include <iostream> 
using namespace std ; 

int bonus (double* current_salary){
     *current_salary=*current_salary+0.2*(*current_salary); 
     return 0 ; 
}

 int main (){
    //taking info input 
    int years_completed ;
    cout<<"Enter the number of years completed at the company : ";
    cin>>years_completed;

    int research_projects;
    cout << "Enter the number of research projects completed: ";
    cin >> research_projects;

    int new_research_projects;
    cout<<"Enter the number of new research projects in pipeline : ";
    cin>>new_research_projects; 

    int company_profit; 
    cout<<"Enter the amount of profit the company made through your work ; ";
    cin>>company_profit;

    int current_salary;

    
    // conditions 
    int conditions_met = 0 ; 
    if (years_completed > 1) {
        conditions_met++;
    }
    if (research_projects >= 1) {
        conditions_met++;
    }
    if (new_research_projects >= 1) {
        conditions_met++;
    }
    if (company_profit > 100000) {
        conditions_met++;
    }
    
    //if any  3 of the  4 above conditions are satisfied or not 
    if (conditions_met >= 3){
        double current_salary;
        
        cout << "Congratulations! You are eligible for a 20% salary hike." << endl;
        cout << "Enter your current salary: ";
        cin >> current_salary;

        // call the bonus function after getting the salary
        bonus(&current_salary);
        
        cout << "Your new salary is: " << current_salary << endl;
    } else {
        cout << "You are not eligible for a salary hike at this time." ;
    }


return 0 ; 
