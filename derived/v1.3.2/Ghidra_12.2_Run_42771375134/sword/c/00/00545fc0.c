/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00545fc0; name: FUN_00545fc0
 */


void FUN_00545fc0(long *param_1)

{
  undefined *puVar1;
  
  FUN_005463e0();
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_02713b80;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = 1;
  return;
}


