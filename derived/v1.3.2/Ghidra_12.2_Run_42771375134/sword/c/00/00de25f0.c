/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de25f0; name: FUN_00de25f0
 */


bool FUN_00de25f0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00ddb740(param_1,param_2,&local_48,&local_50,&local_58,param_6,param_7);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_00e681f0(DAT_01d4c47c,param_1,PTR_DAT_02715088,0x18);
  }
  return bVar1;
}


