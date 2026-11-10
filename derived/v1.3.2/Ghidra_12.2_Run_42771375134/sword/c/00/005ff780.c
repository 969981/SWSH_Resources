/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ff780; name: FUN_005ff780
 */


undefined8 FUN_005ff780(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_006005e0(param_1 + 0x78,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x398));
  return 1;
}


