
from gggg import *

a = Assignment(10, 4)
s = State(a)

horizontal_rule()

s.reject_if_file_unchanged('main.cc',
                           '1db985de0c2084ba48411ecaeaa21ce7607e00af2c1fb3739cb7b152f8fc5451')

s.reject_if_file_changed('tools/settings/unittest.cc',
                         'c89ec554207fd662e5d7e1a3b65fe155c24b38b8e805ddf43dc2505637be5f45')

s.gtest_run('tools/output/unittest')
s.gtest_suite_test('BubbleImageTest', 8)

s.clang_tidy_run("main.cc", "main")
s.clang_tidy_check(1)

s.clang_format_run(["main.cc", "bubble.cc", "bubble.h"])
s.clang_format_check(1)

s.summarize()