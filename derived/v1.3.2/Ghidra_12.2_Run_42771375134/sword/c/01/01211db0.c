/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211db0; name: FUN_01211db0
 */


void FUN_01211db0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar5 = *(long *)(param_1 + 0xa8) * 0x260;
    lVar4 = *(long *)(param_1 + 0xa0);
    do {
      FUN_01225e50(lVar4);
      lVar1 = FUN_0121b000();
      if ((lVar1 == param_2) && (uVar2 = FUN_01226060(lVar4), (uVar2 & 1) != 0)) {
        uVar3 = FUN_01225e50(lVar4);
        FUN_01219240(param_1 + 0xc0,uVar3);
      }
      lVar4 = lVar4 + 0x260;
      lVar5 = lVar5 + -0x260;
    } while (lVar5 != 0);
  }
  return;
}


