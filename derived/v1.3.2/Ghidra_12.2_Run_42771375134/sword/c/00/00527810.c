/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527810; name: FUN_00527810
 */


undefined8
FUN_00527810(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
            long param_6)

{
  float fVar1;
  
  *(undefined1 *)(param_6 + 0x895) = 1;
  *(undefined4 *)(param_6 + 0x6ec) = param_4;
  *(undefined4 *)(param_6 + 0x6f0) = param_5;
  fVar1 = DAT_01d4bec0;
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  *(float *)(param_6 + 0x6dc) = param_1;
  if (param_2 <= 0.0) {
    param_2 = fVar1;
  }
  if (param_3 <= 0.0) {
    param_3 = DAT_01d4bc70;
  }
  *(float *)(param_6 + 0x6e0) = param_2;
  *(float *)(param_6 + 0x6e8) = param_3;
  fVar1 = atanf(param_3);
  *(float *)(param_6 + 0x6e4) = fVar1 + fVar1;
  return 0;
}


