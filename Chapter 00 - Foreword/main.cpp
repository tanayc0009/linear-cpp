/* Hi!  This is a multi-line comment.  I'm terrible at doing any kind of web
 * work, but I really wanted to make a less bad resource for learning C++
 * available online, so I decided to do what I usually do with C++: make a
 * Github repository and write C++ programs.  Just reading the programs would
 * probably be too confusing to learn the language, so I added lots of comments
 * to explain what's going on.
 *
 * Like this one.
 */

/* I decided to call this "book" Linear C++, because most people believe you
 * can't learn C++ in a linear fashion, and I disagree.  I think existing
 * resources, particularly online ones, just teach things in entirely the wrong
 * order.  They focus a lot on the low-level bits and the syntax and never show
 * you how the whole thing fits together as one language, and how you can write
 * useful programs in it with little pain.  Relatively little pain, anyway.
 */

/* I will do my best to introduce all the concepts I use properly, without
 * having to resort to claims about magic.  However, there are a few things
 * which you really do have to know first.  I expect you to have already worked
 * in another programming language and to know how arithmetic operators such as
 * +, -, *, / and comparison operators such as ==, !=, <, <=, >, >= work.  I
 * also expect you to have a vague idea of what functions, types and variables
 * are.  Finally, I'll be using C++11 features wherever they are useful, so make
 * sure your compiler can handle that.  Clang is probably the most friendly
 * compiler, but GCC or MSVC should be fine, too.
 */

/* Every chapter of the book is a correct program.  This is only the foreword,
 * but it would be a pity to make it an exception, so we'll make it a program
 * that does nothing.
 */

// This is another kind of comment.  They will be used when talking directly
// about the code present, as opposed to general remarks.

// A function called main, taking no parameters and returning an int.
int main() {
    return 0;
}

/* main is a very special function.  It is the starting point of your program,
 * and its return value can be used to report if any errors happened.  A return
 * value of 0 traditionally indicates success, and is what we will return in
 * most cases.
 */