#set document(
  title: "Team Reference Document",
)

#set page(
  paper: "a4",
  margin: (left: 2cm, right: 2cm, top: 2cm, bottom: 2cm),
  columns: 2,
  header: context {
    set text(size: 9pt)
    let cur = counter(page).get().first()
    grid(
      columns: (1fr, 1fr),
      align(left)[Saratov SU (Bragin, Martyanov, Slepov)], align(right)[#cur],
    )
    line(length: 100%, stroke: 0.6pt)
  },
  footer: none,
)

#set text(
  size: 10pt,
  font: "Liberation Serif",
  lang: "ru",
)

#set heading(numbering: "1.1")

#set raw(
  block: true,
  theme: none,
)

#show raw.where(block: true): it => text(font: "Liberation Mono", size: 8.5pt)[#it]

#set math.equation(block: false)

= Data structures

== Segment Tree

#raw(
  read("data_structures/segment_tree.cpp"),
)

== DSU

#raw(
  read("data_structures/dsu.cpp"),
)

== Sparse table

#raw(
  read("data_structures/sparse_table.cpp"),
)

== Merge sort tree

#raw(
  read("data_structures/mergesort_tree.cpp"),
)

== Persistent segment tree

#raw(
  read("data_structures/persistent_segment_tree.cpp"),
)

== Fenwick 2d

#raw(
  read("data_structures/fenwick_2d.cpp"),
)

= Graph algorithms

== Dijkstra

#raw(
  read("graph_algorithms/dijkstra.cpp"),
)

== Ford-Bellman

#raw(
  read("graph_algorithms/ford_bellman.cpp"),
)

== SCC (Strongly connected components)

#raw(
  read("graph_algorithms/scc.cpp"),
)

== Bridges

#raw(
  read("graph_algorithms/bridges.cpp"),
)

== Articulation points

#raw(
  read("graph_algorithms/articulation_points.cpp"),
)

== DFS

#raw(
  read("graph_algorithms/dfs.cpp"),
)

== Center of tree

#raw(
  read("graph_algorithms/center_of_tree.cpp"),
)

== BFS

#raw(
  read("graph_algorithms/bfs.cpp"),
)

== BFS 0-1

#raw(
  read("graph_algorithms/bfs_0_1.cpp"),
)

== Length of shortest cycle

#raw(
  read("graph_algorithms/len_of_shortest_cycle.cpp"),
)

== Binary lifting, LCA, min on path

#raw(
  read("graph_algorithms/binary_lifting_lca_min_on_path.cpp"),
)

== Floyd

#raw(
  read("graph_algorithms/binary_lifting_lca_min_on_path.cpp"),
)

== MST

#raw(
  read("graph_algorithms/mst.cpp"),
)

== Cycle in directed graph

#raw(
  read("graph_algorithms/cycle_in_directed_graph.cpp"),
)

== 2-SAT

#raw(
  read("graph_algorithms/2_sat.cpp"),
)

== Flows

#raw(
  read("graph_algorithms/flows.cpp"),
)

== DCP

#raw(
  read("graph_algorithms/dcp.cpp"),
)

== Virtual tree

#raw(
  read("graph_algorithms/virtual_tree.cpp"),
)

== Maximum matching (Kuhn)

#raw(
  read("graph_algorithms/kuhn_with_optimizations.cpp"),
)

== Path cover, edge cover (Kuhn)

#raw(
  read("graph_algorithms/path_edge_cover_kuhn.cpp"),
)

== LCA with RMQ

#raw(
  read("graph_algorithms/lca_with_rmq.cpp"),
)

= Maths

== Modular arithmetics

#raw(
  read("maths/modular_arithmetics.cpp"),
)

== Geometry (in integers)

#raw(
  read("maths/geometry.cpp"),
)

== Pascal's triangle

#raw(
  read("maths/paskals_triangle.cpp"),
)

== Sieve of Eratosthenes

#raw(
  read("maths/sieve.cpp"),
)

== Factorization with sieve

#raw(
  read("maths/factorization_with_sieve.cpp"),
)

== Factorization

#raw(
  read("maths/factorization.cpp"),
)

== Get divs from factorization

#raw(
  read("maths/get_divs_from_factorization.cpp"),
)

== Sieve dividers

#raw(
  read("maths/sieve_dividers.cpp"),
)

== FFT

#raw(
  read("maths/fft.cpp"),
)

== Mobius

#raw(
  read("maths/mobius.cpp"),
)

== Geometry

#raw(
  read("maths/geometry.py"),
)

== NTT

#raw(
  read("maths/ntt.cpp"),
)

= Permutations

== Find cycle

#raw(
  read("permutations/find_cycle.cpp"),
)

== K-th permutation

#raw(
  read("permutations/k_th_permutation.cpp"),
)

== Permutation number

#raw(
  read("permutations/permutation_number.cpp"),
)

== Brute permutations

#raw(
  read("permutations/brute_permutations.cpp"),
)

= Sqrt heuristics

== Sqrt decomposition

#raw(
  read("sqrt_heuristics/sqrt_decomposition.cpp"),
)

== Query decomposition

#raw(
  read("sqrt_heuristics/query_decomposition.cpp"),
)

== Split/rebuild

#raw(
  read("sqrt_heuristics/split_rebuild.cpp"),
)

= String algorithms

== Prefix function

#raw(
  read("string_algorithms/prefix_func.cpp"),
)

== Z-function

#raw(
  read("string_algorithms/z_func.cpp"),
)

== Manacher

#raw(
  read("string_algorithms/manacher.cpp"),
)

== Trie

#raw(
  read("string_algorithms/trie.cpp"),
)

== Aho-Corasick

#raw(
  read("string_algorithms/aho_corasick.cpp"),
)

== String hashing

#raw(
  read("string_algorithms/string_hashing.cpp"),
)

== Suffix array

#raw(
  read("string_algorithms/suffix_array.cpp"),
)


= Other algorithms

== Binary search

#raw(
  read("other_algorithms/bin_search.cpp"),
)

= Template

#raw(
  read("template.cpp"),
)

#include "formulas.typ"

