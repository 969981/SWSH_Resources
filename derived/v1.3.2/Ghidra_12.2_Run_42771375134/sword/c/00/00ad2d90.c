/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad2d90; name: FUN_00ad2d90
 */


undefined8 FUN_00ad2d90(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1a8))();
  if (((uVar1 & 1) == 0) || ((char)param_1[0x97] == '\0')) {
    return 0;
  }
  return 1;
}


