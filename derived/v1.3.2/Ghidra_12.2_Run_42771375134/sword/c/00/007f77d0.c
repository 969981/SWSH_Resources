/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f77d0; name: FUN_007f77d0
 */


long FUN_007f77d0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  byte *__s2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar2 = *param_2;
  __s2 = (byte *)param_2[1];
  bVar6 = *__s2;
  if (bVar6 == 0) {
    lVar5 = 0;
    uVar10 = param_1[1];
  }
  else {
    lVar5 = 0;
    pbVar8 = __s2;
    do {
      pbVar8 = pbVar8 + 1;
      lVar5 = lVar5 * 5 + (ulong)bVar6;
      bVar6 = *pbVar8;
    } while (bVar6 != 0);
    uVar10 = param_1[1];
  }
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar1 = lVar5 + lVar2 * 0xffff;
    if ((uVar11 & uVar10) == 0) {
      uVar9 = uVar11 & uVar1;
      plVar7 = *(long **)(*param_1 + uVar9 * 8);
    }
    else {
      uVar9 = uVar1;
      if (uVar10 <= uVar1) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar1 / uVar10;
        }
        uVar9 = uVar1 - uVar9 * uVar10;
      }
      plVar7 = *(long **)(*param_1 + uVar9 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar11 & uVar10) == 0) {
        do {
          uVar10 = plVar7[1];
          if (uVar1 != uVar10 && (uVar10 & uVar11) != uVar9) {
            return 0;
          }
          if (((uVar1 == uVar10) && (plVar7[2] == lVar2)) &&
             (iVar4 = strcmp((char *)plVar7[3],(char *)__s2), iVar4 == 0)) goto LAB_007f7928;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar7[1];
          if (uVar1 == uVar11) {
            if ((plVar7[2] == lVar2) && (iVar4 = strcmp((char *)plVar7[3],(char *)__s2), iVar4 == 0)
               ) {
LAB_007f7928:
              return plVar7[4];
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar3 * uVar10;
            }
            if (uVar11 != uVar9) {
              return 0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return 0;
}


