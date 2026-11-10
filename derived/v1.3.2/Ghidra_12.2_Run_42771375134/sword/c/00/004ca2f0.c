/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca2f0; name: FUN_004ca2f0
 */


undefined1  [16] FUN_004ca2f0(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  if (*param_1 == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  plVar1 = *(long **)(*param_1 + 0x80);
  if (plVar1 == (long *)0x0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  auVar2._0_8_ = (**(code **)(*plVar1 + 0x108))();
  if (auVar2._0_8_ == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  auVar2._8_8_ = param_1[1];
  return auVar2;
}


