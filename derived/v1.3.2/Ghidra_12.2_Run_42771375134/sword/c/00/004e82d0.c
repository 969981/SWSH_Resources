/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e82d0; name: FUN_004e82d0
 */


long * FUN_004e82d0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if ((*(uint *)(param_1 + 0x40) < 8) && (uVar7 = FUN_004e6f50(param_1 + 0x28,8), (uVar7 & 1) == 0))
  {
    plVar9 = (long *)0x0;
  }
  else {
    puVar3 = PTR_DAT_02712a90;
    plVar9 = *(long **)(*(long *)(param_1 + 0x38) + 0x38);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
      if (plVar9 != (long *)0x0) {
        *plVar9 = (long)(PTR_DAT_02713758 + 0x10);
        plVar9[1] = 0;
        puVar4 = PTR_DAT_02713628;
        lVar8 = *(long *)(PTR_DAT_02713628 + 8);
        plVar9[2] = 0;
        plVar9[3] = lVar8;
        plVar1 = (long *)(puVar4 + 0x10);
        if (*(long *)(puVar4 + 0x10) != 0) {
          plVar1 = (long *)(lVar8 + 0x10);
        }
        *plVar1 = (long)plVar9;
        *(long **)(puVar4 + 8) = plVar9;
        puVar5 = PTR_DAT_02713760;
        *(int *)puVar4 = *(int *)puVar4 + 1;
        *plVar9 = (long)(puVar5 + 0x10);
        *(long **)(*(long *)(param_1 + 0x38) + 0x38) = plVar9;
        plVar9[1] = param_1;
        iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_1 + 0x48));
        if (iVar6 != 1) {
          uVar2 = *(undefined4 *)puVar3;
          (**(code **)*plVar9)(plVar9);
          FUN_00404870(uVar2,plVar9);
          plVar9 = (long *)0x0;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38) = 0;
        }
      }
    }
  }
  return plVar9;
}


