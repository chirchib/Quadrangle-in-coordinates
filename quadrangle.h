#ifdef QUADRANGLE_H
#define QUADRANGLE_H


class Quadrangle {
	public:
		Quadrangle();
		void setCoordinates();
		void getSides();
		void perimetr();
		void area();
	private:
		double length, width;
		int Ax, Ay;
		int Bx, By;
		int Cx, Cy;
		int Dx, Dy;
		bool checkingRectangle();
		void findingSides();
};


#endif
