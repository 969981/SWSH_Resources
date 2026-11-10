/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9c390; name: FUN_00c9c390
 */


void FUN_00c9c390(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *__s;
  ulong local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long local_90;
  long local_88;
  ulong local_80;
  byte *pbStack_78;
  size_t local_70;
  long local_68;
  long local_60;
  long local_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  (**(code **)(**(long **)(param_1 + 0x108) + 0x10))(&local_60);
  local_58 = local_60;
  local_60 = 0;
  __s = *(byte **)(param_1 + 0x290);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  local_70 = strlen((char *)__s);
  bVar1 = *__s;
  local_80 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    local_80 = 0xcbf29ce484222645;
    pbVar2 = __s;
    do {
      pbVar2 = pbVar2 + 1;
      local_80 = (local_80 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
    } while (bVar1 != 0);
  }
  local_68 = 0;
  local_88 = *param_2;
  pbStack_78 = __s;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
    __s = *(byte **)(param_1 + 0x290);
  }
  local_98 = strlen((char *)__s);
  bVar1 = *__s;
  local_a8 = 0xcbf29ce484222645;
  pbVar2 = __s;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_a8 = (local_a8 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar2;
  }
  local_90 = 0;
  pbStack_a0 = __s;
  FUN_010508a0(uVar3,&local_58,uVar4,&local_80,&local_88,param_3,&local_a8);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_01050d70(*(undefined8 *)(param_1 + 0x128),param_1 + 0x2a0,param_1 + 0x2b0,param_1 + 0x2c0);
  return;
}


