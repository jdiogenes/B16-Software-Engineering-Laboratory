/** file: test-ball.cpp
 ** brief: Tests the bouncing ball simulation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"

int main(int argc, char** argv)
{
  Ball ball ;
  const double dt = 1.0/30 ;
  cout << "A coordenada x padrão da bola é " << x << ". Digite o novo valor da coordenada x: (digite " << x << " para manter o padrão) " << endl; 
  cin >> x;
  cout << "A coordenada y padrão da bola é " << y << ". Digite o novo valor da coordenada y: (digite " << y << " para manter o padrão) " << endl; 
  cin >> y;	

  for (int i = 0 ; i < 100 ; ++i) {
    ball.step(dt) ;
    ball.display() ;
  }
  return 0 ;
}
