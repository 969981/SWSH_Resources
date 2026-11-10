/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005efe80; name: FUN_005efe80
 */


void FUN_005efe80(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02714338 + 0x10);
  if ((long *)param_1[0x8e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8e] + 0x18))();
    param_1[0x8e] = 0;
  }
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x18))();
    param_1[0x8d] = 0;
  }
  FUN_005efef0(param_1 + 0x17);
  FUN_0067a4f0(param_1);
  return;
}


