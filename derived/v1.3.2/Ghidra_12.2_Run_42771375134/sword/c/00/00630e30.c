/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00630e30; name: FUN_00630e30
 */


void FUN_00630e30(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(PTR_DAT_02714598 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_005f1340(param_1 + 8,param_2);
  param_1[0x38] = (long)(PTR_DAT_027145a0 + 0x10);
  param_1[0x39] = param_2;
  FUN_00631b40(param_1 + 0x3a,param_2,1);
  *(undefined4 *)(param_1 + 0x61) = 2;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  return;
}


