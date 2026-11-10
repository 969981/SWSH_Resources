/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c2d0; name: FUN_0042c2d0
 */


undefined8 FUN_0042c2d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x84) = param_1;
  FUN_004e7fa0(PTR_DAT_02712d10,*(undefined8 *)(*(long *)(param_2 + 8) + 0x48));
  return 1;
}


