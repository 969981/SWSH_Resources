/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7af0; name: FUN_012b7af0
 */


undefined4 FUN_012b7af0(long param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 uVar5;
  long lVar6;
  
  iVar2 = FUN_008783b0(*(undefined8 *)(param_1 + 0x58));
  if (iVar2 == 0x36b) {
    return 0xb;
  }
  iVar2 = FUN_008783b0(*(undefined8 *)(param_1 + 0x58));
  if ((param_2 == 1) && (iVar2 == 0x32d)) {
    return 0xb;
  }
  uVar3 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
  if (((uVar3 & 1) != 0) && (lVar6 = *(long *)(param_1 + 0xc0), lVar6 != 0)) {
    FUN_0131acf0(lVar6);
    piVar4 = *(int **)(lVar6 + 0x130);
    puVar1 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
    if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0xb) != '\0') {
      return 7;
    }
  }
  uVar3 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
  if (((uVar3 & 1) == 0) || (lVar6 = *(long *)(param_1 + 0xc0), lVar6 == 0)) {
    return 7;
  }
  FUN_0131acf0(lVar6);
  piVar4 = *(int **)(lVar6 + 0x130);
  puVar1 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  uVar5 = 7;
  if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0xf) != '\0') {
    uVar5 = 0xb;
  }
  return uVar5;
}


