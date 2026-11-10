/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fd8e0; name: FUN_013fd8e0
 */


void FUN_013fd8e0(long param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong local_50;
  long local_48;
  ulong local_38;
  
  pbVar3 = *(byte **)PTR_PTR_02729610;
  bVar1 = *pbVar3;
  local_38 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    local_38 = 0xcbf29ce484222645;
    do {
      pbVar3 = pbVar3 + 1;
      local_38 = (local_38 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar3;
    } while (bVar1 != 0);
  }
  local_48 = *param_2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  bVar1 = *param_3;
  local_50 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    local_50 = 0xcbf29ce484222645;
    do {
      param_3 = param_3 + 1;
      local_50 = (local_50 ^ bVar1) * 0x100000001b3;
      bVar1 = *param_3;
    } while (bVar1 != 0);
  }
  FUN_008c4e70(param_1 + 0x100,&local_38,&local_48,&local_50,10);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  pbVar3 = *(byte **)PTR_PTR_02729618;
  bVar1 = *pbVar3;
  local_38 = 0xcbf29ce484222645;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_38 = (local_38 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  uVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  FUN_00ffd840(param_1 + 0x100,uVar2);
  return;
}


