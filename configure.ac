#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])

AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE

AC_CONFIG_SRCDIR([main.c])

AC_CONFIG_HEADER([config.h])

AH_TEMPLATE([DD1],'')
AC_ARG_ENABLE(dd1,,AC_DEFINE([DD1],,),)

AH_BOTTOM([#include <myconfig.h>])

# Checks for programs.
AC_PROG_CXX
AC_LANG([C++])
AX_CXX_COMPILE_STDCXX_11

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_PROG_RANLIB
AC_CONFIG_FILES([Makefile lib/Makefile])
AC_OUTPUT
