/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d47f0; name: FUN_002d47f0
 */


long FUN_002d47f0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_1830 [2048];
  undefined1 auStack_1030 [4096];
  
  if ((param_2 != 0) && (0 < (int)param_3)) {
    uVar1 = *(uint *)(param_1 + 8) & 0x7fffffff;
    if (uVar1 != param_3) {
      if (uVar1 < param_3) {
        FUN_002d4660(param_1,param_3);
      }
      *(uint *)(param_1 + 8) = param_3 | 0x80000000;
    }
    *(undefined1 **)(param_1 + 0x20) = auStack_1030;
    *(undefined1 **)(param_1 + 0x28) = auStack_1830;
    FUN_002d5840(param_1,param_2,param_3);
  }
  return param_1;
}


