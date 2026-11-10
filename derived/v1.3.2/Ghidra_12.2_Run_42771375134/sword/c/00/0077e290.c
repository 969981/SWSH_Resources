/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077e290; name: FUN_0077e290
 */


void FUN_0077e290(long *param_1,ushort *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_02716210 + 0x10;
  puVar2 = PTR_DAT_02716210 + 0x48;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  param_1[9] = (long)puVar2;
  param_1[10] = 0x100000000;
  puVar1 = PTR_DAT_02710ad0 + 0x10;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x12] = (long)param_2;
  param_1[0x16] = (long)puVar1;
  param_1[0x17] = 0;
  uVar3 = *(uint *)PTR_DAT_02716218;
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = (long)&DAT_01d38550;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*param_2 <= uVar3) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar3;
  param_1[0x14] = 0;
  param_1[0x13] = (ulong)*(uint *)(param_2 + (ulong)uVar3 * 2 + 6) + (long)param_2;
  return;
}


