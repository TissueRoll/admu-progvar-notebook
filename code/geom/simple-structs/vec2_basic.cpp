struct vec2 {
	double x, y;
	vec2(double _x = 0, double _y = 0): x(_x), y(_y) {}
	vec2 operator-() const {return vec2(-x,-y);}
	vec2 operator!=(const vec2& r) const {return (x != r.x) or (y != r.y);}
	vec2 operator==(const vec2& r) const {return (x == r.x) and (y == r.y);}
	vec2 operator+(const vec2& r) const {return vec2(x+r.x,y+r.y);}
	vec2 operator-(const vec2& r) const {return vec2(x-r.x,y-r.y);}
	vec2 operator*(const double& r) const {return vec2(x*r,y*r);}
	vec2 operator/(const double& r) const {return vec2(x/r,y/r);}
	double operator*(const vec2& r) const {return x*r.x+y*r.y;} // dot
	double operator%(const vec2& r) const {return x*r.y-r.x*y;} // cross
	double sqmag() {return x*x+y*y;}
	double mag() {return sqrt(sqmag());}
	vec2 normalize() {return *this/mag();}
};