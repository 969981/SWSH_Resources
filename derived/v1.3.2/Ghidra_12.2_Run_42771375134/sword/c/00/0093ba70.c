/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ba70; name: FUN_0093ba70
 */


void FUN_0093ba70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  uVar4 = param_2[5];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[5] = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined2 *)((long)param_1 + 0x3a) = *(undefined2 *)((long)param_2 + 0x3a);
  *(undefined8 *)((long)param_1 + 0x32) = uVar4;
  uVar3 = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = uVar3;
  uVar4 = *(undefined8 *)((long)param_2 + 0x42);
  *(undefined2 *)((long)param_1 + 0x4a) = *(undefined2 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)param_1 + 0x42) = uVar4;
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined1 *)((long)param_1 + 0x4d) = *(undefined1 *)((long)param_2 + 0x4d);
  *(undefined1 *)((long)param_1 + 0x4e) = *(undefined1 *)((long)param_2 + 0x4e);
  *(undefined1 *)((long)param_1 + 0x4f) = *(undefined1 *)((long)param_2 + 0x4f);
  return;
}


