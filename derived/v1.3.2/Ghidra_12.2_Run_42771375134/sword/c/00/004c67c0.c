/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c67c0; name: FUN_004c67c0
 */


int FUN_004c67c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x278) != 0) {
    for (lVar5 = *(long *)(PTR_DAT_02713500 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x68)) {
      lVar1 = 0;
      if (*(long *)(lVar5 + 0x20) != 0) {
        lVar1 = *(long *)(lVar5 + 0x20) + -0x18;
      }
      if (*(int *)(lVar1 + 0x278) == *(int *)(lVar6 + 0x278)) {
        FUN_004dc170(lVar5,lVar6,0);
        FUN_0048d3c0(lVar6);
        return 5;
      }
    }
  }
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x390);
  if (lVar5 == 0) {
    FUN_0048d330(lVar6,1);
    iVar4 = 2;
  }
  else {
    FUN_004dab50(lVar5);
    FUN_004dac60(lVar5,*(undefined4 *)PTR_DAT_02712b38);
    iVar4 = FUN_004dc170(lVar5,lVar6,1);
    if (iVar4 == 1) {
      iVar4 = FUN_004c6270(lVar5);
      *(ushort *)((long)param_1 + 0xc) =
           *(ushort *)((long)param_1 + 0xc) & 0xfeff | (ushort)(iVar4 == 1) << 8;
    }
    else if (iVar4 == 0x3f) {
      *(undefined8 *)(lVar5 + 0x68) = 0;
      puVar3 = PTR_DAT_02713110;
      plVar2 = (long *)(PTR_DAT_02713110 + 8);
      if (*(long *)(PTR_DAT_02713110 + 8) != 0) {
        plVar2 = (long *)(*(long *)PTR_DAT_02713110 + 0x68);
      }
      *plVar2 = lVar5;
      *(long *)puVar3 = lVar5;
      iVar4 = 1;
    }
    else {
      FUN_00468b10(lVar5,iVar4 != 3);
    }
  }
  return iVar4;
}


