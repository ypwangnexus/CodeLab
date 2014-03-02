ChromiumCodeLab
===============

This is my personal solutions for [C++ in Chromium 101 - Codelab](https://sites.google.com/a/chromium.org/dev/developers/cpp-in-chromium-101-codelab). Some of my solutions will cover more things, just for practice.

### Build
1. Get chromium source files.
2. Put repository `ChromiumCodeLab` along side with `src`.
3. Setup `ninja`, which can be found in the `depot_tools` of chromium.
4. Run the following command to generate the ninja build files, build and run.
```bash
$ path/to/chromium/src/tools/gyp/gyp --depth=. cpp101.gyp\
  -I/path/to/chromium/src/build/common.gypi
$ ninja -C out/Release
$ out/Release/use_base
```
