/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3d50; name: FUN_007e3d50
 */


undefined1  [16] FUN_007e3d50(long *param_1,long param_2,byte *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  byte *__s2;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    lVar4 = 0;
    uVar10 = param_1[1];
  }
  else {
    lVar4 = 0;
    pbVar8 = __s2;
    do {
      pbVar8 = pbVar8 + 1;
      lVar4 = lVar4 * 5 + (ulong)bVar5;
      bVar5 = *pbVar8;
    } while (bVar5 != 0);
    uVar10 = param_1[1];
  }
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar1 = lVar4 + param_2 * 0xffff;
    if ((uVar11 & uVar10) == 0) {
      uVar9 = uVar11 & uVar1;
      plVar6 = *(long **)(*param_1 + uVar9 * 8);
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
      plVar6 = *(long **)(*param_1 + uVar9 * 8);
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = 0;
      lVar7 = 0;
      goto LAB_007e3eac;
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      if ((uVar11 & uVar10) == 0) {
        do {
          uVar10 = plVar6[1];
          if (uVar1 != uVar10 && (uVar10 & uVar11) != uVar9) break;
          if (((uVar1 == uVar10) && (plVar6[2] == param_2)) &&
             (iVar3 = strcmp((char *)plVar6[3],(char *)__s2), iVar3 == 0)) goto LAB_007e3ed0;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar6[1];
          if (uVar1 == uVar11) {
            if ((plVar6[2] == param_2) &&
               (iVar3 = strcmp((char *)plVar6[3],(char *)__s2), iVar3 == 0)) goto LAB_007e3ed0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar2 * uVar10;
            }
            if (uVar11 != uVar9) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  lVar4 = 0;
  lVar7 = 0;
LAB_007e3eac:
  if ((int)lVar4 != param_4) {
    lVar4 = 0;
    lVar7 = 0;
  }
  auVar12._8_8_ = lVar7;
  auVar12._0_8_ = lVar4;
  return auVar12;
LAB_007e3ed0:
  lVar4 = plVar6[4];
  lVar7 = plVar6[5];
  goto LAB_007e3eac;
}


