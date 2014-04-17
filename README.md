ChromiumCodeLab
===============

This is my personal solutions for [C++ in Chromium 101 - Codelab](https://sites.google.com/a/chromium.org/dev/developers/cpp-in-chromium-101-codelab). Some of my solutions will cover more things, just for practice.

### Build
1. Get chromium source files.
2. Put repository `CodeLab` along side with `src`.
3. Setup `ninja`, which can be found in the `depot_tools` of chromium.
4. Run the following command to generate the ninja build files, build and run.
```bash
$ path/to/chromium/src/tools/gyp/gyp --depth=. cpp101.gyp\
  -I/path/to/chromium/src/build/common.gypi
$ ninja -C out/Release
$ out/Release/use_base
```

# for windows7
1. open an administrator cmd console and delete the file build,chrome,tools,third_party
2. run "mklink /D build ..\src\build" and do the same for all other directories: chrome, tools, third_party
3. run "c:\work\chrome\CodeLab-master>..\src\tools\gyp\gyp --depth=. --no-circular-check cpp101.gyp -I..\src\build\common.gypi" 
Note: my chromium src path is "c:\work\chrome\src"
