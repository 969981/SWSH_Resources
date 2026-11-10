/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00562390; name: FUN_00562390
 */


bool FUN_00562390(float param_1,float param_2,float param_3,float param_4)

{
  if ((((param_4 != param_3) && (0.0 < param_3)) && (0.0 < param_4)) &&
     ((param_1 < param_3 || (param_3 <= param_4)))) {
    return param_3 < param_2 || param_4 <= param_3;
  }
  return false;
}


