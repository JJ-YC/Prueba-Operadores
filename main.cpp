#include <iostream>

using  namespace std; 
struct Punto{ 
 double x,y
};

Punto /*operator+*/suma (const Punto &p, const Punto &q); 

int main(int argc, char const *argv[])
{
	Punto a,b,r; 
	a.x = 0.0; 
	a.y = -1.5; 
	b.x = 2.4; 
	b.y = 5.23; 
	r= suma(a,b) /* a + b*/
	cout << r.x << "," << r.y << endl; 
	/* code */
	return 0;
}

Punto /*operator+*/suma(const Punto &p, const Punto &q)
{
	Punto r; 
	r.x = p.x +q.x; 
	r.y = p.y + q.y; 
	return  r;

}
