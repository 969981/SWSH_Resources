/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00682c00; name: FUN_00682c00
 */


undefined8 FUN_00682c00(long *param_1,long param_2,long param_3)

{
  (**(code **)(*param_1 + 0x48))();
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_3;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  return 1;
}


