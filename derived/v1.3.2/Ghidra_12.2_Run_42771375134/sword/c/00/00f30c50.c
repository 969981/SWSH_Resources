/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f30c50; name: FUN_00f30c50
 */


bool FUN_00f30c50(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
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
  uVar2 = FUN_00db3640(param_1,param_2,&local_48,&local_50,&local_58,param_6,param_7);
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
    FUN_00db6d40(param_1,1);
    *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffe;
    FUN_00f30da0(param_1,auStack_60);
    (**(code **)(*param_1 + 0xd8))(param_1,0);
  }
  return bVar1;
}


