A simple program to verify whether Folly dependencies have been properly
propagated in the Folly package for GNU Guix. The check is performed by
importing all Folly header files, while excluding a subset of problematic
imports.
