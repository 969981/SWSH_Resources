/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529d00; name: FUN_00529d00
 */


void FUN_00529d00(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if (((param_3 & 1) != 0) &&
     (((((*(float *)(param_2 + 0xb84) != *(float *)(param_2 + 0xba4) ||
         (*(float *)(param_2 + 0xb88) != *(float *)(param_2 + 0xba8))) ||
        (*(float *)(param_2 + 0xb8c) != *(float *)(param_2 + 0xbac))) ||
       ((*(float *)(param_2 + 0xb90) != *(float *)(param_2 + 0xbb0) ||
        (*(float *)(param_2 + 0xb94) != *(float *)(param_2 + 0xbb4))))) ||
      ((*(float *)(param_2 + 0xb98) != *(float *)(param_2 + 3000) ||
       ((*(float *)(param_2 + 0xb9c) != *(float *)(param_2 + 0xbbc) ||
        (*(float *)(param_2 + 0xba0) != *(float *)(param_2 + 0xbc0))))))))) {
    local_60 = *(undefined8 *)(param_2 + 0x1094);
    uStack_58 = *(undefined8 *)(param_2 + 0x109c);
    local_50 = *(undefined8 *)(param_2 + 0x10a4);
    uStack_48 = *(undefined8 *)(param_2 + 0x10ac);
    local_40 = *(undefined8 *)(param_2 + 0x10b4);
    uStack_38 = *(undefined8 *)(param_2 + 0x10bc);
    local_30 = *(undefined8 *)(param_2 + 0x10c4);
    uStack_28 = *(undefined8 *)(param_2 + 0x10cc);
    FUN_00515cb0(param_1,param_1,&local_60);
  }
  FUN_00515cb0(param_1,param_1,param_2 + 0xb3c);
  return;
}


