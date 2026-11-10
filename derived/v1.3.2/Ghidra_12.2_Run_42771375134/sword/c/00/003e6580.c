/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e6580; name: FUN_003e6580
 */


void FUN_003e6580(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  
  FUN_00190b50(param_1 + 0x1188);
  lVar1 = *(long *)(param_1 + 0x1120);
  FUN_00190b50(lVar1 + 0x20,param_2);
  if ((*(uint *)(lVar1 + 0x3c) & 0x7fffffff) < param_3) {
    FUN_001ed4d0(lVar1 + 0x30,param_3);
  }
  lVar1 = *(long *)(param_1 + 0x1118);
  FUN_00190b50(lVar1 + 0x20,param_2);
  if ((*(uint *)(lVar1 + 0x3c) & 0x7fffffff) < param_3) {
    FUN_001ed4d0(lVar1 + 0x30,param_3);
    return;
  }
  return;
}


