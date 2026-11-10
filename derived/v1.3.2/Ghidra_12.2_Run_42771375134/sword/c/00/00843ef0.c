/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00843ef0; name: FUN_00843ef0
 */


float FUN_00843ef0(double param_1)

{
  if (DAT_01cd5080 < param_1) {
    return DAT_01d4bbe0;
  }
  if (param_1 < DAT_01cd5260) {
    return DAT_01d4bbdc;
  }
  return (float)param_1;
}


