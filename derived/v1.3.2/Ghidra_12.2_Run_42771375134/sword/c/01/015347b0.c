/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015347b0; name: FUN_015347b0
 */


void FUN_015347b0(int param_1,uint *param_2,uint *param_3)

{
  if (param_1 == 0x365) {
    *param_3 = *param_2 % 7;
    *param_2 = *param_2 / 7;
    return;
  }
  *param_3 = 0;
  return;
}


