/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00196aa0; name: FUN_00196aa0
 */


long * FUN_00196aa0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  
  plVar7 = (long *)(*(long *)(param_1 + 8) + 0xfU & 0xfffffffffffffff0);
  iVar5 = *(int *)((long)plVar7 + 0xc);
  *plVar7 = (long)(PTR_DAT_02710fc8 + 0x10);
  bVar6 = (char)plVar7[2] != '\0';
  iVar3 = 0;
  if (bVar6) {
    iVar3 = iVar5 << 2;
  }
  *(uint *)(plVar7 + 10) = iVar5 + 0x1fU >> 5 | 0x80000000;
  *(undefined1 *)(plVar7 + 1) = 0;
  uVar2 = (iVar5 + 0x1fU >> 5) * 4 + 0xf & 0x3ffffff0;
  lVar1 = (long)(plVar7 + 0xc) + (ulong)uVar2;
  lVar4 = 0;
  if (bVar6) {
    lVar4 = lVar1 + (ulong)(uint)(iVar5 * 0x20);
  }
  plVar7[7] = lVar1;
  plVar7[8] = lVar4;
  plVar7[9] = (long)(plVar7 + 0xc);
  *(ulong *)(param_1 + 8) = (long)plVar7 + (ulong)(uVar2 + iVar5 * 0x20 + iVar3) + 0x58;
  return plVar7;
}


