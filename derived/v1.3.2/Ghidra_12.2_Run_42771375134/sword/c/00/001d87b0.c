/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d87b0; name: FUN_001d87b0
 */


void FUN_001d87b0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x3000f;
  puVar1 = PTR_DAT_02711088;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 001d87ec to 001d87f3 has its CatchHandler @ 001d8850 */
  FUN_003ba8b0(param_1 + 6);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xf0ffffff | 0x8000000;
                    /* try { // try from 001d8804 to 001d880b has its CatchHandler @ 001d883c */
  uVar2 = FUN_003ba9c0(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = (long)(param_1 + 0xc);
  param_1[0x12] = 0x400000000;
  param_1[2] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


