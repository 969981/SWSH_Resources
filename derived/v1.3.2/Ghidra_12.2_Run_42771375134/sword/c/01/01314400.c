/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314400; name: FUN_01314400
 */


void FUN_01314400(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long local_58;
  long local_50;
  long local_48;
  
  local_58 = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  local_50 = param_3;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  local_48 = param_4;
  if (param_4 != 0) {
    (**(code **)(*(long *)(param_4 + 0x48) + 0x10))();
  }
  uVar1 = FUN_012f2f40(&local_58,3);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar1 & 1) == 0) {
    FUN_01314540(param_1,0x9eb173e5a74fab8f,0,param_2,param_3,param_4);
    if (*(char *)(param_1 + 1000) != '\0') {
      *(undefined1 *)(param_1 + 1000) = 0;
    }
  }
  else {
    *(long *)(param_1 + 0x3f0) = param_2;
    *(long *)(param_1 + 0x3f8) = param_3;
    *(long *)(param_1 + 0x400) = param_4;
    if (*(char *)(param_1 + 1000) == '\0') {
      *(undefined1 *)(param_1 + 1000) = 1;
    }
  }
  return;
}


