#include <iostream> 
using namespace std; 
  
void towerOfHanoi(int n, char source_rod, char destination_rod, char auxi_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << source_rod <<" to rod " << destination_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, source_rod, auxi_rod, destination_rod);  // step1
    cout << "Move disk " << n << " from rod " << source_rod <<" to rod " << destination_rod << endl; //step2
    towerOfHanoi(n - 1, auxi_rod, destination_rod, source_rod);  // step3
}  
  

int main()  
{  
    int n = 1; // Number of disks  
    towerOfHanoi(n, 'S', 'D', 'A'); // S = source rod, D = Destination rod and A auxiliary rod  
    return 0;  
}
