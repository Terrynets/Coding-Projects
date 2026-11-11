# Coding Projects

A personal collection of programming practice, coursework-style exercises, algorithms, and small experiments. The repository includes C++ and Python source files, language/topic folders, and some compiled Windows executables that accompany exercises.

## What you'll find

- Small C++ programs covering fundamentals such as variables, conditionals, loops, functions, arrays, and introductory math.
- Python scripts and exercises, including small calculations and experiments.
- Topic and project folders such as `cpp/`, `python/`, `csharp/`, `competitive/`, `bfs/`, `dfs/`, and `C++ Task Project/`.
- A root `Makefile`, supporting files, and folders for assets, documentation, and tests.
- Some checked-in `.exe` files are compiled artifacts; the corresponding source, when available, is the best place to understand or modify a program.

This is a growing learning repository rather than one single application. Individual files and folders may have their own instructions; check those before building or running a specific exercise.

## Working with the code

For an individual C++ source file, compile it with a C++ compiler, for example:

```bash
g++ -std=c++17 -Wall -Wextra -o program path/to/program.cpp
./program
```

On Windows, run the resulting executable as `program.exe`. Python scripts can be run with Python 3:

```bash
python path/to/script.py
```

The repository also includes a `Makefile`; inspect its targets before using `make`, since targets may apply to particular projects or exercises.

## Notes

The programs are primarily learning and practice work. They may vary in completeness, style, and platform compatibility. Compiled binaries are provided as repository artifacts, not as a substitute for reviewing the source.

## License

MIT. See [`LICENSE`](LICENSE).
