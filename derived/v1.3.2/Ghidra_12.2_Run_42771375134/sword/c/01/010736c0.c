/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010736c0; name: FUN_010736c0
 */


void FUN_010736c0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar5 = FUN_016c0010(*(undefined8 *)(param_1 + 0x5e8));
  iVar6 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) +
                   (ulong)(uint)(iVar6 + iVar5) * 0x18);
  bVar4 = FUN_0106f510(*(undefined4 *)(param_1 + 0x5dc),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  if (lVar7 == *(long *)(param_1 + (ulong)bVar4 * 8 + 0x660)) {
    bVar2 = false;
  }
  else if (*(char *)(param_1 + 0x690) == '\0') {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x5dc) != 1;
  }
  bVar4 = FUN_0106f510(*(undefined4 *)(param_1 + 0x5dc),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  lVar7 = *(long *)(param_1 + (ulong)bVar4 * 8 + 0x638);
  bVar4 = FUN_0106f510(*(undefined4 *)(param_1 + 0x5dc),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  bVar3 = *(int *)(param_1 + 0x5dc) != 1;
  bVar1 = lVar7 != *(long *)(param_1 + (ulong)bVar4 * 8 + 0x660) &&
          (*(char *)(param_1 + 0x690) == '\0' || bVar3);
  if (!bVar3) {
    bVar4 = FUN_0106f510(1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    bVar1 = bVar1 && *(long *)(param_1 + (ulong)bVar4 * 8 + 0x638) != -0x2ff60d54f2674d29;
  }
  FUN_01073d70(param_1,bVar2,bVar1);
  return;
}


