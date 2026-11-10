/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7040; name: FUN_012b7040
 */


bool FUN_012b7040(long param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  
  uVar2 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    return false;
  }
  if (param_2 < 0x55) {
    FUN_0131acf0(lVar4);
    piVar3 = *(int **)(lVar4 + 0x130);
    puVar1 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
    return *(char *)((long)puVar1 + (ulong)param_2 + (ulong)*puVar1 + 4) != '\0';
  }
  return true;
}


