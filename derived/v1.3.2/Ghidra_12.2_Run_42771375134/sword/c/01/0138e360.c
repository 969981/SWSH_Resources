/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138e360; name: FUN_0138e360
 */


void FUN_0138e360(long *param_1)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1 + 0x14);
  }
  FUN_0138e3b0(param_1);
  FUN_0138e530(param_1);
  (**(code **)(*param_1 + 0x118))(param_1);
  FUN_0138e9e0(param_1);
  return;
}


