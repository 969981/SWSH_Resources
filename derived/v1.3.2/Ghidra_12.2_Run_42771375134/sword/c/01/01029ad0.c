/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029ad0; name: FUN_01029ad0
 */


void FUN_01029ad0(tm *param_1,time_t param_2)

{
  time_t local_18;
  
  local_18 = param_2;
  localtime_r(&local_18,param_1);
  return;
}


