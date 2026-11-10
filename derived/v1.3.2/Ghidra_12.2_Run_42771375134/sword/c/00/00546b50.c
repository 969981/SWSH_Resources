/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546b50; name: FUN_00546b50
 */


int FUN_00546b50(uint param_1,uint param_2,uint param_3)

{
  float fVar1;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_1 <= param_3) {
    param_1 = param_3;
  }
  fVar1 = logf((float)param_1);
  return (int)(fVar1 / DAT_01d4c4dc) + 1;
}


