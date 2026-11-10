/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01219170; name: FUN_01219170
 */


void FUN_01219170(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_0121b1a0("add online record");
  lVar3 = *(long *)(param_1 + 0x160);
  lVar2 = *(long *)(param_1 + 0x168);
  if ((lVar2 != 0) && (uVar1 = FUN_0121b130(param_2,lVar3), (uVar1 & 1) == 0)) {
    lVar4 = lVar3 + lVar2 * 0x28;
    lVar2 = lVar2 * 0x28;
    do {
      lVar2 = lVar2 + -0x28;
      if (lVar2 == 0) {
        lVar3 = lVar4;
        break;
      }
      lVar3 = lVar3 + 0x28;
      uVar1 = FUN_0121b130(param_2,lVar3);
    } while ((uVar1 & 1) == 0);
  }
  if ((*(long *)(param_1 + 0x160) + *(ulong *)(param_1 + 0x168) * 0x28 == lVar3) &&
     (*(ulong *)(param_1 + 0x168) < *(ulong *)(param_1 + 0x170))) {
    FUN_01219330(param_1 + 0x120,param_2);
    return;
  }
  return;
}


