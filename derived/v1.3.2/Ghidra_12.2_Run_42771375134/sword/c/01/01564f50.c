/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564f50; name: FUN_01564f50
 */


void FUN_01564f50(undefined8 param_1,uint param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)FUN_0076cd80(param_1,"g_mode");
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = (ulong)param_2;
  }
  return;
}


