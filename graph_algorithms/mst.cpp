sort(edges.begin(), edges.end());
li ans = 0;
for (edge e : edges) {
    if (merge(e.v, e.u)) {
        g_mst[e.v].push_back({e.u, e.w});
        g_mst[e.u].push_back({e.v, e.w});
        in_mst[e.i] = true;
        ans += e.w;
    }
}
