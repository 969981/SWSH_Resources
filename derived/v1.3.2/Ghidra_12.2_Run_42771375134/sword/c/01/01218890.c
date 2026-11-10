/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218890; name: FUN_01218890
 */


bool FUN_01218890(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return (short)param_1[1] == (short)param_2[1];
  }
  return false;
}


