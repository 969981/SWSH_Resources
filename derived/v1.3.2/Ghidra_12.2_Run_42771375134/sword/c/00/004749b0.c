/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004749b0; name: FUN_004749b0
 */


undefined8 FUN_004749b0(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_3;
  if (puVar8 == (undefined8 *)0x0) {
LAB_00474a34:
    puVar3 = PTR_DAT_02712a90;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      lVar5 = FUN_00404750(*(undefined4 *)puVar3,0x580,0x10);
      puVar7[1] = lVar5;
      if (lVar5 != 0) {
        *(undefined4 *)((long)puVar7 + 0x14) = 0x10;
        lVar5 = FUN_00404750(*(undefined4 *)puVar3,0x380,0x10);
        puVar7[3] = lVar5;
        if (lVar5 != 0) {
          *(undefined4 *)((long)puVar7 + 0x24) = 0x10;
          *puVar7 = 0;
          if (*(long *)(param_2 + 4) == 0) {
            *(undefined8 **)(param_2 + 4) = puVar7;
          }
          else {
            **(undefined8 **)(param_2 + 2) = puVar7;
          }
          *(undefined8 **)(param_2 + 2) = puVar7;
          *param_2 = *param_2 + 1;
          *param_3 = puVar7;
          param_3[1] = puVar8;
          uVar1 = *(uint *)(puVar7 + 2);
          if (*(uint *)((long)puVar7 + 0x14) <= uVar1) goto LAB_00474b4c;
          goto LAB_00474a08;
        }
      }
      uVar2 = *(undefined4 *)puVar3;
      if (puVar7[6] != 0) {
        FUN_004047f0(uVar2);
      }
      *(undefined4 *)((long)puVar7 + 0x2c) = 0;
      puVar7[6] = 0;
      if (puVar7[1] != 0) {
        *(undefined4 *)(puVar7 + 2) = 0;
        FUN_004047f0(*(undefined4 *)puVar3);
        puVar7[1] = 0;
        *(undefined4 *)((long)puVar7 + 0x14) = 0;
      }
      if (puVar7[3] != 0) {
        *(undefined4 *)(puVar7 + 4) = 0;
        FUN_004047f0(*(undefined4 *)puVar3);
        puVar7[3] = 0;
        *(undefined4 *)((long)puVar7 + 0x24) = 0;
      }
      FUN_00404870(uVar2,puVar7);
    }
    uVar4 = 0x34;
  }
  else {
    puVar7 = puVar8;
    if (*(int *)(puVar8 + 2) == *(int *)((long)puVar8 + 0x14)) {
      param_3[1] = puVar8;
      puVar7 = (undefined8 *)*puVar8;
      *param_3 = puVar7;
      if (puVar7 == (undefined8 *)0x0) goto LAB_00474a34;
    }
    uVar1 = *(uint *)(puVar7 + 2);
    if (uVar1 < *(uint *)((long)puVar7 + 0x14)) {
LAB_00474a08:
      *(uint *)(puVar7 + 2) = uVar1 + 1;
      lVar5 = puVar7[1] + (ulong)uVar1 * 0x58;
      if (lVar5 != 0) {
        lVar6 = puVar7[1] + (ulong)uVar1 * 0x58;
        *(undefined8 *)(lVar6 + 0x48) = 0;
        *(undefined8 *)(lVar6 + 0x50) = 0;
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x40) = 0;
      }
    }
    else {
LAB_00474b4c:
      lVar5 = 0;
    }
    FUN_00475640(param_4,lVar5);
    uVar4 = 1;
  }
  return uVar4;
}


