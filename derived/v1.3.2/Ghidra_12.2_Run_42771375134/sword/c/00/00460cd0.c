/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00460cd0; name: FUN_00460cd0
 */


long * FUN_00460cd0(undefined4 param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x78);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_004635c0(plVar5,param_1);
  FUN_00462a90(plVar5 + 3);
  *(undefined4 *)(plVar5 + 6) = 0xffffffff;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  puVar4 = PTR_DAT_02713098;
  puVar1 = PTR_DAT_02713098 + 0x10;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *plVar5 = (long)puVar1;
  puVar1 = PTR_DAT_02712ae8;
  plVar5[3] = (long)(puVar4 + 0x50);
  lVar8 = *(long *)puVar1;
  nn::os::LockMutex((MutexType *)(lVar8 + 0x230));
  uVar6 = *(uint *)(lVar8 + 600);
  plVar2 = (long *)(lVar8 + 0x250);
  if ((uVar6 == 0) ||
     (fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x260)), DAT_01d4bee0 < fVar9 / (float)uVar6
     )) {
    FUN_004354d0(plVar2);
    uVar6 = *(uint *)(lVar8 + 600);
    if (uVar6 == 0) goto LAB_00460dcc;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = *(uint *)(plVar5 + 2) / uVar6;
  }
  lVar7 = (ulong)(*(uint *)(plVar5 + 2) - uVar3 * uVar6) * 8;
  plVar5[1] = *(long *)(*plVar2 + lVar7);
  *(long **)(*plVar2 + lVar7) = plVar5;
  *(int *)(lVar8 + 0x260) = *(int *)(lVar8 + 0x260) + 1;
LAB_00460dcc:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x230));
  return plVar5;
}


