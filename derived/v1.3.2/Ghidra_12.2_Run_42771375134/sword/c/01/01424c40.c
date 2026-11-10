/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01424c40; name: FUN_01424c40
 */


void FUN_01424c40(long param_1)

{
  undefined1 auStack_40 [24];
  long local_28;
  
  FUN_01313e90(*(undefined4 *)(param_1 + 0xd0));
  FUN_006cf0a0(auStack_40);
  FUN_012d6d40(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_01313eb0(*(undefined4 *)(param_1 + 0xd0));
  FUN_006cf0a0(auStack_40);
  FUN_012d6d40(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


