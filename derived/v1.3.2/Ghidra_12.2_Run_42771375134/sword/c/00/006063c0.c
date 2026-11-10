/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006063c0; name: FUN_006063c0
 */


void FUN_006063c0(long param_1,long *param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar12;
  long *plVar11;
  
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    sVar1 = *(short *)(param_1 + 2);
    if ((long)sVar1 == 0) {
      lVar10 = 0;
      lVar3 = 0;
      lVar5 = 0;
      lVar7 = 0;
    }
    else {
      plVar8 = *(long **)(param_1 + 8);
      lVar5 = *plVar8;
      lVar3 = plVar8[1];
      if (sVar1 < 2) {
        lVar7 = lVar3;
        lVar10 = lVar5;
      }
      else {
        lVar2 = lVar3;
        lVar4 = lVar5;
        lVar6 = lVar3;
        lVar9 = lVar5;
        plVar11 = plVar8 + 2;
        do {
          plVar12 = plVar11 + 2;
          lVar10 = *plVar11;
          lVar7 = plVar11[1];
          lVar5 = lVar10;
          if (lVar4 <= lVar10) {
            lVar5 = lVar4;
          }
          if (lVar10 <= lVar9) {
            lVar10 = lVar9;
          }
          lVar3 = lVar7;
          if (lVar2 <= lVar7) {
            lVar3 = lVar2;
          }
          if (lVar7 <= lVar6) {
            lVar7 = lVar6;
          }
          lVar2 = lVar3;
          lVar4 = lVar5;
          lVar6 = lVar7;
          lVar9 = lVar10;
          plVar11 = plVar12;
        } while (plVar12 < plVar8 + (long)sVar1 * 2);
      }
    }
    *param_2 = lVar5;
    param_2[1] = lVar3;
    param_2[2] = lVar10;
    param_2[3] = lVar7;
  }
  return;
}


