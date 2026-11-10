/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00639320; name: FUN_00639320
 */


void FUN_00639320(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_027146b0 + 0x10);
  FUN_005bf710(param_1 + 1,*(undefined8 *)(param_2 + 8));
  param_1[3] = param_2;
  lVar1 = *(long *)(param_2 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = lVar1;
  param_1[5] = 0;
  if (lVar1 == 0) {
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    param_1[4] = lVar1;
  }
  param_1[10] = 5;
  param_1[0xb] = 5;
  param_1[0xc] = 5;
  param_1[0xd] = 5;
  param_1[0xe] = 5;
  *(undefined4 *)(param_1 + 0xf) = 5;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  return;
}


