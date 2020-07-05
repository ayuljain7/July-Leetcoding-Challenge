vector<int> prisonAfterNDays(vector<int>& cells, int N) {
  vector<int> f_c, next_c(cells.size(), 0);
  for (int cycle = 0; N-- > 0; cells = next_c, ++cycle) {
    for (auto i = 1; i < cells.size() - 1; ++i) next_c[i] = cells[i - 1] == cells[i + 1];
    if (cycle == 0) f_c = next_c;
    else if (next_c == f_c) N %= cycle;
  }
  return cells;
}