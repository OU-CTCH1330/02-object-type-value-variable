# 02_Variable, Object, Type, value

Starter repo for this assignment: `02-object-type-value-variable-ghId` generated when accepting accsignment from BlackBoard link. 

# Assignment spec
Present steps are companion of a more detailed video instructions for this assignment, available in BlackBoard folder for this unit. 

This code is embrio of learning management system, think of you starting your product similar to our university *BlackBoard*. Here we deliver a feature of classroom enrollment management. 



When executed, this program should produce  console interaction as below
> Please enter student data<br />Please enter first name:<br />giorgi<br />Please enter last name:<br />shonia<br />Please enter age:<br />46<br /><br />Student data collected.<br />giorgi shonia of age: 46<br />New class size is 26<br />New class average is 23.4038<br />

Obviousely output should depend on input, it should not be hardcoded.

## Steps

- Please accept `02` assignment from *BlackBoard* link as usual. Visit generated repo `02-object-type-value-variable-yourId` on GitHub. Open Codespace.<br />Please try not to spam Codespaces. If you've created one for this repo before, it's faster and frugal to restart it from [https://github.com/codespaces](https://github.com/codespaces). Each repo expects dedicated Codespace, eg Codespace from assignment `01` is not meant to be reused for `02`.
- Please go over included source `class_roster.cpp`. It has suggestions for expected changes and completion. Please make sure program logic and I/O complies with above spec.
- Compile executable `bin/class_roster`. This can be done in number of ways, including running `Build Task` from gui (*Menu > Terminal > RunBuildTask*). Executable will be delivered in `bin` folder. You can execute this program with
> root@786f2f9df995:/workspaces/02-object-type-value-variable# <span style="color:#0099ff">bin/class_roster</span>
- Once satisfied with correctness of program run `Test` task (*Menu > Terminal > RunTask > TestWithMake*), make sure you pass.
- Stage, commit and push changes. Make sure your code passes in GitHub actions.
- If something goes off, please reach out early on, do NOT struggle. PR associated with this repo is a good place for QA.

# Instructional demo 

We'll go over these notes in unit lecture video, available in BlackBoard folder for this unit. 

## Object, Type, Value and Variable

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
