/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523d80; name: FUN_00523d80
 */


undefined8 FUN_00523d80(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(*(long *)(param_3 + 0x868) + (long)*(int *)(param_3 + 0x870) * 0x34 + 0x14) =
       CONCAT44(param_2,param_1);
  return 0;
}


