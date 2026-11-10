/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210840; name: FUN_01210840
 */


void FUN_01210840(undefined8 param_1,char *param_2)

{
  long local_18;
  
  if ((((((param_2[0x1f0] != '\0') && (param_2[0x1a0] != '\0')) && (param_2[0xe0] != '\0')) &&
       ((param_2[0x8c] != '\0' && (param_2[0x50] != '\0')))) &&
      ((param_2[0x3c] != '\0' && ((param_2[0x18] != '\0' && (param_2[8] != '\0')))))) &&
     ((*param_2 != '\0' && (FUN_012108c0(&local_18,param_1,0), local_18 != 0)))) {
    FUN_01225f80();
  }
  return;
}


