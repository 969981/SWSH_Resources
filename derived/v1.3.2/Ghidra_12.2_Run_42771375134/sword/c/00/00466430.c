/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466430; name: FUN_00466430
 */


void FUN_00466430(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = lVar3;
    do {
      plVar1 = *(long **)(lVar4 + 0x10);
      if (((plVar1 != (long *)0x0) && (plVar1[0xe] != 0)) && (0 < *(short *)(plVar1[0xe] + 0x90))) {
        (**(code **)(*plVar1 + 0x180))(plVar1,param_2 & 1);
        lVar3 = *(long *)(param_1 + 0x18);
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar3 + (ulong)uVar2 * 0x30);
  }
  return;
}


