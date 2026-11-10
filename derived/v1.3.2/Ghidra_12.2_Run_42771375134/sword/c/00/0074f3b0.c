/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074f3b0; name: FUN_0074f3b0
 */


void FUN_0074f3b0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02715df8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = -0x340d631b7bddd9bb;
  param_1[0xc] = (long)&DAT_01d38550;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  FUN_006fbc40(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 2;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  FUN_006cee90((long)param_1 + 0x314,1,0);
  param_1[100] = 0;
  return;
}


