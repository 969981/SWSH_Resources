/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01134da0; name: FUN_01134da0
 */


void FUN_01134da0(undefined8 *param_1,byte param_2,byte param_3,uint param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long local_58;
  
  FUN_00ff86a0(&local_58,param_1[4],param_5);
  lVar5 = *(long *)(local_58 + 0x60);
  if (lVar5 == 0) {
    FUN_0077eb10(0,param_6,*param_1);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(lVar5,param_6,*param_1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  param_1[6] = *param_1;
  *(byte *)((long)param_1 + 0x42) = ~param_3 & 1;
  *(byte *)(param_1 + 8) = param_2 & 1;
  plVar6 = (long *)(*(long *)(param_1[5] + 0x5d0) + 0x60);
  (**(code **)(*plVar6 + 8))(plVar6,param_4 & 1);
  FUN_01038170(param_1[5],param_1 + 6);
  FUN_00ffa3d0(param_1[5],0);
  pcVar4 = (code *)param_1[0x13];
  if (pcVar4 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar4)(param_1 + 0x16);
  }
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,param_1 + 0x16);
    uVar1 = *param_7;
    uVar2 = param_7[1];
    uVar3 = param_7[3];
    param_1[0x14] = param_7[2];
    param_1[0x15] = uVar3;
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar2;
  }
  pcVar4 = (code *)param_1[0x43];
  if (pcVar4 != (code *)0x0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    (*pcVar4)(param_1 + 0x46);
  }
  if ((code *)param_8[2] != (code *)0x0) {
    (*(code *)param_8[2])(param_8 + 4,param_1 + 0x46);
    uVar1 = *param_8;
    uVar2 = param_8[1];
    uVar3 = param_8[3];
    param_1[0x44] = param_8[2];
    param_1[0x45] = uVar3;
    param_1[0x42] = uVar1;
    param_1[0x43] = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}


