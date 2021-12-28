# loc

Print various counts read from files or standard input:
- `loc`: Lines of code (number of newline characters).
- `sloc`: Significant lines of code (number of non-empty lines).
- `bytes`: Size in bytes (number of characters).


## Installation

    make
    make install

**Note:** `loc` is installed in the `/usr/local/bin` directory, it can be
uninstalled using: `make uninstall`.


## Usage

    loc [FILE]...

**Note:** If `FILE` is omitted, `loc` will read from standard input.


## License

Copyright (C) 2021 Robert Coffey

This is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License version 3.
