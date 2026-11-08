struct vec2 {
    int x, y;
    vec2(int x = 0, int y = 0) : x(x), y(y) {};
};
vec2 operator+(const vec2& a, const vec2& b) { return vec2(a.x + b.x, a.y + b.y); }
vec2 operator-(const vec2& a, const vec2& b) { return vec2(a.x - b.x, a.y - b.y); }
vec2 operator*(const vec2& a, int x) { return vec2(a.x * x, a.y * x); }
vec2 operator*(int x, const vec2& a) { return vec2(a.x * x, a.y * x); }
long long operator*(const vec2& a, const vec2& b) { return a.x * 1ll * b.x + a.y * 1ll * b.y; }
long long operator%(const vec2& a, const vec2& b) { return a.x * 1ll * b.y - a.y * 1ll * b.x; }
long long dist2(const vec2& a) { return a * a; }
long long triangle_area(const vec2& a, const vec2& b, const vec2& c) {
    // удвоенная знаковая площадь
    return (b - a) % (c - a);
}
long long polygon_area(const vector<vec2>& p) {
    // удвоенная знаковая площадь
    long long S = 0;
    int n = p.size();
    for (int i = 0; i < n; i++) {
        int j = (i == n - 1 ? 0 : i + 1);
        S += (p[i].x - p[j].x) * 1ll * (p[i].y + p[j].y);
    }
    return S;
}
struct line2 {
    int A, B;
    long long C;
    line2(int A = 0, int B = 0, long long C = 0) : A(A), B(B), C(C) {};
    line2(const vec2& a, const vec2& b) {
        A = a.y - b.y;
        B = b.x - a.x;
        C = -A * 1ll * a.x - B * 1ll * a.y;
    }
};
