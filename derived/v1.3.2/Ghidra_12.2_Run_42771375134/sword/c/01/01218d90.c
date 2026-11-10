/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218d90; name: FUN_01218d90
 */


void FUN_01218d90(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  lVar2 = *(long *)(param_1 + 0xa8);
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
  if (*(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0xa8) * 0x28 == lVar3) {
    FUN_0121b1a0("add updated record",param_2);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
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
    if ((*(long *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x48) * 0x28 == lVar3) &&
       (*(ulong *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x50))) {
      FUN_01219330(param_1,param_2);
      return;
    }
  }
  return;
}


