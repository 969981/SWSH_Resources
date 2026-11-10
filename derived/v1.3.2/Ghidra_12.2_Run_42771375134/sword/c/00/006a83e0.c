/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a83e0; name: FUN_006a83e0
 */


void FUN_006a83e0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02715118;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 10) = 0xffff;
  FUN_0075e2a0(param_1 + 2);
  FUN_0075e2a0(param_1 + 8);
  return;
}


