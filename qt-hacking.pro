TEMPLATE = subdirs
SUBDIRS = test_iterators
SUBDIRS += utils
SUBDIRS += catch
SUBDIRS += cpp_unit
SUBDIRS = test_iterators utils comp_test_fw
test_iterators.depends = utils
