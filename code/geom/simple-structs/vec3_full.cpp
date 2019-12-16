struct vec3 {
	double x, y, z;
	vec3(double _x = 0, double _y = 0, double _z = 0): x(_x), y(_y), z(_z) {}
	vec3 operator-() const {return vec3(-x,-y,-z);}
	vec3 operator!=(const vec3& r) const {return (x != r.x) or (y != r.y) or (z != r.z);}
	vec3 operator==(const vec3& r) const {return (x == r.x) and (y == r.y) and (z == r.z);}
	vec3 operator+(const vec3& r) const {return vec3(x+r.x,y+r.y,z+r.z);}
	vec3& operator+=(const vec3& r) {x += r.x; y += r.y; z += r.z; return *this;}
	vec3 operator-(const vec3& r) const {return vec3(x-r.x,y-r.y,z-r.z);}
	vec3& operator+=(const vec3& r) {x -= r.x; y -= r.y; z -= r.z; return *this;}
	vec3 operator*(const double& r) const {return vec3(x*r,y*r,z*r);}
	vec3& operator+=(const vec3& r) {x *= r; y *= r; z *= r; return *this;}
	vec3 operator/(const double& r) const {return vec3(x/r,y/r,z/r);}
	vec3& operator+=(const vec3& r) {x /= r; y /= r; z /= r; return *this;}
	double operator*(const vec3& r) const {return x*r.x+y*r.y+z*r.z;} // dot
	vec3 operator%(const vec3& r) const {return vec3(y*r.z-r.y*z, z*r.x-r.z*x, x*r.y-r.x*y);} // cross
	double sqmag() {return x*x+y*y+z*z;}
	double mag() {return sqrt(sqmag());}
	vec3 normalize() {return *this/mag();}
};