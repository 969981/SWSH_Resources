/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e2eb0; name: FUN_007e2eb0
 */


undefined1  [16] FUN_007e2eb0(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte *__s2;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar8 = 0;
    uVar10 = *(ulong *)(param_1 + 0xf8);
  }
  else {
    uVar8 = 0;
    pbVar6 = __s2;
    do {
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 * 5 + (ulong)bVar5;
      bVar5 = *pbVar6;
    } while (bVar5 != 0);
    uVar10 = *(ulong *)(param_1 + 0xf8);
  }
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar9 = uVar11 & uVar8;
      plVar7 = *(long **)(*(long *)(param_1 + 0xf0) + uVar9 * 8);
    }
    else {
      uVar9 = uVar8;
      if (uVar10 <= uVar8) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar8 / uVar10;
        }
        uVar9 = uVar8 - uVar9 * uVar10;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0xf0) + uVar9 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar11 & uVar10) == 0) {
        do {
          uVar10 = plVar7[1];
          if (uVar8 != uVar10 && (uVar10 & uVar11) != uVar9) break;
          if ((uVar8 == uVar10) && (iVar2 = strcmp((char *)plVar7[2],(char *)__s2), iVar2 == 0))
          goto LAB_007e2fec;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar7[1];
          if (uVar8 == uVar11) {
            iVar2 = strcmp((char *)plVar7[2],(char *)__s2);
            if (iVar2 == 0) goto LAB_007e2fec;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar1 * uVar10;
            }
            if (uVar11 != uVar9) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  lVar3 = 0;
  lVar4 = 0;
LAB_007e2fd8:
  auVar12._8_8_ = lVar4;
  auVar12._0_8_ = lVar3;
  return auVar12;
LAB_007e2fec:
  lVar3 = plVar7[3];
  lVar4 = plVar7[4];
  goto LAB_007e2fd8;
}


