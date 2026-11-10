/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523c00; name: FUN_00523c00
 */


undefined8 FUN_00523c00(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(*(long *)(param_3 + 0x858) + (long)*(int *)(param_3 + 0x860) * 0x68 + 0x44) =
       CONCAT44(param_2,param_1);
  return 0;
}


