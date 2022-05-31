//circle.h

class circle
{
	float rad,area,peri;
	public: void set_data();
		void display();
		void cal_area();
		void cal_peri();
		circle(circle &); //copy constructor
};
