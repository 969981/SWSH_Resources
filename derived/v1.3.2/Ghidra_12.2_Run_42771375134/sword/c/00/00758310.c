/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00758310; name: FUN_00758310
 */


void FUN_00758310(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_006e16c0();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = PTR_DAT_02715e78 + 0x10;
  puVar2 = PTR_DAT_02715e78 + 0xa8;
  param_1[9] = (long)(PTR_DAT_02715e78 + 0x68);
  param_1[10] = (long)puVar2;
  lVar3 = param_1[0x2f];
  *param_1 = (long)puVar1;
  if (lVar3 == 0) {
    lVar3 = param_1[1];
  }
  param_1[0x36] = -0x340d631b7bddd9bb;
  param_1[0x37] = (long)&DAT_01d38550;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0x4843500041800000;
  param_1[0x3f] = 0x8000000010;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = lVar3;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  return;
}


