/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043ad30; name: FUN_0043ad30
 */


undefined8 FUN_0043ad30(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_a8 [18];
  
  puVar2 = PTR_DAT_02712a90;
  if ((param_4 | 1) == 3) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    puVar7 = (undefined8 *)*puVar8;
    if (puVar7 != (undefined8 *)0x0) {
      if (param_4 == 2) {
        puVar10 = (undefined8 *)0x0;
        do {
          while ((plVar6 = (long *)puVar7[2], (long *)plVar6[1] != param_2 ||
                 (uVar4 = FUN_00441e10(param_2,param_3,plVar6[8],plVar6), (uVar4 & 1) == 0))) {
            puVar11 = (undefined8 *)*puVar7;
            puVar10 = puVar7;
            puVar7 = puVar11;
            if (puVar11 == (undefined8 *)0x0) goto LAB_0043af88;
          }
          local_a8[0] = 0;
          plVar5 = (long *)plVar6[1];
          if (*(short *)((long)plVar5 + 0x34) == 0x403) {
LAB_0043add8:
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          else if (*(short *)((long)plVar5 + 0x34) == 0x503) {
            FUN_00441d50();
            plVar5 = (long *)plVar6[1];
            goto LAB_0043add8;
          }
          FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar6[6]);
          puVar9 = (undefined8 *)*puVar7;
          puVar11 = puVar8;
          if (*(undefined8 **)(param_1 + 0x28) != puVar7) {
            puVar11 = puVar10;
          }
          *puVar11 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar7) {
            *(undefined8 **)(param_1 + 0x30) = puVar10;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar7;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar6[1] + 0x18))();
          uVar1 = *(undefined4 *)puVar2;
          (**(code **)(*plVar6 + 8))(plVar6);
          FUN_00404870(uVar1,plVar6);
          puVar7 = puVar9;
        } while (puVar9 != (undefined8 *)0x0);
      }
      else {
        puVar10 = (undefined8 *)0x0;
        do {
          while (plVar6 = (long *)puVar7[2], (long *)plVar6[1] != param_2) {
            puVar11 = (undefined8 *)*puVar7;
            puVar10 = puVar7;
            puVar7 = puVar11;
            if (puVar11 == (undefined8 *)0x0) goto LAB_0043af88;
          }
          local_a8[0] = 0;
          if (*(short *)((long)param_2 + 0x34) == 0x403) {
            plVar5 = param_2;
LAB_0043aeec:
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          else if (*(short *)((long)param_2 + 0x34) == 0x503) {
            FUN_00441d50(param_2);
            plVar5 = (long *)plVar6[1];
            goto LAB_0043aeec;
          }
          FUN_0048fd60(*(undefined8 *)PTR_DAT_02712ad0,(int)plVar6[6]);
          puVar9 = (undefined8 *)*puVar7;
          puVar11 = puVar8;
          if (*(undefined8 **)(param_1 + 0x28) != puVar7) {
            puVar11 = puVar10;
          }
          *puVar11 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar7) {
            *(undefined8 **)(param_1 + 0x30) = puVar10;
          }
          *puVar7 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar7;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar6[1] + 0x18))();
          uVar1 = *(undefined4 *)puVar2;
          (**(code **)(*plVar6 + 8))(plVar6);
          FUN_00404870(uVar1,plVar6);
          puVar7 = puVar9;
        } while (puVar9 != (undefined8 *)0x0);
      }
    }
LAB_0043af88:
    puVar3 = PTR_DAT_02712ad0;
    puVar2 = PTR_DAT_02712a90;
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      do {
        while ((puVar10 = puVar7, plVar6 = (long *)puVar10[2], (long *)plVar6[1] == param_2 &&
               (uVar4 = FUN_00441e10(param_2,param_3,plVar6[8],plVar6), (uVar4 & 1) != 0))) {
          local_a8[0] = 0;
          plVar5 = (long *)plVar6[1];
          if (*(short *)((long)plVar5 + 0x34) == 0x503) {
            FUN_00441d50();
            plVar5 = (long *)plVar6[1];
LAB_0043b008:
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          else if (*(short *)((long)plVar5 + 0x34) == 0x403) goto LAB_0043b008;
          FUN_0048fd60(*(undefined8 *)puVar3,(int)plVar6[6]);
          puVar7 = (undefined8 *)*puVar10;
          puVar11 = (undefined8 *)(param_1 + 0x50);
          if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
            puVar11 = puVar8;
          }
          *puVar11 = puVar7;
          if (*(undefined8 **)(param_1 + 0x58) == puVar10) {
            *(undefined8 **)(param_1 + 0x58) = puVar8;
          }
          *puVar10 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar10;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar6[1] + 0x18))();
          uVar1 = *(undefined4 *)puVar2;
          (**(code **)(*plVar6 + 8))(plVar6);
          FUN_00404870(uVar1,plVar6);
          if (puVar7 == (undefined8 *)0x0) {
            return 1;
          }
        }
        puVar7 = (undefined8 *)*puVar10;
        puVar8 = puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
  }
  return 1;
}


