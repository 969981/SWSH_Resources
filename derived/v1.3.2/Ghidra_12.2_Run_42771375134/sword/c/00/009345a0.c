/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009345a0; name: FUN_009345a0
 */


void FUN_009345a0(long *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_02717dc0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  return;
}


