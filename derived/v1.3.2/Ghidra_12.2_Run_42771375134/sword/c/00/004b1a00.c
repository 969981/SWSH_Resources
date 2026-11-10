/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1a00; name: FUN_004b1a00
 */


long * FUN_004b1a00(undefined4 param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_004635c0(plVar4,param_1);
  *plVar4 = (long)(PTR_DAT_02713438 + 0x10);
  puVar3 = PTR_DAT_02712ae8;
  plVar4[3] = 0;
  plVar4[4] = 0;
  lVar7 = *(long *)puVar3;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x70));
  uVar5 = *(uint *)(lVar7 + 0x98);
  plVar1 = (long *)(lVar7 + 0x90);
  if ((uVar5 == 0) ||
     (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0xa0)), DAT_01d4bee0 < fVar8 / (float)uVar5)
     ) {
    FUN_004354d0(plVar1);
    uVar5 = *(uint *)(lVar7 + 0x98);
    if (uVar5 == 0) goto LAB_004b1adc;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = *(uint *)(plVar4 + 2) / uVar5;
  }
  lVar6 = (ulong)(*(uint *)(plVar4 + 2) - uVar2 * uVar5) * 8;
  plVar4[1] = *(long *)(*plVar1 + lVar6);
  *(long **)(*plVar1 + lVar6) = plVar4;
  *(int *)(lVar7 + 0xa0) = *(int *)(lVar7 + 0xa0) + 1;
LAB_004b1adc:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x70));
  return plVar4;
}


