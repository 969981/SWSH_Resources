/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecbae0; name: FUN_00ecbae0
 */


undefined8 FUN_00ecbae0(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x7c) < 0x385) && (*(char *)(param_1 + 0x78) == '\0')) &&
     (uVar1 = FUN_00893790(*(undefined8 *)(param_1 + 0x58)), (uVar1 & 1) != 0)) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return 1;
}


