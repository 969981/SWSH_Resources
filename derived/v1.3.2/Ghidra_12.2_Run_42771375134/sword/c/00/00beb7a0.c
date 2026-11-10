/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beb7a0; name: FUN_00beb7a0
 */


long * FUN_00beb7a0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb80,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00ff9400(plVar3,*param_3,*param_4,*param_5);
  *(undefined2 *)(plVar3 + 0xc0) = 0;
  puVar1 = PTR_DAT_027178a0;
  plVar3[0xbe] = 0;
  plVar3[0xbd] = 0;
  plVar3[0xbc] = 0;
  plVar3[0xbf] = 0;
  plVar3[0xbb] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[9] = (long)(puVar1 + 0xb8);
  plVar3[10] = (long)(puVar1 + 0xf8);
  plVar3[0xba] = 0;
  FUN_010201f0(plVar3 + 0xc1);
  *(undefined2 *)(plVar3 + 0xde) = 0;
  *(undefined8 *)((long)plVar3 + 0x6f4) = 5;
  puVar1 = PTR_DAT_0271b9b0;
  *(undefined4 *)(plVar3 + 0xe7) = 0xffffffff;
  plVar3[0xe6] = 0;
  plVar3[0xe9] = 0;
  plVar3[0xe8] = 0;
  *(undefined2 *)(plVar3 + 0xea) = 0x101;
  *(undefined1 *)((long)plVar3 + 0x752) = 0;
  plVar3[0xf0] = 0;
  plVar3[0xfa] = 0;
  plVar3[0xf9] = 0;
  plVar3[0xf8] = 0;
  plVar3[0xf7] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[0xf6] = 0;
  plVar3[0xf5] = 0;
  plVar3[0x100] = 0;
  plVar3[0x106] = 0;
  plVar3[0x10c] = 0;
  plVar3[0x112] = 0;
  plVar3[0x118] = 0;
  plVar3[0x11e] = 0;
  plVar3[9] = (long)(puVar1 + 0xb8);
  plVar3[10] = (long)(puVar1 + 0xf8);
  FUN_00beba00(plVar3 + 0xe0);
  *(undefined1 *)(plVar3 + 0x163) = 1;
  plVar3[0x12a] = 0;
  plVar3[0x129] = 0;
  *(undefined1 *)(plVar3 + 0x128) = 0;
  plVar3[0x127] = 0;
  plVar3[0x126] = 0;
  plVar3[0x125] = 0;
  plVar3[0x124] = 0;
  plVar3[0x123] = 0;
  plVar3[0x122] = 0;
  plVar3[0x121] = 0;
  plVar3[0x120] = 0;
  *(undefined2 *)(plVar3 + 299) = 0x101;
  *(undefined1 *)((long)plVar3 + 0x95a) = 0;
  plVar3[0x130] = 0;
  plVar3[0x136] = 0;
  plVar3[0x13c] = 0;
  plVar3[0x142] = 0;
  plVar3[0x148] = 0;
  plVar3[0x14e] = 0;
  plVar3[0x154] = 0;
  plVar3[0x15a] = 0;
  plVar3[0x162] = 0;
  plVar3[0x161] = 0;
  plVar3[0x160] = 0;
  plVar3[0x15f] = 0;
  plVar3[0x15e] = 0;
  plVar3[0x15d] = 0;
  plVar3[0x15c] = 0;
  *(undefined4 *)((long)plVar3 + 0xb1a) = 0xffff;
  *(undefined4 *)(plVar3 + 0x168) = 999;
  plVar3[0x16b] = -1;
  plVar3[0x16a] = -1;
  plVar3[0x169] = -1;
  *(undefined4 *)(plVar3 + 0x16d) = 10;
  plVar3[0x167] = 0;
  plVar3[0x166] = 0;
  plVar3[0x165] = 0;
  plVar3[0x164] = 0;
  *(undefined1 *)((long)plVar3 + 0xb44) = 0;
  plVar3[0x16c] = 0;
  *(undefined2 *)(plVar3 + 0x16e) = 0;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0xb80;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


