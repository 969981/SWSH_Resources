/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7080; name: FUN_014c7080
 */


void FUN_014c7080(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_3 * 0x18);
  if (((param_4 & 0xffff) != 0) && (iVar2 = FUN_0077d480(uVar6), iVar2 != 0)) {
    cVar1 = FUN_008d3750();
    lVar3 = FUN_0077d470(uVar6);
    psVar7 = (short *)(lVar3 + -2);
    do {
      psVar7 = psVar7 + 1;
      if (*psVar7 == 0) break;
    } while (9 < (ushort)(*psVar7 - 0x30U));
    uVar4 = FUN_0077d480(uVar6);
    lVar3 = FUN_0077d470(uVar6);
    lVar8 = (long)psVar7 - lVar3 >> 1;
    lVar9 = (uVar4 & 0xffffffff) - lVar8;
    lVar3 = 4;
    if (cVar1 == '\a') {
      lVar3 = 5;
    }
    if (lVar3 <= lVar9) {
      for (psVar5 = (short *)FUN_0077d470(uVar6); psVar5 < psVar7; psVar5 = psVar5 + 1) {
        if (*psVar5 == 0x10) {
          return;
        }
        FUN_0077d5c0(param_2);
      }
      if (0 < lVar9) {
        lVar8 = ((uVar4 & 0xffffffff) - 1) - lVar8;
        do {
          if (*psVar5 == 0x10) {
            return;
          }
          FUN_0077d5c0(param_2);
          psVar5 = psVar5 + 1;
          if ((lVar8 != 0) && (lVar8 % 3 == 0)) {
            FUN_0077d5c0(param_2,param_4);
          }
          lVar3 = lVar8 + 1;
          lVar8 = lVar8 + -1;
        } while (1 < lVar3);
      }
      return;
    }
  }
  FUN_0077d560(param_2,uVar6);
  return;
}


