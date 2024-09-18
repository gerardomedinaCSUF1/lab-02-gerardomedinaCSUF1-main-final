
from gggg import *

a = Assignment(12, 4)
s = State(a)

horizontal_rule()

s.reject_if_file_unchanged('main.cc',
                           '84b59267581855b90c8d5c928e7ae16c177d58220cdb9564f00d01eb06feaa22')
s.reject_if_file_unchanged('rectangle.cc',
                           '74337854a87a50e0a0536250e36d44ac985961d929173d8f61b90e32e6ee67e1')
                           
s.reject_if_file_changed('tools/settings/unittest.cc',
                         'de6374af65efd24eded67d91473c125cfe56224043b6b64e1fa4c8d8c78cf192')

s.gtest_run('tools/output/unittest')
s.gtest_suite_test('Rectangle', 3)
s.gtest_suite_test('UserInput', 4)
s.gtest_suite_test('Driver', 3)

s.clang_tidy_run("main.cc", "main")
s.clang_tidy_check(1)

s.clang_format_run(["main.cc", "rectangle.cc", "rectangle.h"])
s.clang_format_check(1)

s.summarize()