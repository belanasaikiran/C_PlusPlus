# C_PlusPlus
Learning C++ in depth from Cherno


# How Compiler Works ?

### Pre-processing 


During this stage, the compiler goes through all the preprocessing statements and evaluate them.
Like `#include, #define, #if and #ifdef`

- Also there are pragma statements that tell what the compiler have to do. 

> Example: `#include`: It basically tells what files to include to preprocess. It would just open the file mentioned and just reads and pastes the content of the file in the current file.


### Highlights

- 📜 C++ code is initially just text.
- 🔄 The compiler converts text to object files.
- 🔍 Pre-processing evaluates directives like #include.
- 🏗️ An abstract syntax tree represents the code structure.
- ⚙️ The compiler generates machine code for the CPU.
- 📚 Object files are created for each translation unit.
- 🔗 The linker combines object files into an executable.

### Key Insights

- 📝 Text to Binary Transformation: 
  The C++ compiler plays a crucial role in transforming human-readable code into machine code that the CPU can execute. This transformation involves multiple stages, starting from pre-processing to generating object files. Understanding each stage helps developers optimize their code.

- 📊 Pre-processing Importance: 
  Pre-processing is essential as it handles directives such as #include, effectively managing code dependencies before compilation. This ensures that all necessary components are included in the build process, which can affect the overall application functionality.

- 🌳 Abstract Syntax Tree: 
  The creation of an abstract syntax tree during the compilation process is significant as it provides a structured representation of the code that the compiler can manipulate. This representation helps in optimizing and generating efficient machine code.

- ⚙️ Machine Code Generation: 
  After the compiler analyzes the code, it generates machine code that the CPU can execute directly. This process is crucial for performance, as optimized machine code results in faster application execution.

- 🗂️ Translation Units: 
  Every C++ source file is treated as a translation unit, resulting in corresponding object files. This modular approach simplifies the compilation process and allows for better management of large projects by isolating code segments.

- 🔄 Linking Process: 
  While this video focuses on compiling, the linking process is equally important as it combines object files into a single executable. Understanding both processes is essential for effective software development in C++.

- 🔧 Optimization: 
  The compiler’s ability to optimize code significantly impacts performance. Developers should be aware of how different coding practices affect optimization, as inefficient code can lead to slower execution times.


## Linking

Linking is process of converting the source files to an executable binary. Primary focus is to find where each symbol and function is and link them together.
Since each file is converted into a separate object file and they have no relation to each other. We need a way to link them together. This is where Linker comes into action.

> Linking happens when we build not compile.


