/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8fec0; name: FUN_00e8fec0
 */


void FUN_00e8fec0(long param_1)

{
  undefined1 local_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x60))();
  memmove((void *)(param_1 + 0x4e0),(void *)(*(long *)(param_1 + 0x4c0) + 0xa0),0x34);
  local_30 = FUN_00e3c4a0(param_1);
  FUN_00e90c10(*(undefined8 *)(param_1 + 0x640),local_30,(void *)(param_1 + 0x4e0));
  FUN_00e918a0(*(undefined8 *)(param_1 + 0x570));
  return;
}


