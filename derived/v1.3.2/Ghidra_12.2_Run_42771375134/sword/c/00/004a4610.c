/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4610; name: FUN_004a4610
 */


void FUN_004a4610(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  if ((param_2 == 0) ||
     (FUN_004865e0(param_2,param_1,param_3,param_4 & 1), *(long *)(param_1 + 0x40) != 0)) {
    return;
  }
  *(long *)(param_1 + 0x40) = param_2;
  return;
}


