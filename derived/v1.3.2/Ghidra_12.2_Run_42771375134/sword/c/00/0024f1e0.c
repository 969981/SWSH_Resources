/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024f1e0; name: FUN_0024f1e0
 */


void FUN_0024f1e0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30001;
  *(undefined4 *)(param_1 + 3) = 1;
  puVar1 = PTR_DAT_02711e78;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  param_1[0x10] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[2] = (long)(puVar1 + 0xe0);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 100) = 1;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}


