/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba190; name: FUN_012ba190
 */


undefined4 FUN_012ba190(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  
  bVar2 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if (((bVar2 < 0xfa) || (uVar3 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar3 & 1) == 0))
     || (lVar6 = *(long *)(param_1 + 0xc0), lVar6 == 0)) {
    return 0x23;
  }
  FUN_0131acf0(lVar6);
  piVar5 = *(int **)(lVar6 + 0x130);
  puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
  uVar4 = 0x22;
  if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x26) == '\0') {
    uVar4 = 0x23;
  }
  return uVar4;
}


