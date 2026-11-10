/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004397a0; name: FUN_004397a0
 */


void FUN_004397a0(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_a8 [18];
  
  puVar4 = PTR_DAT_02712ad0;
  puVar3 = PTR_DAT_02712a90;
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      while (puVar8 = puVar7, plVar6 = (long *)puVar8[2], (int)plVar6[6] == param_2) {
        local_a8[0] = 0;
        plVar5 = (long *)plVar6[1];
        if (*(short *)((long)plVar5 + 0x34) == 0x503) {
          FUN_00441d50();
          plVar5 = (long *)plVar6[1];
LAB_00439834:
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        else if (*(short *)((long)plVar5 + 0x34) == 0x403) goto LAB_00439834;
        FUN_0048fd60(*(undefined8 *)puVar4,(int)plVar6[6]);
        puVar7 = (undefined8 *)*puVar8;
        puVar1 = (undefined8 *)(param_1 + 0x28);
        if (*(undefined8 **)(param_1 + 0x28) != puVar8) {
          puVar1 = puVar9;
        }
        *puVar1 = puVar7;
        if (*(undefined8 **)(param_1 + 0x30) == puVar8) {
          *(undefined8 **)(param_1 + 0x30) = puVar9;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar8;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar6[1] + 0x18))();
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)(*plVar6 + 8))(plVar6);
        FUN_00404870(uVar2,plVar6);
        if (puVar7 == (undefined8 *)0x0) goto LAB_004398c4;
      }
      puVar7 = (undefined8 *)*puVar8;
      puVar9 = puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
LAB_004398c4:
  puVar4 = PTR_DAT_02712ad0;
  puVar3 = PTR_DAT_02712a90;
  puVar7 = *(undefined8 **)(param_1 + 0x50);
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      while (puVar8 = puVar7, plVar6 = (long *)puVar8[2], (int)plVar6[6] != param_2) {
        puVar7 = (undefined8 *)*puVar8;
        puVar9 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          return;
        }
      }
      local_a8[0] = 0;
      plVar5 = (long *)plVar6[1];
      if (*(short *)((long)plVar5 + 0x34) == 0x503) {
        FUN_00441d50();
        plVar5 = (long *)plVar6[1];
LAB_0043992c:
        (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
      }
      else if (*(short *)((long)plVar5 + 0x34) == 0x403) goto LAB_0043992c;
      FUN_0048fd60(*(undefined8 *)puVar4,(int)plVar6[6]);
      puVar7 = (undefined8 *)*puVar8;
      puVar1 = (undefined8 *)(param_1 + 0x50);
      if (*(undefined8 **)(param_1 + 0x50) != puVar8) {
        puVar1 = puVar9;
      }
      *puVar1 = puVar7;
      if (*(undefined8 **)(param_1 + 0x58) == puVar8) {
        *(undefined8 **)(param_1 + 0x58) = puVar9;
      }
      *puVar8 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x60) = puVar8;
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      (**(code **)(*(long *)plVar6[1] + 0x18))();
      uVar2 = *(undefined4 *)puVar3;
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_00404870(uVar2,plVar6);
    } while (puVar7 != (undefined8 *)0x0);
  }
  return;
}


