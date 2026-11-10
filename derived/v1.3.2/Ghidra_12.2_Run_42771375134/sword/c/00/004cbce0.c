/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cbce0; name: FUN_004cbce0
 */


void FUN_004cbce0(long *param_1)

{
  undefined *puVar1;
  
  FUN_004dd860();
  puVar1 = PTR_DAT_02713538;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00469140(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[3] == 0) {
    *(undefined2 *)((long)param_1 + 0x54) = 1;
    return;
  }
  *(undefined2 *)((long)param_1 + 0x54) = *(undefined2 *)(param_1[3] + 0x268);
  return;
}


