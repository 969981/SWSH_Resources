/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e391d0; name: FUN_00e391d0
 */


void FUN_00e391d0(long param_1,uint param_2,byte param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  *(uint *)(param_1 + 0x408) = param_2 & 1;
  FUN_010672e0(&local_38,*param_4,0);
  FUN_010672e0(&local_40,*param_4,1);
  *(byte *)(*(long *)(param_1 + 0x400) + 0x81) = param_3 & 1;
  uVar2 = *(undefined8 *)(param_1 + 0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x408);
  local_48 = *(long *)(param_1 + 0x3b8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_58 = local_40;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_00da60e0(uVar2,uVar1,&local_48,&local_50,&local_58,param_5,0);
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
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


