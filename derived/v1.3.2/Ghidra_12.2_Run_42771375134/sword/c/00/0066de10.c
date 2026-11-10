/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066de10; name: FUN_0066de10
 */


void FUN_0066de10(long *param_1)

{
  long local_28;
  
  *param_1 = (long)(PTR_DAT_02714d30 + 0x10);
  if (((*(byte *)(param_1 + 9) & 1) == 0) && (local_28 = param_1[5], local_28 != 0)) {
    FUN_0066def0(param_1[1],&local_28,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    param_1[5] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


