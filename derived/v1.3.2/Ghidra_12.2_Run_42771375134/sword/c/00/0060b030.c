/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060b030; name: FUN_0060b030
 */


void FUN_0060b030(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02714518;
  *param_1 = (long)(PTR_DAT_02714510 + 0x10);
  param_1[6] = (long)(puVar1 + 0x10);
  if ((param_1[7] != 0) && (param_1[9] != 0)) {
    FUN_0060c4c0(param_1[7],param_1[9],"../../../../Include\\SiCore/SiCore_Map.h",0x3b7);
    param_1[9] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


