/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dbd20; name: FUN_008dbd20
 */


void FUN_008dbd20(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_02717c00;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}


