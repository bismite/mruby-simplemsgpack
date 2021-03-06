#include <mruby/msgpack.h>

static mrb_value
mrb_msgpack_test_pack(mrb_state *mrb, mrb_value self)
{
  return mrb_msgpack_pack(mrb, mrb_str_new_lit(mrb, "hallo"));
}

static mrb_value
mrb_msgpack_test_unpack(mrb_state *mrb, mrb_value self)
{
  mrb_value hallo;
  mrb_get_args(mrb, "S", &hallo);

  return mrb_msgpack_unpack(mrb, hallo);
}

void
mrb_mruby_simplemsgpack_gem_test(mrb_state *mrb)
{
  struct RClass *msgpack_test = mrb_define_module(mrb, "MessagePackTest");
  mrb_define_module_function(mrb, msgpack_test, "test_pack", mrb_msgpack_test_pack, MRB_ARGS_NONE());
  mrb_define_module_function(mrb, msgpack_test, "test_unpack", mrb_msgpack_test_unpack, MRB_ARGS_REQ(1));
}
