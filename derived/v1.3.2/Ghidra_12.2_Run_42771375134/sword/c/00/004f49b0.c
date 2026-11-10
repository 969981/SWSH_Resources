/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f49b0; name: FUN_004f49b0
 */


uint * FUN_004f49b0(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  
  plVar1 = (long *)(param_1 + 0xe0);
  uVar2 = *(uint *)(param_1 + 0xe8);
  lVar8 = *plVar1;
  iVar6 = 0;
  iVar9 = uVar2 - 1;
  if (-1 < iVar9) {
    do {
      while( true ) {
        iVar3 = iVar9 - iVar6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar6 + (iVar3 >> 1);
        uVar7 = *(uint *)(lVar8 + (long)iVar3 * 0x18);
        if (param_2 > uVar7 || uVar7 == param_2) break;
        iVar9 = iVar3 + -1;
        if (iVar9 < iVar6) goto LAB_004f4a34;
      }
      if (param_2 <= uVar7) {
        return (uint *)(lVar8 + (long)iVar3 * 0x18);
      }
      iVar6 = iVar3 + 1;
    } while (iVar6 <= iVar9);
  }
LAB_004f4a34:
  if ((lVar8 == 0) || (lVar8 + (long)iVar6 * 0x18 == 0)) {
    uVar7 = *(uint *)(param_1 + 0xec);
    if (uVar7 <= uVar2) {
      uVar5 = FUN_004f50e0(plVar1,4);
      if ((uVar5 & 1) == 0) {
        return (uint *)0x0;
      }
      uVar7 = *(uint *)(param_1 + 0xec);
    }
    if (uVar7 <= uVar2) {
      return (uint *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0xe8) = uVar2 + 1;
    puVar4 = (uint *)(*plVar1 + (ulong)uVar2 * 0x18);
    if (puVar4 == (uint *)0x0) {
      return (uint *)0x0;
    }
    lVar8 = *plVar1 + (ulong)uVar2 * 0x18;
    *puVar4 = 0;
    *(undefined8 *)(lVar8 + 4) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
  }
  else {
    puVar4 = (uint *)FUN_004f4fc0(plVar1);
    if (puVar4 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *puVar4 = param_2;
  return puVar4;
}


