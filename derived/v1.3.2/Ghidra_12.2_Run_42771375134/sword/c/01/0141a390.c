/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141a390; name: FUN_0141a390
 */


void FUN_0141a390(long param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong local_158;
  long local_150;
  long local_148;
  byte abStack_140 [256];
  undefined8 local_38;
  
  memcpy(abStack_140,"msg_ui_pokecamp_cooking_05_17",0x100);
  local_38 = 0x8fb815a4e5c07f4b;
  FUN_00ff86a0(&local_150,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  local_148 = *(long *)(local_150 + 0x60);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
  }
  bVar1 = abStack_140[-(ulong)(param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)param_2 << 6];
  local_158 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    pbVar2 = (byte *)((ulong)(abStack_140 + (long)(int)param_2 * 0x40) | 1);
    do {
      local_158 = (local_158 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  FUN_008c4e70(param_1 + 0x100,&local_38,&local_148,&local_158,10);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
  }
  return;
}


