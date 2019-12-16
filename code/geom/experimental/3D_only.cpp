vec3 proj_plane(vec3 p, vec3 n, double d) {
	vec3 ptop = n*(-d/n.sqmag());
	return p-proj(p-ptop,n);
}