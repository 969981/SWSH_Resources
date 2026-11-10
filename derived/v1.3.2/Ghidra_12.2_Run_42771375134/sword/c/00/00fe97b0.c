/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe97b0; name: FUN_00fe97b0
 */


void FUN_00fe97b0(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long local_78;
  undefined4 *puStack_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x1b0);
  local_38 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_40 = *(long *)(lVar2 + 0x2e0);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  local_48 = *(long *)(lVar2 + 0x2e8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_68 = &local_40;
  local_60 = &local_48;
  local_58 = &local_38;
  local_78 = param_1;
  puStack_70 = param_2;
  lStack_50 = lVar1;
  FUN_00fe98c0(&local_78,0,*param_2);
  FUN_00fe98c0(&local_78,1,param_2[1]);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


