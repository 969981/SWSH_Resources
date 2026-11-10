/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043aba0; name: FUN_0043aba0
 */


void FUN_0043aba0(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_78 [18];
  
  uVar1 = (int)param_2[2] + (*(int *)(param_1 + 0x78) - (int)param_2[3]);
  *(uint *)(param_2 + 2) = uVar1;
  puVar3 = PTR_DAT_02712a90;
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 != (undefined8 *)0x0) {
LAB_0043ac00:
    *(uint *)(puVar4 + 1) = uVar1;
    *(long **)(*(long *)(param_1 + 0x38) + 0x10) = param_2;
    if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x30) = puVar4;
      *(undefined8 *)(param_1 + 0x38) = *puVar4;
      *puVar4 = 0;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      puVar7 = (undefined8 *)0x0;
      do {
        puVar6 = puVar4;
        if (uVar1 < *(uint *)(puVar6 + 1)) {
          puVar4 = *(undefined8 **)(param_1 + 0x38);
          if (puVar7 != (undefined8 *)0x0) goto LAB_0043ac70;
          *(undefined8 **)(param_1 + 0x28) = puVar4;
          puVar7 = puVar4;
          goto LAB_0043ac78;
        }
        puVar4 = (undefined8 *)*puVar6;
        puVar7 = puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x30) = puVar4;
      puVar6 = (undefined8 *)0x0;
LAB_0043ac70:
      *puVar7 = puVar4;
      puVar7 = *(undefined8 **)(param_1 + 0x38);
LAB_0043ac78:
      *(undefined8 *)(param_1 + 0x38) = *puVar7;
      *puVar4 = puVar6;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    return;
  }
  puVar4 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar4;
    goto LAB_0043ac00;
  }
  local_78[0] = 0;
  plVar5 = (long *)param_2[1];
  if (*(short *)((long)plVar5 + 0x34) == 0x503) {
    FUN_00441d50();
    plVar5 = (long *)param_2[1];
  }
  else if (*(short *)((long)plVar5 + 0x34) != 0x403) goto LAB_0043ace8;
  (**(code **)(*plVar5 + 0x58))(plVar5,local_78);
LAB_0043ace8:
  FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)param_2[6]);
  (**(code **)(*(long *)param_2[1] + 0x18))();
  uVar2 = *(undefined4 *)puVar3;
  (**(code **)(*param_2 + 8))(param_2);
  FUN_00404870(uVar2,param_2);
  return;
}


