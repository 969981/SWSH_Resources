/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086ef0; name: FUN_01086ef0
 */


void FUN_01086ef0(long param_1)

{
  long lVar1;
  long local_38 [3];
  
  lVar1 = FUN_00ad95d0(local_38 + 1,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar1;
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38[1] = 0;
  local_38[2] = 0;
  FUN_0101cb00(lVar1,local_38 + 1);
  local_38[0] = *(long *)(param_1 + 0x88);
  if (local_38[0] != 0) {
    (**(code **)(*(long *)(local_38[0] + 0x48) + 0x10))();
  }
  FUN_01025970(local_38,local_38 + 1);
  if (local_38[0] != 0) {
    (**(code **)(*(long *)(local_38[0] + 0x48) + 0x18))();
    local_38[0] = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


