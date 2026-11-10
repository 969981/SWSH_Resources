/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314950; name: FUN_01314950
 */


void FUN_01314950(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long local_50;
  long local_48;
  
  local_50 = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  local_48 = param_3;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  uVar1 = FUN_012f3390(&local_50,2,param_4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((uVar1 & 1) == 0) {
    FUN_013147d0(param_1,0x33561a1671d73258,0,param_2,param_3);
    if (*(char *)(param_1 + 1000) != '\0') {
      *(undefined1 *)(param_1 + 1000) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(lVar2 + 0x4f8) = param_4[1];
    *(undefined8 *)(lVar2 + 0x4f0) = *param_4;
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


