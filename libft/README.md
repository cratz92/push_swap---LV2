# LIBFT

### Your very first own library


## Chapter I - Introduction

C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project gives you the opportunity to re-write those functions,
understand them, and learn to use them. This library will help you for all your future C
projects.

Through this project, we also give you the opportunity to expand the list of functions
with your own. Take the time to expand your libft throughout the year.



## Chapter II - Common Instructions

* Your project must be written in accordance with the Norm. If you have bonus
files/functions, they are included in the norm check and you will receive a 0 if there
is a norm error inside.

* Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, your project will be
considered non functional and will receive a 0 during the evaluation.

* All heap allocated memory space must be properly freed when necessary. No leaks
will be tolerated.

* If the subject requires it, you must submit a Makefile which will compile your
source files to the required output with the flags -Wall, -Wextra and -Werror, and
your Makefile must not relink.

* Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
re.

* To turn in bonuses to your project, you must include a rule bonus to your Makefile,
which will add all the various headers, librairies or functions that are forbidden on
the main part of the project. Bonuses must be in a different file _bonus.{c/h}.
Mandatory and bonus part evaluation is done separately.

* If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.

* We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defence. Indeed, during defence, you are free to use your tests
and/or the tests of the peer you are evaluating.

* Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during
Deepthought’s grading, the evaluation will stop.



## Chapter III - Mandatory part

| **Program name**  | libft.a |
| :--- | :---:|
| **Turn in files** | *.c, libft.h, Makefile |
| **Makefile** | Yes |
| **External functs.** | Detailed below |
| **Libft authorized** | Non-applicable |
| **Description** | Write your own library, containing an extract of important functions for your cursus. |


#### Technical considerations

* It is forbidden to use global variables.

* If you need subfunctions to write a complex function, you should define these subfunctions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.

* Submit all files in the root of your repository.

* It is forbidden to submit unused files.

* Every .c must compile with flags.

* You must use the command ar to create your librairy, using the command libtool is forbidden.


#### Libc functions

In this first part, you must re-code a set of the libc functions, as defined in their
man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.


#### Additional functions

In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form. Some of these functions can be useful to write Part
1’s functions.



## Chapter IV - Bonus Part

If you successfully completed the mandatory part, you’ll enjoy taking it further. You can
see this last section as Bonus Points.

Having functions to manipulate memory and strings is very useful, but you’ll soon
discover that having functions to manipulate lists is even more useful.

You’ll use the following structure to represent the elements of your list. This structure
must be added to your libft.h file.

make bonus will add the bonus functions to the libft.a library.

You do not have to add _bonus to the .c files and the header in this part. Only add
_bonus to the files containing your own bonus functions


```c
typedef struct  s_list
{
  void          *content;
  struct s_list *next;
}               t_list;

```

Here is a description of the fields of the t_list struct:

  * content : The data contained in the element. The void * allows to store any kind
of data.

  * next : The next element’s address or NULL if it’s the last element

You are free to add any function to your libft as you see fit.


## Evaluation

Tested with Tripouille, jtoty and alelievr auto-tests.
In accordance with the Norm v3

**Final Grade: 115/100 

