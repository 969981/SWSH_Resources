/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210da0; name: FUN_01210da0
 */


void FUN_01210da0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0xa8) * 0x260;
  lVar4 = *(long *)(param_1 + 0xa0);
  do {
    while (uVar1 = FUN_01225fb0(lVar4), (uVar1 & 1) == 0) {
LAB_01210e30:
      lVar4 = lVar4 + 0x260;
      lVar5 = lVar5 + -0x260;
      if (lVar5 == 0) {
        return;
      }
    }
    piVar2 = (int *)FUN_01225f00(lVar4);
    if (*piVar2 != 1) {
      piVar2 = (int *)FUN_01225f00(lVar4);
      if (*piVar2 == 2) {
        uVar3 = FUN_01225e50(lVar4);
        FUN_01219240(param_1 + 0xc0,uVar3);
      }
      goto LAB_01210e30;
    }
    uVar3 = FUN_01225e50();
    FUN_01219170(param_1 + 0xc0,uVar3);
    lVar4 = lVar4 + 0x260;
    lVar5 = lVar5 + -0x260;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}


