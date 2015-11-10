#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out("output.dat");// hier wir der Ort zum Speichern festgelegt?!
    double x0 = 0.5;
    double x;
    int Nskip = 100; //Number of iterations to skip
    int Nend = 200; //Number of total iterations
    
      for(double r=0; r <= 4; r += 0.001){
    double xa[Nend-Nskip]; //hier wird ein  array zum Speichern erstellt
        x=x0;
          
        for(int i=1; i <= Nskip; i++){
               double x = r*x*(1-x);
                    
                	for(int i=Nskip+1; i <= Nend; i++){
                    double x = r*x*(1-x);
                    	                     }
                 for(int i=Nskip+1; i <= Nend; i++){
                     double x = r*x*(1-x);
                     xa[i-Nskip-1]= x;
                     }
                 for (int i=0; i<=(Nend-Nskip); i++)
                     out << r << "\t" << xa[i] << endl;
        }
                                            }
        
        
         out.close();
        return 0;
    }