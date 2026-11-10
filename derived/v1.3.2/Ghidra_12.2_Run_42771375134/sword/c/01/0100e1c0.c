/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100e1c0; name: FUN_0100e1c0
 */


void FUN_0100e1c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02723508;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  *puVar2 = 1;
  puVar2 = PTR_DAT_02723510;
  *(undefined8 *)((long)param_1 + 0x54) = 0x200000001;
  param_1[9] = (long)(puVar2 + 0x40);
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x5c) = 4;
  FUN_006cf0a0(param_1 + 0xc,PTR_DAT_02715928);
  FUN_006cf0a0(param_1 + 0x10,PTR_DAT_02715930);
  param_1[0x1a] = 0;
  param_1[0x18] = -0x340d631b7bddd9bb;
  param_1[0x19] = (long)&DAT_01d38550;
  param_1[0x1e] = -0x340d631b7bddd9bb;
  param_1[0x1f] = (long)&DAT_01d38550;
  param_1[0x42] = -0x340d631b7bddd9bb;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x3e] = 0;
  param_1[0x43] = (long)&DAT_01d38550;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0x24] = -0x340d631b7bddd9bb;
  param_1[0x25] = (long)&DAT_01d38550;
  param_1[0x2a] = -0x340d631b7bddd9bb;
  param_1[0x2b] = (long)&DAT_01d38550;
  param_1[0x30] = -0x340d631b7bddd9bb;
  param_1[0x31] = (long)&DAT_01d38550;
  param_1[0x36] = -0x340d631b7bddd9bb;
  param_1[0x37] = (long)&DAT_01d38550;
  param_1[0x3c] = -0x340d631b7bddd9bb;
  param_1[0x3d] = (long)&DAT_01d38550;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x1fe000000000;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0xcb] = lVar3;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  return;
}


