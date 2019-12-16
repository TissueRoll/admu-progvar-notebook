vector<pdd> convex_hull(vector<pdd> pts) {
	sort(pts.begin(), pts.end());
	int top = 0;
	vector<pdd> stk(2*pts.size());
	for (int i = 0; i < pts.size(); i++) {
		while (top >= 2 and cross(stk[top-1]-stk[top-2], pts[i]-stk[top-2]).z <= 0) top--;
		stk[top++] = pts[i];
	}
	for (int i = pts.size()-2, t = top+1; i >= 0; i--) {
		while (top >= t and cross(stk[top-1]-stk[top-2], pts[i]-stk[top-2]).z <= 0) top--;
		stk[top++] = pts[i];
	}
	stk.resize(top-1);
	return stk;
}