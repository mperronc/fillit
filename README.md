# fillit

Project written in collaboration with [Diana Boudy](https://github.com/Liliaze)

Fillit is a simple program that takes a bunch of tetris blocks in text format, and tries to arrange them in the smallest square possible.

We used recursive backtracking to solve this, we believe it was appropriate as we also needed to place the top blocks of the file in the upper-left corner first when multiple arragements are possible.

![](https://media.giphy.com/media/3o7aD6ZuHiPt8DlNYI/giphy.gif)

## File format :

Each block must be separated by at least one empty line.

A block fits into a 4x4 square of [.] (empty spaces) with [#] representing parts of the block. 

Examples :

```#...
#...
#...
#...

....
.##.
.##.
....

..##
...#
...#
....
```

Only valid tetris blocks are allowed.
