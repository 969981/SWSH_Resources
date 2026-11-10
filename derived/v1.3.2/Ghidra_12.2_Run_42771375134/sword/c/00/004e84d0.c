/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e84d0; name: FUN_004e84d0
 */


void FUN_004e84d0(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long local_40;
  undefined4 local_38;
  float local_34;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 100) != '\0') {
      lVar6 = -4;
      if (*(long *)(param_1 + 0x38) != -1) {
        lVar6 = *(long *)(param_1 + 0x38);
      }
      puVar7 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,lVar6);
      if (puVar7 != (undefined8 *)0x0) {
        iVar2 = *(int *)(puVar7 + 10);
        iVar4 = iVar2 + -1;
        *(int *)(puVar7 + 10) = iVar4;
        if (iVar4 == 0) {
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar7)(puVar7);
          FUN_00404870(uVar3,puVar7);
          iVar2 = *(int *)(puVar7 + 10) + -1;
          *(int *)(puVar7 + 10) = iVar2;
        }
        else {
          iVar2 = iVar2 + -2;
          *(int *)(puVar7 + 10) = iVar2;
        }
        if (iVar2 == 0) {
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar7)(puVar7);
          FUN_00404870(uVar3,puVar7);
        }
        *(undefined1 *)(param_1 + 100) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 100) == '\0') {
    lVar6 = -4;
    if (*(long *)(param_1 + 0x38) != -1) {
      lVar6 = *(long *)(param_1 + 0x38);
    }
    lVar6 = FUN_004e7e80(lVar6,param_3);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 100) = 1;
      puVar5 = PTR_DAT_02712d20;
      lVar1 = -4;
      if (*(long *)(param_1 + 0x38) != -1) {
        lVar1 = *(long *)(param_1 + 0x38);
      }
      FUN_00498000(*(undefined8 *)PTR_DAT_02712d20,lVar1,0,0,2);
      uVar8 = 0;
      if (0.0 < *(float *)(param_1 + 0x60)) {
        local_40 = -4;
        if (*(long *)(param_1 + 0x38) != -1) {
          local_40 = *(long *)(param_1 + 0x38);
        }
        local_38 = *(undefined4 *)(param_1 + 0x48);
        local_34 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x60);
        uVar8 = 1;
      }
      FUN_00498930(*(undefined8 *)puVar5,lVar6,&local_40,uVar8);
    }
  }
  return;
}


