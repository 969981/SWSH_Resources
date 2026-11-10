/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c0980; name: FUN_009c0980
 */


void FUN_009c0980(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027187c8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  return;
}


