/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211890; name: FUN_01211890
 */


void FUN_01211890(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0xa0);
  lVar3 = *(long *)(param_2 + 0xa8);
  if (lVar3 != 0) {
    uVar1 = FUN_01225e50(lVar4);
    uVar2 = FUN_0121b130(uVar1,param_3);
    if ((uVar2 & 1) == 0) {
      lVar5 = lVar4 + lVar3 * 0x260;
      lVar3 = lVar3 * 0x260;
      do {
        lVar3 = lVar3 + -0x260;
        if (lVar3 == 0) {
          lVar4 = lVar5;
          break;
        }
        lVar4 = lVar4 + 0x260;
        uVar1 = FUN_01225e50(lVar4);
        uVar2 = FUN_0121b130(uVar1,param_3);
      } while ((uVar2 & 1) == 0);
    }
  }
  lVar3 = 0;
  if (*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x260 != lVar4) {
    lVar3 = lVar4;
  }
  *param_1 = lVar3;
  return;
}


