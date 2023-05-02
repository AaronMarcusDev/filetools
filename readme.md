# Filetools

A library for easy cross-platform file management in C.

## Commands
- **createFile**
- **writeFile**
- **appendFile**
- **emptyFile**
- **readFile**
- **fileExists**
- **deleteFile**

### createFile
Creates an empty file.\
Takes one argument:  **char \*fileName** .

Example:
 ```c
 createFile("example.txt");
 ``` 
### writeFile
Empties file before writing content to file.\
Creates the file if it doesn't exist.
Takes two arguments: **char \*fileName , char \*content** .

Example:
 ```c
 writeFile("example.txt", "Hello, world!");
 ```

### appendFile
Append content to end of file.\
Takes two arguments: **char \*fileName , char \*content** .

Example:
 ```c
 appendFile("example.txt", "Hello, world!");
 ```

### emptyFile
Empties a file.\
Takes one argument: **char \*fileName**

Example:
```c
emptyFile("example.txt");
```

### readFile
Returns content of a file as char[ ]\
Takes one argument: **char \*fileName**

Example:
```c
char *content = readFile("example.txt");
```

### fileExists
Boolean that returns if the file specified exists.\
Takes one argument: **char \*fileName**

Example:
```c
if (fileExists("example.txt")) {
    // ...
}
```

### deleteFile
Deletes file and returns the result, true or false, a Boolean.
Takes one argument: **char \*fileName**

Example:
```c
deleteFile("example.txt")
```

or

```c
if (deleteFile("example.txt")) {
    // ...
}
```