/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cc9b0; name: FUN_011cc9b0
 */


void FUN_011cc9b0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02725808;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x58);
  return;
}


