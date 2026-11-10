/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014615b0; name: FUN_014615b0
 */


void FUN_014615b0(long param_1,ulong param_2)

{
  char *pcVar1;
  
  if ((param_2 & 1) == 0) {
    pcVar1 = "anime_in";
  }
  else {
    pcVar1 = "anime_f_in";
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar1);
  FUN_00ffcf80(param_1 + 0x100,"anime_keep");
  return;
}


