# Filetools

A library for easy file management in C.

## Commands
- **createFile()**
- **writeFile()**
- **appendFile()**
- **emptyFile()**
- **readFile()**
- **fileExists**

### createFile
Creates an empty file.\
Takes one argument: **char \*fileName** .

Example:
 ```c
 createFile("C:example.txt");
 ``` 
### writeFile
Empties file before writing content to file.\
Creates the file if it doesn't exist.
Takes two arguments: **char \*fileName , char \*content** .

Example:
 ```c
 writeFile("C:example.txt", "Hello, world!");
 ```

### appendFile
Append content to end of file.\
Takes two arguments: **char \*fileName , char \*content** .

Example:
 ```c
 appendFile("C:example.txt", "Hello, world!");
 ```

### emptyFile
Empties a file.\
Takes one argument: **char \*fileName**
Example:
```c
emptyFile("C:example.txt");
```

### readFile
Returns content of a file as char[ ]\
Takes one argument: **char \*fileName**
Example:
```c
char *content = readFile("C:example.txt")
```

### fileExists
Boolean that returns if the file specified exists.\
Takes one argument: **char \*fileName**
Example:
```c
if (fileExists("C:example.txt")) {
    //...
}
```