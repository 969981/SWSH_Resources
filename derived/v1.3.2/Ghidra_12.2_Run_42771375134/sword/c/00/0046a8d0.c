/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046a8d0; name: FUN_0046a8d0
 */


long * FUN_0046a8d0(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  if (param_2 == 1) {
    plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x78);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_004635c0(plVar4,param_1);
    *(undefined1 *)(plVar4 + 9) = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    puVar1 = PTR_DAT_02713138 + 0x10;
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[7] = (long)puVar1;
    plVar4[8] = 0;
    *(undefined1 *)(plVar4 + 0xe) = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (long)(PTR_DAT_02713148 + 0x10);
    *(undefined4 *)(plVar4 + 3) = 1;
  }
  else {
    if (param_2 != 0) {
      return (long *)0x0;
    }
    plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x78);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_004635c0(plVar4,param_1);
    *(undefined1 *)(plVar4 + 9) = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[7] = (long)(PTR_DAT_02713138 + 0x10);
    plVar4[8] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined1 *)(plVar4 + 0xe) = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    *plVar4 = (long)(PTR_DAT_02713140 + 0x10);
    *(undefined4 *)(plVar4 + 3) = 0;
  }
  lVar7 = *(long *)PTR_DAT_02712ae8;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x188));
  uVar5 = *(uint *)(lVar7 + 0x1b0);
  plVar2 = (long *)(lVar7 + 0x1a8);
  if ((uVar5 == 0) ||
     (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x1b8)), DAT_01d4bee0 < fVar8 / (float)uVar5
     )) {
    FUN_004354d0(plVar2);
    uVar5 = *(uint *)(lVar7 + 0x1b0);
    if (uVar5 == 0) goto LAB_0046aa48;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = *(uint *)(plVar4 + 2) / uVar5;
  }
  lVar6 = (ulong)(*(uint *)(plVar4 + 2) - uVar3 * uVar5) * 8;
  plVar4[1] = *(long *)(*plVar2 + lVar6);
  *(long **)(*plVar2 + lVar6) = plVar4;
  *(int *)(lVar7 + 0x1b8) = *(int *)(lVar7 + 0x1b8) + 1;
LAB_0046aa48:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x188));
  return plVar4;
}


