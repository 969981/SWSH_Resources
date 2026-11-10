/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01574d70; name: FUN_01574d70
 */


undefined4 FUN_01574d70(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_014b3460(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                       *(undefined4 *)(param_2 + 0x18),*(long *)(param_2 + 0x20) != 0);
  *(undefined4 *)(*(long *)(param_1 + 0x84) + 0x348) = uVar1;
  return uVar1;
}


