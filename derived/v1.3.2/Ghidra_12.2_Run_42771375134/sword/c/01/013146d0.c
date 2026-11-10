/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013146d0; name: FUN_013146d0
 */


void FUN_013146d0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long local_40;
  long local_38;
  
  local_40 = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  local_38 = param_3;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  uVar1 = FUN_012f3300(&local_40,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if ((uVar1 & 1) == 0) {
    FUN_013147d0(param_1,0x1e0f2020be5b5db7,0,param_2,param_3);
    if (*(char *)(param_1 + 1000) != '\0') {
      *(undefined1 *)(param_1 + 1000) = 0;
    }
  }
  else {
    *(long *)(param_1 + 0x3f0) = param_2;
    *(long *)(param_1 + 0x3f8) = param_3;
    *(undefined8 *)(param_1 + 0x400) = 0;
    if (*(char *)(param_1 + 1000) == '\0') {
      *(undefined1 *)(param_1 + 1000) = 1;
    }
  }
  return;
}


