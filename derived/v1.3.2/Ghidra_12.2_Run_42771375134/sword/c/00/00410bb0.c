/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00410bb0; name: FUN_00410bb0
 */


long * FUN_00410bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (((int)param_2 != 0) &&
     (plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0),
     plVar3 != (long *)0x0)) {
    lVar5 = *(long *)(param_1 + 0x60);
    plVar4 = (long *)(**(code **)(*plVar3 + 0x260))
                               (plVar3,param_1,*(undefined8 *)(lVar5 + 0x30),lVar5 + 0x18,
                                *(undefined1 *)(lVar5 + 0x38));
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (plVar4 != (long *)0x0) {
      return plVar4;
    }
  }
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x90);
  if (plVar3 != (long *)0x0) {
    FUN_00419240(plVar3,param_1);
    puVar1 = PTR_DAT_02712bb0;
    *(undefined1 *)((long)plVar3 + 0x8c) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[5] = (long)(puVar1 + 0x168);
    plVar3[3] = (long)(puVar1 + 0x140);
    *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
    lVar5 = *(long *)(param_1 + 0x60);
    iVar2 = FUN_0040ae20(plVar3,*(undefined8 *)(lVar5 + 0x30),lVar5 + 0x18,
                         *(undefined1 *)(lVar5 + 0x38));
    if ((iVar2 == 1) && (lVar5 = FUN_004195b0(plVar3,0,0), lVar5 != 0)) {
      *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
      *(undefined1 *)((long)plVar3 + 0x8c) = 1;
      FUN_00408b50(plVar3);
    }
    else {
      FUN_00409430(plVar3);
      FUN_00408b50(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


