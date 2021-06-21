# loc

Print various counts read from standard input:
- `loc`: Lines of code (number of newlines)
- `sloc`: Significant lines of code (number of non-empty lines)
- `bytes`: Size in bytes (number of characters)


## Installation

```sh
make
sudo make install
```

**Note:** By default `loc` is installed in the `/usr/local/bin` directory; it
can be uninstalled using: `sudo make uninstall`.


## License

Copyright (C) 2021 Robert Coffey

This is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License version 2 as published by the Free Software
Foundation.

You should have received a copy of the GNU General Public License version 2
along with this software. If not, see
[GPLv2 license](https://www.gnu.org/licenses/gpl-2.0).
