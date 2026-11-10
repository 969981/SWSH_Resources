/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002250; name: FUN_01002250
 */


void FUN_01002250(long *param_1)

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
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02723460;
  puVar1 = PTR_DAT_02723458;
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
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  FUN_01002e10(param_1 + 0xb);
  FUN_01002fc0(param_1 + 0x42);
  param_1[0x6e] = -0x340d631b7bddd9bb;
  param_1[0x6f] = (long)&DAT_01d38550;
  param_1[0x72] = -0x340d631b7bddd9bb;
  param_1[0x73] = (long)&DAT_01d38550;
  param_1[0x76] = -0x340d631b7bddd9bb;
  param_1[0x77] = (long)&DAT_01d38550;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((long)param_1 + 0x3de) = 0;
  *(undefined2 *)((long)param_1 + 0x41c) = 0xffff;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x42c) = 0xffff;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x43c) = 0xffff;
  *(undefined4 *)(param_1 + 0x87) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x44c) = 0xffff;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x45c) = 0xffff;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  param_1[0x7b] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x1b2] = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  param_1[0x1ae] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1aa] = 0;
  *(undefined8 *)((long)param_1 + 0xd84) = 0;
  *(undefined8 *)((long)param_1 + 0xd7c) = 0;
  FUN_008e6ed0(param_1 + 10);
  return;
}


