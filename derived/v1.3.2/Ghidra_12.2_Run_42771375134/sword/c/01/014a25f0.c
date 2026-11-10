/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a25f0; name: FUN_014a25f0
 */


void FUN_014a25f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  FUN_006d86d0(param_1,0x80018280);
  puVar5 = PTR_DAT_0272a1b8;
  *(undefined1 *)((long)param_1 + 0x75) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x19] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)((long)param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[9] = (long)(puVar5 + 0x90);
  param_1[10] = (long)(puVar5 + 0x100);
  puVar5 = PTR_DAT_02710860;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
LAB_014a2678:
    lVar6 = FUN_0075ecb0();
  }
  else {
    lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    if (lVar6 == 0) goto LAB_014a2678;
  }
  param_1[0x1c] = lVar6;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x80) != 0)) {
    lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    if (lVar6 != 0) goto LAB_014a26b0;
  }
  lVar6 = FUN_0075ecb0();
LAB_014a26b0:
  param_1[0x22] = lVar6;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  puVar5 = PTR_DAT_027194a8;
  *(undefined1 *)(param_1 + 0x72) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  param_1[0x50] = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_02715410;
  lVar1 = *(long *)(PTR_DAT_02715410 + 0x10);
  param_1[0x7b] = *(long *)(PTR_DAT_02715410 + 0x18);
  lVar2 = *(long *)puVar5;
  param_1[0x79] = *(long *)(puVar5 + 8);
  lVar3 = *(long *)(puVar5 + 0x30);
  param_1[0x7f] = *(long *)(puVar5 + 0x38);
  lVar4 = *(long *)(puVar5 + 0x20);
  param_1[0x7d] = *(long *)(puVar5 + 0x28);
  param_1[0x28] = lVar6;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x7a] = lVar1;
  puVar5 = PTR_DAT_0272a1c0;
  param_1[0x4e] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x78] = lVar2;
  param_1[0x7e] = lVar3;
  param_1[0x2c] = (long)(puVar5 + 0x10);
  param_1[0x2d] = 0;
  param_1[0x7c] = lVar4;
  return;
}


