/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455390; name: FUN_00455390
 */


void FUN_00455390(undefined8 param_1,long param_2,int param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *local_78;
  ulong uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  
  plVar4 = (long *)0x0;
  if (param_6 == 0) {
    plVar4 = (long *)(param_2 + 0x100);
  }
  plVar1 = (long *)(param_2 + 0x128);
  if (param_6 != 5) {
    plVar1 = plVar4;
  }
  plVar4 = (long *)*plVar1;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4;
    do {
      if ((int)plVar6[1] == param_3) {
        plVar6 = plVar6 + 2;
        goto LAB_004554b0;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    do {
      if ((int)plVar4[1] == param_3) goto LAB_004554a0;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  plVar6 = plVar1 + 2;
  plVar4 = (long *)*plVar6;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar4[2] = (long)(PTR_DAT_02713048 + 0x10);
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    puVar5 = (undefined8 *)plVar1[1];
  }
  else {
    puVar5 = (undefined8 *)plVar1[1];
  }
  if (puVar5 == (undefined8 *)0x0) {
    *plVar1 = (long)plVar4;
  }
  else {
    *puVar5 = plVar4;
    plVar4 = (long *)*plVar6;
  }
  plVar1[1] = (long)plVar4;
  plVar1[2] = *plVar4;
  *plVar4 = 0;
  *(int *)((long)plVar1 + 0x24) = *(int *)((long)plVar1 + 0x24) + 1;
  plVar4 = (long *)plVar1[1];
  *(int *)(plVar4 + 1) = param_3;
LAB_004554a0:
  plVar6 = plVar4 + 2;
  FUN_0045c7a0(plVar6,param_2);
LAB_004554b0:
  iVar2 = FUN_004a4970(param_2 + 0x150,*(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_6 * 4));
  if (iVar2 != 1) {
    return;
  }
  uStack_70 = (ulong)param_6;
  *(undefined1 *)((long)plVar6 + 0x1c) = 0;
  if (plVar6[2] != 0) {
    FUN_004be340(param_1,*(undefined8 *)PTR_DAT_02712b18,plVar6[2],uStack_70,param_4,param_5,2);
    return;
  }
  if (param_4 != 0) {
    local_68 = *(float *)(plVar6 + 3);
    fStack_64 = (float)param_1;
    if (local_68 != fStack_64) {
      local_58 = 0x101;
      local_56 = 0;
      local_78 = plVar6;
      local_60 = param_4;
      uStack_5c = param_5;
      lVar3 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_78,1,0);
      plVar6[2] = lVar3;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004555b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar6)(param_1,plVar6,uStack_70,1);
  return;
}


