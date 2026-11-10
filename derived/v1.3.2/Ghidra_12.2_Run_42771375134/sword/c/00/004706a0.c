/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004706a0; name: FUN_004706a0
 */


long * FUN_004706a0(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  iVar6 = 0;
  iVar9 = uVar1 - 1;
  if (-1 < iVar9) {
    do {
      while( true ) {
        iVar2 = iVar9 - iVar6;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar6 + (iVar2 >> 1);
        uVar7 = *(uint *)(lVar8 + (long)iVar2 * 0x30 + 0x28);
        if (param_2 > uVar7 || uVar7 == param_2) break;
        iVar9 = iVar2 + -1;
        if (iVar9 < iVar6) goto LAB_00470714;
      }
      if (param_2 <= uVar7) {
        return (long *)(lVar8 + (long)iVar2 * 0x30);
      }
      iVar6 = iVar2 + 1;
    } while (iVar6 <= iVar9);
  }
LAB_00470714:
  if ((lVar8 == 0) || (lVar8 + (long)iVar6 * 0x30 == 0)) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar7 <= uVar1) {
      uVar5 = FUN_004709b0(param_1,1);
      if ((uVar5 & 1) == 0) {
        return (long *)0x0;
      }
      uVar7 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar7 <= uVar1) {
      return (long *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    plVar4 = (long *)(*param_1 + (ulong)uVar1 * 0x30);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar8 = *param_1 + (ulong)uVar1 * 0x30;
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined1 *)(lVar8 + 0x10) = 0;
    puVar3 = PTR_DAT_027131b0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *plVar4 = (long)(puVar3 + 0x10);
  }
  else {
    plVar4 = (long *)FUN_004707f0(param_1);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  *(uint *)(plVar4 + 5) = param_2;
  return plVar4;
}


