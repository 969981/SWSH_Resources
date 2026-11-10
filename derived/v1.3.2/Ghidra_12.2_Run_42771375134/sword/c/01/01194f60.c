/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01194f60; name: FUN_01194f60
 */


void FUN_01194f60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_0077eb10(param_1[3],param_2,*param_1);
  param_1[5] = *param_1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  plVar4 = (long *)(*(long *)(param_1[4] + 0x5d0) + 0x60);
  (**(code **)(*plVar4 + 8))(plVar4,0);
  FUN_01038170(param_1[4],param_1 + 5);
  FUN_00ffa3d0(param_1[4],0);
  pcVar5 = (code *)param_1[0x13];
  if (pcVar5 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar5)(param_1 + 0x16);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x16);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    param_1[0x14] = param_3[2];
    param_1[0x15] = uVar3;
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar2;
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


