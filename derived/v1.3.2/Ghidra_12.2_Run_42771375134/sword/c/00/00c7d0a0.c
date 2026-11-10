/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7d0a0; name: FUN_00c7d0a0
 */


void FUN_00c7d0a0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2c8,8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *(undefined8 *)((long)plVar4 + 0x1e) = 0;
  puVar2 = PTR_DAT_0271c280;
  plVar4[3] = 0;
  puVar1 = PTR_DAT_02719748;
  plVar4[2] = 0;
  puVar3 = PTR_DAT_0271c2f8;
  *(undefined4 *)(plVar4 + 1) = 0xf;
  *plVar4 = (long)(puVar2 + 0x10);
  lVar6 = *(long *)puVar1;
  plVar4[5] = 0;
  plVar4[6] = lVar6;
  plVar4[7] = lVar6;
  plVar4[8] = lVar6;
  lVar7 = *(long *)puVar3;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  *(undefined1 *)(plVar4 + 0xf) = 1;
  plVar4[9] = lVar6;
  plVar4[10] = lVar7;
  *(undefined8 *)((long)plVar4 + 0x9e) = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  puVar1 = PTR_DAT_0271c288;
  *(undefined4 *)(plVar4 + 0x11) = 0xf;
  plVar4[0x19] = lVar6;
  plVar4[0x15] = 0;
  plVar4[0x16] = lVar6;
  puVar1 = puVar1 + 0x10;
  plVar4[0x10] = (long)puVar1;
  plVar4[0x17] = lVar6;
  plVar4[0x18] = lVar6;
  *(undefined4 *)(plVar4 + 0x1a) = 6;
  *(undefined8 *)((long)plVar4 + 0xfe) = 0;
  *(undefined4 *)(plVar4 + 0x1d) = 0xf;
  plVar4[0x25] = lVar6;
  *(undefined4 *)(plVar4 + 0x26) = 6;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = (long)puVar1;
  plVar4[0x21] = 0;
  plVar4[0x22] = lVar6;
  plVar4[0x23] = lVar6;
  plVar4[0x24] = lVar6;
  plVar4[0x27] = 0;
  plVar4[0x28] = (long)puVar1;
  *(undefined8 *)((long)plVar4 + 0x15e) = 0;
  *(undefined4 *)(plVar4 + 0x29) = 0xf;
  plVar4[0x31] = lVar6;
  *(undefined4 *)(plVar4 + 0x32) = 6;
  plVar4[0x2a] = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2d] = 0;
  plVar4[0x2e] = lVar6;
  plVar4[0x2f] = lVar6;
  plVar4[0x30] = lVar6;
  plVar4[0x33] = 0;
  plVar4[0x34] = (long)puVar1;
  *(undefined8 *)((long)plVar4 + 0x1be) = 0;
  *(undefined4 *)(plVar4 + 0x35) = 0xf;
  plVar4[0x3d] = lVar6;
  *(undefined4 *)(plVar4 + 0x3e) = 6;
  plVar4[0x42] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x39] = 0;
  plVar4[0x3a] = lVar6;
  plVar4[0x3b] = lVar6;
  plVar4[0x3c] = lVar6;
  plVar4[0x3f] = 0;
  plVar4[0x40] = (long)puVar1;
  *(undefined8 *)((long)plVar4 + 0x21e) = 0;
  plVar4[0x43] = 0;
  plVar4[0x45] = 0;
  *(undefined4 *)(plVar4 + 0x41) = 0xf;
  plVar4[0x46] = lVar6;
  plVar4[0x47] = lVar6;
  plVar4[0x48] = lVar6;
  plVar4[0x49] = lVar6;
  *(undefined4 *)(plVar4 + 0x4a) = 6;
  plVar4[0x4b] = 0;
  *(undefined8 *)((long)plVar4 + 0x27e) = 0;
  *(undefined4 *)(plVar4 + 0x4d) = 0xf;
  *(undefined2 *)((long)plVar4 + 0x2c4) = 0x101;
  *(undefined4 *)(plVar4 + 0x58) = 0x1010101;
  plVar4[0x52] = lVar6;
  plVar4[0x53] = lVar6;
  plVar4[0x54] = lVar6;
  plVar4[0x55] = lVar6;
  *(undefined4 *)(plVar4 + 1) = 0x10;
  plVar4[0x4f] = 0;
  plVar4[0x4e] = 0;
  plVar4[0x51] = 0;
  plVar4[0x4c] = (long)puVar1;
  *(undefined4 *)(plVar4 + 0x56) = 6;
  plVar4[0x57] = 0;
  *param_1 = plVar4;
  param_1[1] = param_2;
  param_1[2] = 0x2c8;
  param_1[3] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return;
}


