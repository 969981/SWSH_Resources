/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cd810; name: FUN_009cd810
 */


undefined8 FUN_009cd810(long param_1,int *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x3450) == 0) {
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x3450);
  *param_3 = *(undefined4 *)(param_1 + 0x3454);
  return 1;
}


