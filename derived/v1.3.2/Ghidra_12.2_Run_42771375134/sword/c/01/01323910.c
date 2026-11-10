/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323910; name: FUN_01323910
 */


void FUN_01323910(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_0130ebb0();
  puVar1 = PTR_DAT_02727fa0;
  *param_1 = (long)(PTR_DAT_02727fa0 + 0x10);
  param_1[9] = (long)(puVar1 + 0xc0);
  param_1[10] = (long)(puVar1 + 0x130);
  lVar2 = *param_2;
  param_1[0x61] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *param_3;
  param_1[0x62] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x6a) = 7;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x72) = 1;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  FUN_006cee90((long)param_1 + 0x424,1,0);
  param_1[0x86] = 0;
  FUN_013234a0(param_1[0x61],param_1);
  return;
}


