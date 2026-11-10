/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e5dd0; name: FUN_004e5dd0
 */


uint * FUN_004e5dd0(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  iVar5 = 0;
  iVar8 = uVar1 - 1;
  if (-1 < iVar8) {
    do {
      while( true ) {
        iVar2 = iVar8 - iVar5;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar5 + (iVar2 >> 1);
        uVar6 = *(uint *)(lVar7 + (long)iVar2 * 0x48);
        if (param_2 > uVar6 || uVar6 == param_2) break;
        iVar8 = iVar2 + -1;
        if (iVar8 < iVar5) goto LAB_004e5e44;
      }
      if (param_2 <= uVar6) {
        return (uint *)(lVar7 + (long)iVar2 * 0x48);
      }
      iVar5 = iVar2 + 1;
    } while (iVar5 <= iVar8);
  }
LAB_004e5e44:
  if ((lVar7 == 0) || (lVar7 + (long)iVar5 * 0x48 == 0)) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 <= uVar1) {
      uVar4 = FUN_004e77a0(param_1,1);
      if ((uVar4 & 1) == 0) {
        return (uint *)0x0;
      }
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar6 <= uVar1) {
      return (uint *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (uint *)(*param_1 + (ulong)uVar1 * 0x48);
    if (puVar3 == (uint *)0x0) {
      return (uint *)0x0;
    }
    lVar7 = *param_1 + (ulong)uVar1 * 0x48;
    *(undefined4 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)(lVar7 + 0x20) = 0x13f800000;
    *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined1 *)(lVar7 + 0x40) = 0;
  }
  else {
    puVar3 = (uint *)FUN_004e75c0(param_1);
    if (puVar3 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *puVar3 = param_2;
  return puVar3;
}


