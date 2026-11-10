/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8670; name: FUN_006e8670
 */


void FUN_006e8670(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_027155c8;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
  }
  param_1[1] = lVar4;
  *puVar1 = 1;
  puVar1 = PTR_DAT_027155d0;
  param_1[0xf] = 0x800000;
  param_1[0x10] = 0x1800000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x11] = 0x2000000;
  param_1[0x12] = 0x100000;
  *(undefined2 *)((long)param_1 + 0xac) = 1;
  param_1[0x13] = 0x10000;
  param_1[0x14] = 0x2000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x43800000780;
  *(undefined4 *)(param_1 + 0x15) = 0x1000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x18] = 0x50000000b01;
  param_1[0x19] = 0xb01000002d0;
  param_1[0x1a] = 0x800000008;
  *(undefined4 *)(param_1 + 0x1b) = 0xb01;
  *(undefined8 *)((long)param_1 + 0xdc) = 0x100000001;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  lVar2 = DAT_01d4d7d8;
  param_1[0xc] = DAT_01d4d7d0;
  param_1[0xd] = lVar2;
  lVar2 = DAT_01d4d7c8;
  param_1[10] = DAT_01d4d7c0;
  param_1[0xb] = lVar2;
  param_1[9] = (long)(puVar1 + 0x40);
  FUN_006eac60(param_1 + 0x1e);
  puVar1 = PTR_DAT_027155d8 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = (long)puVar1;
  param_1[0x1f] = lVar4;
  puVar1 = PTR_DAT_027154f0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(long **)puVar1 = param_1 + 0x1e;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x28] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 != 0) goto LAB_006e87fc;
  }
  lVar4 = FUN_0075ecb0();
LAB_006e87fc:
  param_1[0x31] = lVar4;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  FUN_006cee90((long)param_1 + 0x1a4,1,0);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_019a2b60(param_1 + 0x43e);
  FUN_019a5490(param_1 + 0x843);
  FUN_019a5490(param_1 + 0x84e);
  param_1[0x859] = 0xfff00000000;
  param_1[0x85a] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x105b,0,0x208);
}


