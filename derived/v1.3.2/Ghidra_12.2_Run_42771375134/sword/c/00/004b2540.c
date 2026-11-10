/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b2540; name: FUN_004b2540
 */


long * FUN_004b2540(long *param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar6 = (**(code **)(*param_1 + 0x78))();
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
    puVar2 = PTR_DAT_02712a90;
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
        if ((int)plVar7[7] == param_2) {
          return plVar7;
        }
      }
    }
    plVar7 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    puVar1 = PTR_DAT_02713448 + 0x10;
    *plVar7 = (long)puVar1;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)param_1;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    puVar3 = PTR_DAT_02712b68;
    *(int *)(plVar7 + 7) = param_2;
    *(undefined4 *)((long)plVar7 + 0x3c) = 0;
    *(undefined1 *)(plVar7 + 8) = 0;
    iVar4 = FUN_004b4700(*(undefined8 *)puVar3,param_2,plVar7);
    if (iVar4 == 1) {
      plVar8 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
      if (*plVar8 == 0) {
        *plVar8 = (long)plVar7;
        plVar7[2] = 0;
      }
      else {
        plVar7[2] = *plVar8;
        *plVar8 = (long)plVar7;
      }
      uVar5 = FUN_004b5330(*(undefined8 *)puVar3,param_2);
      *(undefined4 *)((long)plVar7 + 0x3c) = uVar5;
      if ((param_3 & 1) == 0) {
        return plVar7;
      }
      FUN_004b2040(param_1);
      return plVar7;
    }
    uVar5 = *(undefined4 *)puVar2;
    *plVar7 = (long)puVar1;
    if (plVar7[5] != 0) {
      *(undefined4 *)(plVar7 + 6) = 0;
      FUN_00404870(*(undefined4 *)puVar2);
      plVar7[5] = 0;
      *(undefined4 *)((long)plVar7 + 0x34) = 0;
    }
    if (plVar7[4] != 0) {
      FUN_00404870(*(undefined4 *)puVar2);
    }
    plVar7[4] = 0;
    FUN_00404870(uVar5,plVar7);
  }
  return (long *)0x0;
}


