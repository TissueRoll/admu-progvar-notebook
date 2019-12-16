// also works with 3D
vec2 proj(vec2 u, vec2 v) {return v*((u*v)/(v*v));}
vec2 proj_line(vec2 p, vec2 u, vec2 v) {return u+proj(p-u,v-u);}
vec2 proj_line_seg(vec2 p, vec2 u, vec2 v) {
	double s = ((p-p0)*(p1-p0))/((p1-p0)*(p1-p0));
	return p0+(p1-p0)*min(1.0, max(0.0, s));
}