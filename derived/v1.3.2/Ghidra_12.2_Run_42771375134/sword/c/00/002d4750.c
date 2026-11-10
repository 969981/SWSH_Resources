/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d4750; name: FUN_002d4750
 */


long FUN_002d4750(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 auStack_1840 [2048];
  undefined1 auStack_1040 [4096];
  
  if ((param_2 != 0) && (0 < (int)param_3)) {
    uVar1 = *(uint *)(param_1 + 8) & 0x7fffffff;
    if (uVar1 != param_3) {
      if (uVar1 < param_3) {
        FUN_002d4660(param_1,param_3);
      }
      *(uint *)(param_1 + 8) = param_3 | 0x80000000;
    }
    *(undefined1 **)(param_1 + 0x20) = auStack_1040;
    *(undefined1 **)(param_1 + 0x28) = auStack_1840;
    FUN_002d48d0(param_1,param_2,param_3,param_4);
  }
  return param_1;
}


