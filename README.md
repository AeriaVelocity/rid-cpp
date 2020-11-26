# `rid` cross platform
Joke command for the command line. Prints out sarcastic messages. Think of it as an homage to [`sl`](https://github.com/mtoyoda/sl), just with sarcastic quips instead of cool ASCII train animations.

Unlike the [original](https://github.com/SpeedStriker243/rid-dotnet) `rid` which is written in C# for .NET Framework, this is rewritten in C++, so that it can be compiled for basically anything. Changes in program behaviour (i.e., new messages, changed messages, different method of providing messages) will be synced with the .NET original.

Compiled binaries for this version of `rid` will not be provided -- you are encouraged to compile it yourself. [Check the .NET version for Windows binaries of that version.](https://github.com/SpeedStriker243/rid-dotnet/releases/tag/release)

## Building instructions
### macOS and Linux
Simply type the following into your terminal:
```
g++ -o rid main.cpp
```
Copy the compiled `rid` program to your `usr/local/bin/` directory. (if root then leave `sudo` out)
```shell
sudo cp ./rid /usr/local/bin/
```
After that, run `rid` from the terminal.
If you lack privileges to write to `usr/local/bin/` (i.e. you're not elevated or cannot be elevated) then copy `rid` to any directory and add that directory to your PATH:
```
export PATH = /path/to/rid:$PATH
# Replace '/path/to/rid with a path pointing to rid's executable
```

### Windows systems
You need to have [MinGW](http://mingw.org/) installed and [added to your system's PATH](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/).
Type the following into your command prompt:
```
g++ -o ./rid.exe ./main.cpp
```
Either place `rid.exe` in `C:\Windows\System32` or place it wherever and add it to your system's PATH, then you can run `rid` straight from the command prompt.

You can skip adding to PATH, but you then have to specify where `rid.exe` is.

## Questions and Concerns
- **What'll happen if I compile the code to something else, like `main`?**
  - Then you'd have to type `main` to run the program.
- **Then why even call it `rid`?**
  - Because that was the *original* project name, as a play on words for 'dir'.
- **Why not just recompile the .NET version for .NET Core?**
  - .NET Core is reliant on having a DLL next to the executable at all times, which may be fine for bigger projects, but not ideal for a small project like this. Besides, I needed to brush up on my C++.
