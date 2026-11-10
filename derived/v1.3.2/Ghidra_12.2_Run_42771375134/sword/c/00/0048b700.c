/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b700; name: FUN_0048b700
 */


void FUN_0048b700(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027132b8;
  param_1[-3] = (long)(PTR_DAT_027132b8 + 0x10);
  param_1[-1] = (long)(puVar1 + 0xe8);
  *param_1 = (long)(puVar1 + 0x100);
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1 + 0x53) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x52] = 0;
    *(undefined4 *)((long)param_1 + 0x29c) = 0;
  }
  if (*(long *)((long)param_1 + 0x1ac) != 0) {
    FUN_00431200();
  }
  FUN_004a57b0(param_1 + 0x2b);
  FUN_0044e790(param_1);
  return;
}


