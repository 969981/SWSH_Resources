/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a584b0; name: FUN_00a584b0
 */


void FUN_00a584b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_48;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    puVar1 = (undefined8 *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    puVar1 = (undefined8 *)(param_1 + 0x30);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = *puVar1;
  FUN_00ffa3d0(uVar2,0);
  local_48 = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
  }
  local_58 = param_3;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))((long *)(param_3 + 0x48));
  }
  local_60 = param_4;
  if (param_4 != 0) {
    (**(code **)(*(long *)(param_4 + 0x48) + 0x10))((long *)(param_4 + 0x48));
  }
  local_68 = param_5;
  if (param_5 != 0) {
    (**(code **)(*(long *)(param_5 + 0x48) + 0x10))((long *)(param_5 + 0x48));
  }
  local_70 = param_6;
  if (param_6 != 0) {
    (**(code **)(*(long *)(param_6 + 0x48) + 0x10))((long *)(param_6 + 0x48));
  }
  local_78 = param_7;
  if (param_7 != 0) {
    (**(code **)(*(long *)(param_7 + 0x48) + 0x10))((long *)(param_7 + 0x48));
  }
  FUN_00a5aa00(uVar2,&local_48,&local_58,&local_60,&local_68,&local_70,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


