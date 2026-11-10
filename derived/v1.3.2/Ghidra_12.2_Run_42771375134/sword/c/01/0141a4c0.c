/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141a4c0; name: FUN_0141a4c0
 */


void FUN_0141a4c0(long param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong local_118;
  long local_110;
  long local_108;
  byte abStack_100 [192];
  undefined8 local_38;
  
  memcpy(abStack_100,"msg_ui_pokecamp_cooking_05_08",0xc0);
  local_38 = 0x8fb814a4e5c07d98;
  FUN_00ff86a0(&local_110,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  local_108 = *(long *)(local_110 + 0x60);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
  }
  bVar1 = abStack_100[-(ulong)(param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)param_2 << 6];
  local_118 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    pbVar2 = (byte *)((ulong)(abStack_100 + (long)(int)param_2 * 0x40) | 1);
    do {
      local_118 = (local_118 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  FUN_008c4e70(param_1 + 0x100,&local_38,&local_108,&local_118,10);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  return;
}


