# 02_Variable, Object, Type, value

Starter repo for CTCH 1330 assignment: `02-object-type-value-variable-ghId` generated when accepting accsignment from BlackBoard. 

# Assignment spec

Compile executable `bin/class_roster`. ???When executed, this program should produce exact console output
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

# Instructional demo 

## Object, Type, Value and Variable

Sample app: classroom roster entry

Input / output exmamples


|  | int (4 bytes)  |  |
| -- | -- | -- |
| age | <span style="color:#0099ff">0x0077FF<br />1010000</span> | `cout << age;`<br />80 |


|  | char  |  |
| -- | -- | -- |
| initial | <span style="color:#0099ff">0x0077FF<br />1010000</span> | `cout << letter;`<br />P |

## Primitive types

`int`, `double`, `char`, `bool`. 
<br />`string` from standard library.

We'll see complex, user defined types.

## Variable

- declaration: name and type
- definition: memory allocation
- initiation: assgning initial value

`int age;` // declaration and definition
<br />`age = 12;` // initiation
<br />`int age = 12;` // a common practice. 

### Naming

Naming rules
- name starts with a letter and contains only letters, digits, and underscores
- C++ is casesensitive
- can't use [keywords](https://en.cppreference.com/w/cpp/keyword)

Naming is important! 

Naming conventions, [Google C++ style guide](https://google.github.io/styleguide/cppguide.html).

## Values

Literals (supplied from source code): `"Giorgi"`, `12`, `3.14`, `true`
<br />vs 
<br />supplied at runtime from various sources: user input, calculated from other existing values, web services, external libraries, etc.

## Operations and operators

Unary, binary operators. Take input, modify it and/or produce output. Math ops, logical ops, others.

Operators are type aware. Results are type dependens

`2 + 3 = 5`

`"2" + "3" = "23"`

`2 + "3"` compiler error. "*Fail fast*".

On the other hand `cout << 2` and `cout << "2"` both work. This is an example of overloading.

### Composite assignments

`n++` incrementing. See research suggestion at *BlackBoard > Discussions*: `n++` vs `++n`.

`n+=2`, read *operators left to right*, that is
- do `+` first, that is, perform `n+2`
- do `=` next, that is take left `n`, take output of previous step `n+2` on the right, ends up `n=n+2`

eg for <br/>
`n=1` <br/>
`n+=2` <br/>
`cout << n` will produce `3`

## Conversion, casting

Widening conversion. Implicit.
<br />`char initial = 'a';`
<br />`int age = initial;`

Narrowing conversion, to be avoided.
<br />`int count = 99999999;`
<br />`char initial = age;`

## Consequences of typing
- not any value fits in any object type (including function parameters and returns)
- the same operation behaves differently with different types, and alltogether fails when not applicable

Side discussion: **a chalenge of complexity**. 
<br />Best practices: DRY, KISS, SOLID, OOP, design patterns, clean code, unit testing... the list goes on. 
<br />Does strong static typing help?
