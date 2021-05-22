#include <iostream>

using namespace std;

void func(int *ponteiro, int n, int &max, int &min){
 for(int k=0; k < n; k++){
   cout << *ponteiro << " ";
   if(min > *ponteiro){
     min = *ponteiro;
   }
   if(max < *ponteiro){
     max = *ponteiro;
   }
     ponteiro++;
 }
 cout << endl;
 cout << "Max = " << max << "," << " Min =" << min << endl;
}

int main() {
  int n;

  cout << "Informe a quantidade de elementos do vetor e clique no Enter, depois informe os elementos: \n";
  cin >> n;

  int vetor[n-1];
  int min; int max;

  for(int k=0; k < n; k++){
    cin >> vetor[k];
  }
  
  max = vetor[0];
  min = vetor[0];

  cout << endl;

  func(vetor, n, max, min);

}