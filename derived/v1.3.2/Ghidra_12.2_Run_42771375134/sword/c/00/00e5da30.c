/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5da30; name: FUN_00e5da30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5da30(long *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar8 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar8);
    lVar9 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00ea87d0(param_1,param_2,param_3,lVar9);
  puVar6 = PTR_DAT_0271fc58;
  *param_1 = (long)(PTR_DAT_0271fc58 + 0x10);
  param_1[9] = (long)(puVar6 + 0x290);
  param_1[10] = (long)(puVar6 + 0x2d0);
  *(undefined8 *)((long)param_1 + 0x8a6) = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((long)param_1 + 0x8ae) = 1;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined2 *)((long)param_1 + 0x8b4) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x8be) = 0;
  param_1[0x117] = 0;
  *(undefined8 *)((long)param_1 + 0x8d6) = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  *(undefined8 *)((long)param_1 + 0x8e6) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x8de) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x8ee) = 0;
  *(undefined2 *)((long)param_1 + 0x8f2) = 0;
  *(undefined2 *)(param_1 + 0x11e) = 0xff;
  param_1[0x11f] = 0;
  *(undefined8 *)((long)param_1 + 0x93e) = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x12e] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[0x12f] = -0x340d631b7bddd9bb;
  param_1[0x130] = -0x340d631b7bddd9bb;
  *(undefined8 *)((long)param_1 + 0x98d) = 0;
  param_1[0x131] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  param_1[0x14d] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  *(undefined4 *)(param_1 + 0x152) = 0;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  *(undefined4 *)(param_1 + 0x154) = 1;
  *(undefined8 *)((long)param_1 + 0xab4) = 0;
  *(undefined8 *)((long)param_1 + 0xaac) = 0;
  *(undefined8 *)((long)param_1 + 0xaa4) = 0;
  *(undefined8 *)((long)param_1 + 0xabc) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0xad4) = 0;
  *(undefined8 *)((long)param_1 + 0xac4) = 0;
  *(undefined4 *)((long)param_1 + 0xadc) = 0;
  *(undefined8 *)((long)param_1 + 0xacc) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined8 *)((long)param_1 + 0xae4) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4) = 0;
  *(undefined8 *)((long)param_1 + 0xafc) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0xb24) = 0;
  *(undefined8 *)((long)param_1 + 0xb1c) = 0;
  *(undefined8 *)((long)param_1 + 0xb14) = 0;
  *(undefined8 *)((long)param_1 + 0xb04) = 0;
  lVar4 = _UNK_01d4a138;
  lVar9 = _DAT_01d4a130;
  *(undefined8 *)((long)param_1 + 0xb0c) = 0;
  *(undefined2 *)(param_1 + 0x166) = 1;
  *(undefined1 *)((long)param_1 + 0xbd9) = 1;
  param_1[0x181] = -0x106122acd047a43d;
  param_1[0x182] = (long)"Waist";
  param_1[0x183] = 5;
  *(undefined4 *)((long)param_1 + 0xb2c) = 0;
  *(undefined1 *)((long)param_1 + 0xb32) = 0;
  *(undefined4 *)((long)param_1 + 0xb34) = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  param_1[0x168] = 0;
  param_1[0x16d] = 0;
  param_1[0x16c] = 0;
  param_1[0x16b] = 0;
  param_1[0x16a] = 0;
  param_1[0x170] = -0x340d631b7bddd9bb;
  param_1[0x171] = -0x340d631b7bddd9bb;
  *(undefined4 *)((long)param_1 + 0xbd4) = 0;
  *(undefined1 *)(param_1 + 0x17b) = 0;
  *(undefined2 *)(param_1 + 0x17a) = 0;
  param_1[0x179] = 0;
  param_1[0x178] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  param_1[0x173] = 0;
  param_1[0x172] = 0;
  *(undefined2 *)((long)param_1 + 0xbda) = 0;
  *(undefined1 *)((long)param_1 + 0xbdc) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  param_1[0x17f] = 0;
  param_1[0x17e] = 0;
  param_1[0x17d] = 0;
  param_1[0x17c] = 0;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0xc2c) = 0;
  param_1[0x186] = 0;
  param_1[0x16f] = lVar4;
  param_1[0x16e] = lVar9;
  FUN_00f4e540(param_1 + 0x187);
  param_1[0x1a9] = -0x340d631b7bddd9bb;
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  *(undefined1 *)((long)param_1 + 0xd5a) = 0;
  *(undefined2 *)(param_1 + 0x1ab) = 0;
  *(undefined4 *)((long)param_1 + 0xd54) = 0;
  param_1[0x1ac] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x1ad) = 0;
  *(undefined1 *)((long)param_1 + 0xd6c) = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  (**(code **)(*param_1 + 0x250))(param_1,0);
  puVar6 = PTR_DAT_0271fc30;
  lVar9 = *(long *)PTR_DAT_0271fc30;
  *(undefined4 *)((long)param_1 + 0xbd4) = *(undefined4 *)(lVar9 + 0x58);
  iVar3 = *(int *)(lVar9 + 0x58);
  uVar1 = iVar3 + 2;
  if (-1 < iVar3 + 1) {
    uVar1 = iVar3 + 1;
  }
  *(uint *)(lVar9 + 0x58) = (iVar3 + 1) - (uVar1 & 0xfffffffe);
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  puVar5 = PTR_DAT_027175d0;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = 0;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  plVar10 = (long *)param_1[0x17c];
  param_1[0x17c] = (long)plVar7;
  if (plVar10 != (long *)0x0) {
    *plVar10 = (long)(puVar5 + 0x10);
    if (plVar10[1] != 0) {
      (**(code **)(*(long *)(plVar10[1] + 0x48) + 0x18))();
      plVar10[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x17d] + 0x18))
              ((long *)param_1[0x17d],plVar10,param_1[0x17e],param_1[0x17f]);
    plVar7 = (long *)param_1[0x17c];
  }
  param_1[0x17d] = (long)param_2;
  param_1[0x17e] = 0x10;
  param_1[0x17f] = 8;
  local_70 = 0xeff3a8a330b976e5;
  local_68 = "SymbolEncount";
  local_60 = 0xd;
  local_58 = 0;
  FUN_00895ca0(plVar7,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_70 = 0x538b73ebb59bd5b;
  FUN_00dc07c0(param_1,&local_70,0xffffffff);
  *(int *)(*(long *)puVar6 + 0x50) = *(int *)(*(long *)puVar6 + 0x50) + 1;
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x80000;
  return;
}


