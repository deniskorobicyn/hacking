TEMPLATE = subdirs
SUBDIRS = app
SUBDIRS += factorial
SUBDIRS += catch
SUBDIRS += cpp_unit
catch.depends = app
catch.depends = factorial
cpp_unit.depends = app
cpp_unit.depends = factorial