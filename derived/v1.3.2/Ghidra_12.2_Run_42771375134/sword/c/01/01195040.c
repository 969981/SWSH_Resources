/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01195040; name: FUN_01195040
 */


void FUN_01195040(undefined8 *param_1,byte param_2,byte param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_0077eb10(param_1[3],param_5,*param_1);
  FUN_0077eb10(param_1[3],param_6,param_1[1]);
  FUN_0077eb10(param_1[3],param_7,param_1[2]);
  param_1[5] = *param_1;
  *(byte *)((long)param_1 + 0x3a) = ~param_3 & 1;
  param_1[8] = param_1[1];
  param_1[9] = param_1[2];
  *(byte *)(param_1 + 7) = param_2 & 1;
  plVar4 = (long *)(*(long *)(param_1[4] + 0x5d0) + 0x60);
  (**(code **)(*plVar4 + 8))(plVar4,param_4 & 1);
  (**(code **)(*(long *)param_1[4] + 0x88))((long *)param_1[4],param_1 + 5,param_1 + 8);
  FUN_00ffa3d0(param_1[4],0);
  pcVar5 = (code *)param_1[0x23];
  if (pcVar5 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar5)(param_1 + 0x26);
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
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


