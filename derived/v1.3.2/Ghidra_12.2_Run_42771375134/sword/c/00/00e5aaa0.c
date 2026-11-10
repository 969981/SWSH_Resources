/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5aaa0; name: FUN_00e5aaa0
 */


void FUN_00e5aaa0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar6 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar6);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dc4f00(param_1,param_2,param_3,lVar5);
  puVar4 = PTR_DAT_0271fc28;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)((long)param_1 + 0x84b) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x198);
  param_1[10] = (long)(puVar4 + 0x1d8);
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x10a] = 0;
  *(undefined1 *)((long)param_1 + 0x8b3) = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x117] = 0;
  *(undefined1 *)((long)param_1 + 0x91b) = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x124] = 0;
  *(undefined1 *)((long)param_1 + 0x983) = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x131] = 0;
  *(undefined1 *)((long)param_1 + 0x9eb) = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x13e] = 0;
  *(undefined1 *)((long)param_1 + 0xa53) = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x14b] = 0;
  *(undefined1 *)((long)param_1 + 0xabb) = 0;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x158] = 0;
  *(undefined1 *)((long)param_1 + 0xb23) = 0;
  param_1[0x15f] = 0;
  param_1[0x15e] = 0;
  param_1[0x165] = 0;
  *(undefined1 *)((long)param_1 + 0xb8b) = 0;
  param_1[0x16c] = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 1;
  *(undefined8 *)((long)param_1 + 0xc04) = 0;
  *(undefined8 *)((long)param_1 + 0xbfc) = 0;
  *(undefined4 *)((long)param_1 + 0xc0c) = 0;
  *(undefined8 *)((long)param_1 + 0xbf4) = 0;
  *(undefined4 *)(param_1 + 0x182) = 1;
  *(undefined8 *)((long)param_1 + 0xc24) = 0;
  *(undefined8 *)((long)param_1 + 0xc1c) = 0;
  *(undefined8 *)((long)param_1 + 0xc14) = 0;
  param_1[0x18b] = -0x340d631b7bddd9bb;
  iVar3 = (int)param_1[0xf8];
  param_1[0x17a] = param_1[0xf8];
  fVar12 = *(float *)(&DAT_01cd5320 + (ulong)(iVar3 == 2) * 4);
  fVar13 = *(float *)((long)param_1 + 0xbd4);
  fVar14 = fVar13 + fVar12;
  if (fVar13 <= 0.0) {
    fVar14 = fVar13;
  }
  *(undefined2 *)((long)param_1 + 0xc66) = 0xffff;
  *(int *)(param_1 + 0x174) = (int)param_1[0x74];
  param_1[0x179] = param_1[0xf7];
  param_1[0x178] = param_1[0xf6];
  param_1[0x17b] = param_1[0xf9];
  fVar13 = *(float *)(param_1 + 0x17b);
  fVar12 = fVar13 + fVar12;
  if (fVar13 <= 0.0) {
    fVar12 = fVar13;
  }
  *(undefined1 *)((long)param_1 + 0xc64) = 1;
  param_1[0x173] = param_1[0x17];
  param_1[0x172] = param_1[0x16];
  param_1[0x177] = param_1[0xf5];
  param_1[0x176] = param_1[0xf4];
  *(undefined4 *)((long)param_1 + 0xc2c) = 0;
  param_1[0x18a] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)((long)param_1 + 0xc65) = 0;
  param_1[0x18d] = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  param_1[0x17d] = param_1[0xfb];
  param_1[0x17c] = param_1[0xfa];
  *(int *)(param_1 + 0x186) = iVar3;
  *(float *)((long)param_1 + 0xc34) = fVar14;
  *(float *)(param_1 + 0x187) = fVar12;
  *(undefined8 *)((long)param_1 + 0xc44) = *(undefined8 *)((long)param_1 + 0xbe4);
  puVar4 = PTR_DAT_02710848;
  *(undefined8 *)((long)param_1 + 0xc3c) = *(undefined8 *)((long)param_1 + 0xbdc);
  iVar3 = *(int *)((long)param_1 + 0x3a4);
  *(int *)((long)param_1 + 0xc4c) = (int)((ulong)param_1[0xfb] >> 0x20);
  puVar7 = *(ulong **)(*(long *)puVar4 + 0x98);
  uVar6 = *puVar7;
  uVar10 = puVar7[1];
  do {
    uVar11 = uVar6 ^ uVar10;
    iVar9 = (int)uVar10;
    iVar8 = (int)uVar6;
    uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
    uVar6 = uVar11 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar11 << 0x10;
    uVar2 = iVar8 + iVar9 & 0x7f;
  } while (99 < uVar2);
  *puVar7 = uVar6;
  puVar7[1] = uVar10;
  *(bool *)((long)param_1 + 0xc64) = (int)uVar2 < iVar3;
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x200000;
  return;
}


