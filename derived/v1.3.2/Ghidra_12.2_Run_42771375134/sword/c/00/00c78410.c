/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c78410; name: FUN_00c78410
 */


undefined8 FUN_00c78410(undefined8 param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  
  puVar4 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  if (piVar1 != (int *)0x0) {
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
      puVar4 = (uint *)0x0;
      puVar7 = (uint *)&DAT_00000004;
      uVar5 = (ulong)uRam0000000000000000;
      puVar2 = (uint *)(uVar5 * 8 + 4);
      uVar3 = uRam0000000000000000;
    }
    else {
      puVar4 = (uint *)((long)piVar1 + uVar5);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = puVar4 + 1;
      uVar3 = *puVar4;
      uVar5 = (ulong)uVar3;
      puVar2 = puVar7 + uVar5 * 2;
    }
    if ((uVar3 != 0) && (*(long *)puVar7 != *param_2)) {
      lVar6 = uVar5 * 8;
      puVar4 = puVar4 + 3;
      do {
        puVar7 = puVar4;
        lVar6 = lVar6 + -8;
        if (lVar6 == 0) {
          return 0;
        }
        puVar4 = puVar7 + 2;
      } while (*(long *)puVar7 != *param_2);
    }
    if (puVar7 != puVar2) {
      return 1;
    }
  }
  return 0;
}


