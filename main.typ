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
    let total = counter(page).final().first()
    grid(
      columns: (1fr, 1fr),
      align(left)[Saratov State University: Martyanov, Slepov, Bragin], align(right)[Page #cur of #total],
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

#include "formulas.typ"

