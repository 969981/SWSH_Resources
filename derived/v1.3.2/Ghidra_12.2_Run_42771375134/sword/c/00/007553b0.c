/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007553b0; name: FUN_007553b0
 */


void FUN_007553b0(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_006e16c0();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = PTR_DAT_02715e60;
  *param_1 = (long)(PTR_DAT_02715e60 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  param_1[0x41] = -0x340d631b7bddd9bb;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = param_3;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = (long)&DAT_01d38550;
  param_1[0x41] = param_4[1];
  param_1[0x42] = param_4[2];
  param_1[0x43] = param_4[3];
  lVar3 = param_4[4];
  if (lVar3 == 0) {
    param_1[0x44] = 0;
    *(int *)(param_1 + 0x45) = (int)param_4[5];
    lVar3 = param_4[3];
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = param_1[0x44];
    param_1[0x44] = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x45) = (int)param_4[5];
    lVar3 = param_4[3];
  }
  if (lVar3 == 0) {
    param_1[0x40] = *param_4;
  }
  else {
    lVar3 = *param_4;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = param_1[0x40];
    param_1[0x40] = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  param_1[0x46] = param_5;
  return;
}


