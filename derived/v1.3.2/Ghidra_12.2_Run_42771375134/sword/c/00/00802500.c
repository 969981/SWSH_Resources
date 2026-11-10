/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802500; name: FUN_00802500
 */


undefined8 FUN_00802500(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar5;
  byte *pbVar4;
  long lVar6;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  byte *local_70;
  ulong local_68;
  void *local_60;
  
  while (*(int *)(param_4 + 0x28) != 1) {
    uVar2 = FUN_008055c0(param_4,param_3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_4 + 0xe9) != '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x18) != '\0') ||
     (uVar2 = (**(code **)(*param_3 + 0x40))(param_3), (uVar2 & 1) != 0)) {
    return 1;
  }
  local_88 = (byte *)0x0;
  local_80 = (byte *)0x0;
  uStack_78 = 0;
  FUN_00818210(param_3,&local_88);
  pbVar1 = local_80;
  local_a0 = 0;
  local_98 = 0;
  local_90 = (void *)0x0;
  if (local_88 != local_80) {
    lVar6 = 0;
    pbVar5 = local_88;
    do {
      if (lVar6 != 0) {
        std::string::append((char *)&local_a0);
      }
      local_70 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        local_70 = pbVar5 + 1;
      }
      local_68 = (ulong)(*pbVar5 >> 1);
      if ((*pbVar5 & 1) != 0) {
        local_68 = *(ulong *)(pbVar5 + 8);
      }
      FUN_00800880(&local_a0,&local_70);
      pbVar5 = pbVar5 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (pbVar5 != pbVar1);
  }
  puVar3 = (ulong *)std::string::insert((ulong)&local_a0,(char *)0x0);
  local_70 = (byte *)*puVar3;
  local_68 = puVar3[1];
  local_60 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_00802750(param_4,0xffffffff,0,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  pbVar1 = local_88;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
    pbVar1 = local_88;
  }
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  local_88 = pbVar1;
  if (local_80 != pbVar1) {
    pbVar5 = local_80;
    do {
      pbVar4 = pbVar5 + -0x18;
      if ((*pbVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
      pbVar5 = pbVar4;
    } while (pbVar1 != pbVar4);
  }
  local_80 = pbVar1;
  operator_delete(local_88);
  return 0;
}


