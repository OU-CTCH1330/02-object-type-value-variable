# 02_Variable, Object, Type, value

Starter repo for CTCH 1330 assignment: 01 hello world

## Assignment spec

Compile executable `hello_world`. When executed, this program should produce exact console output
> hello world

Don't forget to push your code back to GitHub.

## Steps

Below steps are just outlines of a more detailed video guide. If help needed, reach out early on.
- Open repo in CodeSpace (or equivalent local environment)
- (_optional_) Open terminal in VS Code, type
<br />``` g++ hello_world.cpp -o hello_world ```
<br />this should create file `hello_world` which can be executed from terminal with `./hello_world`
- Run test task (Menu > Terminal > RunTask): `Test with make and Expect`. This should report "<span style="color:red">Program failed tests</span>".
<br />_Alternative_: instead of relying on VS Code you can run the same build+test workflow from terminal with <br />```make test```.
- Make necessary edits in `hello_world.cpp`
- Run test task again, make sure it reports "<span style="color:green">Program passed tests</span>".
- Click on source control, stage and commit required changes, sync with GitHub
- Check in Github actions, make sure you passed test there too.

## Instructional demo 

### Objects, Types, Values

Sample app: classroom roster entry

Input / output exmamples


|  | int  |  |
| -- | -- | -- |
| age | 1010000 | 80 |


|  | char  |  |
| -- | -- | -- |
| age | 1010000 | P |

### Primitive types

`int`, `double`, `char`, `string`, `bool`

We'll see complex, user defined types.

### Consequences of typing
- not any value fits in any object type (including function parameters and returns)
- the same operation behaves differently with different types, and alltogether fails when not applicable

### Variable

- Definition
- Initiation

Naming, can't use [keywords](https://en.cppreference.com/w/cpp/keyword).

### Values

Literals (supplied from source code): `"Giorgi"`, `12`, `3.14`, `true`
<br />vs 
<br />supplied at runtime from various sources: user input, calculated from other existing values, web services, external libraries, etc.
