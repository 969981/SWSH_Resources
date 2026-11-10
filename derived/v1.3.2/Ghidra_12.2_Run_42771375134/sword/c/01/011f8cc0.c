/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f8cc0; name: FUN_011f8cc0
 */


void FUN_011f8cc0(long *param_1,long param_2,char *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725d40;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (*param_3 != '\0') {
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


