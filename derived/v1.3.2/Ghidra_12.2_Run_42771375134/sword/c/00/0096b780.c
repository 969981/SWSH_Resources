/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096b780; name: FUN_0096b780
 */


void FUN_0096b780(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_94;
  undefined1 local_8c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_5f;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  FUN_00943e60(auStack_88);
  local_b0 = 1;
  local_a8 = *(undefined4 *)((long)param_3 + 0x34);
  local_ac = *(undefined1 *)(param_3 + 7);
  local_ab = FUN_00942460(param_1);
  local_a4 = 0;
  local_b8 = FUN_009424e0(param_1,*(undefined1 *)(param_3 + 6));
  local_60 = FUN_008f94e0(*(undefined1 *)(param_3 + 6));
  local_5f = 0;
  local_94 = *param_3;
  local_8c = *(undefined1 *)(param_3 + 1);
  FUN_00943ee0(auStack_88,(long)param_3 + 0xc);
  local_44 = 1;
  local_48 = 3;
  local_50 = &local_b8;
  FUN_00942450(param_1);
  uVar2 = FUN_00925060();
  FUN_009681e0(uVar2,local_58,&local_50);
  local_64 = local_58[0];
  uVar2 = FUN_00942420(param_1);
  bVar1 = FUN_009468e0(uVar2,&local_b8);
  *param_2 = bVar1 & 1;
  return;
}


