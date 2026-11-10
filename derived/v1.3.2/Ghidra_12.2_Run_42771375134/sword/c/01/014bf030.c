/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf030; name: FUN_014bf030
 */


bool FUN_014bf030(short *param_1)

{
  uint extraout_var;
  
  if (*param_1 == 0x10) {
    FUN_0077db50();
    return ((extraout_var & 0xffffff) - 1 & 0xff) < 2;
  }
  return false;
}


