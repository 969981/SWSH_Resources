/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce2c10; name: FUN_00ce2c10
 */


void FUN_00ce2c10(long param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "anime_ptn_endless";
  if (param_2 != 1) {
    pcVar1 = "anime_ptn_normal";
  }
  FUN_00ffcf80(param_1 + 0x100,pcVar1);
  return;
}


