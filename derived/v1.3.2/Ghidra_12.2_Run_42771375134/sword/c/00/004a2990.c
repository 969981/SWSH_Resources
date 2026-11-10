/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a2990; name: FUN_004a2990
 */


long * FUN_004a2990(long *param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  iVar7 = 0;
  iVar10 = uVar1 - 1;
  if (-1 < iVar10) {
    do {
      while( true ) {
        iVar3 = iVar10 - iVar7;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar7 + (iVar3 >> 1);
        bVar2 = *(byte *)(lVar9 + (long)iVar3 * 0x28 + 0x20);
        if (param_2 > bVar2 || bVar2 == param_2) break;
        iVar10 = iVar3 + -1;
        if (iVar10 < iVar7) goto LAB_004a2a04;
      }
      if (param_2 <= bVar2) {
        return (long *)(lVar9 + (long)iVar3 * 0x28);
      }
      iVar7 = iVar3 + 1;
    } while (iVar7 <= iVar10);
  }
LAB_004a2a04:
  if ((lVar9 == 0) || (lVar9 + (long)iVar7 * 0x28 == 0)) {
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (uVar8 <= uVar1) {
      uVar6 = FUN_004a2ca0(param_1,1);
      if ((uVar6 & 1) == 0) {
        return (long *)0x0;
      }
      uVar8 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar8 <= uVar1) {
      return (long *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    plVar5 = (long *)(*param_1 + (ulong)uVar1 * 0x28);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar9 = *param_1 + (ulong)uVar1 * 0x28;
    *(undefined4 *)(lVar9 + 8) = 0;
    *(undefined1 *)(lVar9 + 0xc) = 0;
    puVar4 = PTR_DAT_027133b8;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *plVar5 = (long)(puVar4 + 0x10);
  }
  else {
    plVar5 = (long *)FUN_004a2ae0(param_1);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  *(byte *)(plVar5 + 4) = param_2;
  return plVar5;
}


