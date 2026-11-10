/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe3570; name: FUN_00fe3570
 */


void FUN_00fe3570(long param_1,uint param_2)

{
  char *pcVar1;
  
  FUN_00ffd620(param_1 + 0x100);
  pcVar1 = "anime_f_out";
  if ((param_2 & 1) == 0) {
    pcVar1 = "anime_f_in";
  }
  FUN_00ffd3a0(param_1 + 0x100,pcVar1);
  FUN_010364c0(param_1,~param_2 & 1);
  return;
}


