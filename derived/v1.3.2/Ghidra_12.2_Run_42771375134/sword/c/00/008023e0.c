/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008023e0; name: FUN_008023e0
 */


uint FUN_008023e0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [164];
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 local_6f;
  
  (**(code **)(*param_3 + 0x38))(param_3);
  bVar2 = *(byte *)((long)param_1 + 0x1e);
  uVar6 = (**(code **)(*param_3 + 0xb8))(param_3);
  local_158 = *param_1;
  uStack_150 = param_1[1];
  local_148 = param_1[2];
  uVar1 = *(undefined4 *)((long)param_1 + 0x19);
  cVar3 = *(char *)((long)param_1 + 0x1d);
  uVar4 = *(undefined1 *)(param_1 + 3);
  puStack_138 = &local_158;
  local_140 = PTR_DAT_02716f40 + 0x10;
  FUN_00841bd0(auStack_130,param_2,&local_140);
  local_6f = 0;
  local_8c = 1;
  local_88 = 1;
  if (cVar3 != '\0') {
    local_84 = 0x100;
  }
  local_80 = uVar6;
  local_78 = bVar2 ^ 1;
  uStack_74 = uVar1;
  local_70 = uVar4;
  FUN_00842de0(auStack_130);
  uVar5 = FUN_00802500(param_1,extraout_x1,param_3,&local_158);
  FUN_00841cc0(auStack_130);
  FUN_00841bc0(&local_140);
  return uVar5 & 1;
}


