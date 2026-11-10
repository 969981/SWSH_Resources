/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cee90; name: FUN_006cee90
 */


void FUN_006cee90(undefined8 param_1,undefined4 param_2,uint param_3)

{
  nn::os::InitializeLightEvent(param_1,param_3 & 1,param_2);
  return;
}


