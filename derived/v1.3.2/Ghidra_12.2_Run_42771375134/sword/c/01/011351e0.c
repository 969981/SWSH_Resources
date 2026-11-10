/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011351e0; name: FUN_011351e0
 */


void FUN_011351e0(undefined8 *param_1,byte param_2,byte param_3,uint param_4,undefined4 param_5,
                 undefined8 param_6,uint param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined8 *param_10)

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
  FUN_014ca220(*(undefined8 *)(param_1[5] + 0x5d8),0,(ulong)param_7 / 10000,4,2,1);
  FUN_014ca220(*(undefined8 *)(param_1[5] + 0x5d8),1,param_7 % 10000,4,2,1);
  FUN_014c62d0(*(undefined8 *)(param_1[5] + 0x5d8),param_1[1],*param_1);
  param_1[6] = param_1[1];
  *(byte *)((long)param_1 + 0x42) = ~param_3 & 1;
  *(byte *)(param_1 + 8) = param_2 & 1;
  param_1[9] = param_1[2];
  param_1[10] = param_1[3];
  plVar6 = (long *)(*(long *)(param_1[5] + 0x5d0) + 0x60);
  (**(code **)(*plVar6 + 8))(plVar6,param_4 & 1);
  (**(code **)(*(long *)param_1[5] + 0x88))((long *)param_1[5],param_1 + 6,param_1 + 9);
  FUN_00ffa3d0(param_1[5],0);
  pcVar4 = (code *)param_1[0x23];
  if (pcVar4 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar4)(param_1 + 0x26);
  }
  if ((code *)param_8[2] != (code *)0x0) {
    (*(code *)param_8[2])(param_8 + 4,param_1 + 0x26);
    uVar1 = *param_8;
    uVar2 = param_8[1];
    uVar3 = param_8[3];
    param_1[0x24] = param_8[2];
    param_1[0x25] = uVar3;
    param_1[0x22] = uVar1;
    param_1[0x23] = uVar2;
  }
  pcVar4 = (code *)param_1[0x33];
  if (pcVar4 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar4)(param_1 + 0x36);
  }
  if ((code *)param_9[2] != (code *)0x0) {
    (*(code *)param_9[2])(param_9 + 4,param_1 + 0x36);
    uVar1 = *param_9;
    uVar2 = param_9[1];
    uVar3 = param_9[3];
    param_1[0x34] = param_9[2];
    param_1[0x35] = uVar3;
    param_1[0x32] = uVar1;
    param_1[0x33] = uVar2;
  }
  pcVar4 = (code *)param_1[0x43];
  if (pcVar4 != (code *)0x0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    (*pcVar4)(param_1 + 0x46);
  }
  if ((code *)param_10[2] != (code *)0x0) {
    (*(code *)param_10[2])(param_10 + 4,param_1 + 0x46);
    uVar1 = *param_10;
    uVar2 = param_10[1];
    uVar3 = param_10[3];
    param_1[0x44] = param_10[2];
    param_1[0x45] = uVar3;
    param_1[0x42] = uVar1;
    param_1[0x43] = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}


