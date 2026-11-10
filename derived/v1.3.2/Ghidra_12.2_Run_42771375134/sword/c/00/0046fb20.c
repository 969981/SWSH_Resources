/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046fb20; name: FUN_0046fb20
 */


long * FUN_0046fb20(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
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
        uVar9 = *(ulong *)(lVar7 + (long)iVar2 * 0x30 + 0x28);
        if (param_2 > uVar9 || uVar9 == param_2) break;
        iVar8 = iVar2 + -1;
        if (iVar8 < iVar5) goto LAB_0046fb94;
      }
      if (param_2 <= uVar9) {
        return (long *)(lVar7 + (long)iVar2 * 0x30);
      }
      iVar5 = iVar2 + 1;
    } while (iVar5 <= iVar8);
  }
LAB_0046fb94:
  if ((lVar7 == 0) || (lVar7 + (long)iVar5 * 0x30 == 0)) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 <= uVar1) {
      uVar9 = FUN_0046fe30(param_1,1);
      if ((uVar9 & 1) == 0) {
        return (long *)0x0;
      }
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar6 <= uVar1) {
      return (long *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    plVar4 = (long *)(*param_1 + (ulong)uVar1 * 0x30);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar7 = *param_1 + (ulong)uVar1 * 0x30;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0x10) = 0;
    puVar3 = PTR_DAT_02713190;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *plVar4 = (long)(puVar3 + 0x10);
  }
  else {
    plVar4 = (long *)FUN_0046fc70(param_1);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  plVar4[5] = param_2;
  return plVar4;
}


