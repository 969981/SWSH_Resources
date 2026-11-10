/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499180; name: FUN_00499180
 */


long * FUN_00499180(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((*(uint *)(param_1 + 0x40) < 5) && (uVar6 = FUN_004e6f50(param_1 + 0x28,5), (uVar6 & 1) == 0))
  {
    plVar8 = (long *)0x0;
  }
  else {
    puVar4 = PTR_DAT_02712a90;
    plVar8 = *(long **)(*(long *)(param_1 + 0x38) + 0x20);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
      if (plVar8 != (long *)0x0) {
        *plVar8 = (long)(PTR_DAT_02713350 + 0x10);
        plVar8[1] = 0;
        puVar1 = PTR_DAT_02713358;
        lVar7 = *(long *)(PTR_DAT_02713358 + 8);
        plVar8[2] = 0;
        plVar8[3] = lVar7;
        plVar2 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar2 = (long *)(lVar7 + 0x10);
        }
        *plVar2 = (long)plVar8;
        *(long **)(puVar1 + 8) = plVar8;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_02713360 + 0x10;
        plVar8[4] = 0;
        plVar8[5] = 0;
        *plVar8 = (long)puVar1;
        *(long **)(*(long *)(param_1 + 0x38) + 0x20) = plVar8;
        plVar8[1] = param_1;
        iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x48));
        if (iVar5 != 1) {
          uVar3 = *(undefined4 *)puVar4;
          (**(code **)*plVar8)(plVar8);
          FUN_00404870(uVar3,plVar8);
          plVar8 = (long *)0x0;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = 0;
        }
      }
    }
  }
  return plVar8;
}


