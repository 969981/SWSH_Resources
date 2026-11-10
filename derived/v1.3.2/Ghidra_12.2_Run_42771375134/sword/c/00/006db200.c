/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006db200; name: FUN_006db200
 */


void FUN_006db200(long *param_1)

{
  undefined *puVar1;
  
  FUN_006dae20(param_1,0);
  puVar1 = PTR_DAT_02715478;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0x118);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = -1;
  return;
}


