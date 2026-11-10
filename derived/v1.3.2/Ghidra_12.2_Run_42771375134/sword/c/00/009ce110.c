/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ce110; name: FUN_009ce110
 */


undefined8 FUN_009ce110(long param_1,int *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x34a8) == 0) {
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x34a8) + -1;
  *param_3 = *(undefined4 *)(param_1 + 0x34ac);
  return 1;
}


