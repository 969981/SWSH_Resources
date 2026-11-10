/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043a7c0; name: FUN_0043a7c0
 */


void FUN_0043a7c0(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_78 [18];
  
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((long)param_3 + 0x34) = param_4;
  puVar2 = PTR_DAT_02712a90;
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 != (undefined8 *)0x0) {
LAB_0043a818:
    *(uint *)(puVar3 + 1) = param_2;
    *(long **)(*(long *)(param_1 + 0x60) + 0x10) = param_3;
    if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x58) = puVar3;
      *(undefined8 *)(param_1 + 0x60) = *puVar3;
      *puVar3 = 0;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      puVar6 = (undefined8 *)0x0;
      do {
        puVar5 = puVar3;
        if (param_2 < *(uint *)(puVar5 + 1)) {
          puVar3 = *(undefined8 **)(param_1 + 0x60);
          if (puVar6 != (undefined8 *)0x0) goto LAB_0043a888;
          *(undefined8 **)(param_1 + 0x50) = puVar3;
          puVar6 = puVar3;
          goto LAB_0043a890;
        }
        puVar3 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x58) = puVar3;
      puVar5 = (undefined8 *)0x0;
LAB_0043a888:
      *puVar6 = puVar3;
      puVar6 = *(undefined8 **)(param_1 + 0x60);
LAB_0043a890:
      *(undefined8 *)(param_1 + 0x60) = *puVar6;
      *puVar3 = puVar5;
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    return;
  }
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    goto LAB_0043a818;
  }
  local_78[0] = 0;
  plVar4 = (long *)param_3[1];
  if (*(short *)((long)plVar4 + 0x34) == 0x503) {
    FUN_00441d50();
    plVar4 = (long *)param_3[1];
  }
  else if (*(short *)((long)plVar4 + 0x34) != 0x403) goto LAB_0043a900;
  (**(code **)(*plVar4 + 0x58))(plVar4,local_78);
LAB_0043a900:
  FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)param_3[6]);
  (**(code **)(*(long *)param_3[1] + 0x18))();
  uVar1 = *(undefined4 *)puVar2;
  (**(code **)(*param_3 + 8))(param_3);
  FUN_00404870(uVar1,param_3);
  return;
}


