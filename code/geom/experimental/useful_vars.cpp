const double PI = acos(-1), EPS = 1e-9;
const double r2d = 180/PI, d2r = PI/180;
template <typename A, typename B> ostream& operator<<(ostream& o, const pair<A,B>& p) {
	return o << p.first << ' ' << p.second;
}
template <typename T> ostream& operator<<(ostream& o, const vector<T>& v) {
	o << "[ ";
	for (T x : v) o << x << " ";
	o << " ]";
	return o;
}