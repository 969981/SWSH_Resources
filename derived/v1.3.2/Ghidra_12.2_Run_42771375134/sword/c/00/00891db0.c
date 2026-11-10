/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00891db0; name: FUN_00891db0
 */


void FUN_00891db0(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x198,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = PTR_DAT_02717538;
  lVar4 = *param_3;
  *(undefined4 *)(plVar2 + 4) = 10;
  *(undefined4 *)(plVar2 + 7) = 10;
  *(undefined4 *)(plVar2 + 10) = 10;
  *(undefined4 *)(plVar2 + 0xd) = 10;
  *(undefined4 *)(plVar2 + 0x10) = 10;
  *(undefined4 *)(plVar2 + 0x13) = 10;
  *(undefined4 *)(plVar2 + 0x16) = 10;
  *(undefined4 *)(plVar2 + 0x19) = 10;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 0x1c) = 10;
  *(undefined4 *)(plVar2 + 0x1f) = 10;
  *(undefined4 *)(plVar2 + 0x22) = 10;
  *(undefined4 *)(plVar2 + 0x25) = 10;
  *(undefined4 *)(plVar2 + 0x28) = 10;
  *(undefined4 *)(plVar2 + 0x2b) = 10;
  *(undefined4 *)(plVar2 + 0x2e) = 10;
  *(undefined4 *)(plVar2 + 0x31) = 10;
  *(undefined4 *)(plVar2 + 0x32) = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x14] = 0;
  plVar2[0x15] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x20] = 0;
  plVar2[0x21] = 0;
  plVar2[0x23] = 0;
  plVar2[0x24] = 0;
  plVar2[0x26] = 0;
  plVar2[0x27] = 0;
  plVar2[0x29] = 0;
  plVar2[0x2a] = 0;
  plVar2[0x2c] = 0;
  plVar2[0x2d] = 0;
  plVar2[0x2f] = 0;
  plVar2[0x30] = 0;
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = 0x198;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


