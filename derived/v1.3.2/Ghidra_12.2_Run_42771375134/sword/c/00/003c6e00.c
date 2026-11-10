/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6e00; name: FUN_003c6e00
 */


void FUN_003c6e00(long *param_1,long param_2,long param_3,undefined1 param_4,undefined1 param_5)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[2] = param_3;
  param_1[3] = -1;
  puVar1 = PTR_DAT_02712780;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x25) = param_5;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  return;
}


