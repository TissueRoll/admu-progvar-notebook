double dist_pt_line(vec2 p, vec2 u, vec2 v) {return ((p-u)*(v-u))/((v-u).mag());}
double dist_pt_line(vec2 p, vec2 n, double c) {return (n*p+c)/(n.mag());}
double dist_pt_plane(vec3 p, vec3 n, double d) {return (n*p+d)/(n.mag());}
double dist_line_line(vec3 u0, vec3 v0, vec3 u1, vec3 v1) {
	vec3 n = (v0-u0)%(v1-u1);
	if (n == vec3(0,0,0)) {
		vec3 v = v0/v0.mag();
		return (v%(u1-u0)).mag();
	}
	return ((u1-u0)*n)/(n.mag());
}