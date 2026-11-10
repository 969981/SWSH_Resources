/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4840; name: FUN_006b4840
 */


void FUN_006b4840(long *param_1,uint param_2)

{
  long *local_28;
  
  if (((*param_1 != 0) && (FUN_006b4b10(&local_28), local_28 != (long *)0x0)) &&
     ((**(code **)(*local_28 + 200))(local_28,(long)param_1 + 0xc,param_2 & 1),
     local_28 != (long *)0x0)) {
    (**(code **)(*local_28 + 0x18))();
  }
  return;
}


