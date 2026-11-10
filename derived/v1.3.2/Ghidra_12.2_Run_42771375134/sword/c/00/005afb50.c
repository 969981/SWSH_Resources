/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005afb50; name: FUN_005afb50
 */


float FUN_005afb50(float param_1,float param_2,long param_3)

{
  return ((param_1 * DAT_01d4c750 *
          ((*(float *)(param_3 + 0x1b0) * *(float *)(param_3 + 0x1b4)) /
          (*(float *)(param_3 + 0x1b0) - *(float *)(param_3 + 0x1a8)))) / param_2) /
         *(float *)(param_3 + 0x1b8);
}


