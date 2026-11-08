struct SplitRebuildMin {
    vector<vector<int>> blocks;
    vecotr<int> f;
    int m;  // кол-во блоков
    void recalc_block(int i) {
        f[i] = INF;
        for (auto x : blocks[i]) f[i] = min(x, f[i]);
    }
    void rebuild() {
        vector<int> a;
        for (int i = 0; i < m; i++)
            for (auto x : block[i]) a.push_back(x);
        blocks = vector<vector<int>>(1);
        for (auto x : a) {
            if (blocks.empty() || blocks.back().size() >= B) {
                blocks.push_back(vector<int>(0));
            }
            blocks.back().push_back(x);
        }
        m = blocks.size();
        f.resize(m);
        for (int i = 0; i < m; i++) {
            recalc_block(i);
        }
    }
    pair<int, int> locate(int pos) {
        // преобразует позицию pos в пару (номер блока, позиция в блоке)
        for (int i = 0; i < m; i++)
            if (blocks[i].size() > pos)
                return make_pair(i, pos);
            else
                pos -= blocks[i].size();
        return make_pair(m - 1, blocks[m - 1].size())
    }
    void insert(int pos, int x) {
        pair<int, int> p = locate(pos);
        int b = p.first;
        int i = p.second;
        blocks[b].insert(blocks[b].begin() + i, x);
        recalc_block(b);
        if (blocks[b].size() > B) rebuild();
    }
    void remove(int pos) {
        pair<int, int> p = locate(pos);
        int b = p.first;
        int x = p.second;
        blocks[b].erase(blocks[b].begin() + x);
        recalc_block(b);
    }
    int getMin(int l, int r) {
        // минимум на [l, r)
        pair<int, int> lf = locate(l);
        pair<int, int> rg = locate(r);
        int ans = INF;
        if (lf.first == rg.first) {
            for (int i = lf.second; i < rg.second; i++) ans = min(ans, blocks[lf.first][i]);
        } else {
            ans = min(ans,
                      *min_element(blocks[lf.first].begin() + lf.second, blocks[lf.first].end()));
            for (int i = lf.first + 1; i < rg.first; i++) {
                ans = min(ans, f[i]);
            }
            if (rg.second != 0)
                ans = min(ans, *min_element(blocks[rg.first].begin(),
                                            blocks[rg.first].begin() + rg.second));
        }
        return ans;
    }
    SplitRebuildMin(const vector<int>& a) {
        blocks = {a};
        m = 1;
        rebuild();
    }
};
