/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84890; name: FUN_00d84890
 */


void FUN_00d84890(long param_1)

{
  undefined8 uVar1;
  long local_28;
  
  FUN_00d84920(param_1,0);
  local_28 = *(long *)(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_00702940(uVar1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_0070cf00(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x110));
  FUN_00d84b00(param_1);
  FUN_00d84bf0(param_1,0);
  return;
}


