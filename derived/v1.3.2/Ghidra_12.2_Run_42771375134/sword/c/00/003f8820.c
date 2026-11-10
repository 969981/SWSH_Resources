/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8820; name: FUN_003f8820
 */


void FUN_003f8820(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  float fVar1;
  undefined *puVar2;
  float *pfVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  puVar2 = PTR_DAT_02711060;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pfVar3 = *(float **)puVar2;
  FUN_0029a430();
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  fVar1 = DAT_01d4c15c;
  param_1[4] = 0;
  *(float *)((long)param_1 + 0x3c) = *pfVar3 * fVar1;
  *(undefined1 *)(param_1 + 8) = *param_3;
  FUN_003f88c0(param_1,param_4,param_5);
  return;
}


