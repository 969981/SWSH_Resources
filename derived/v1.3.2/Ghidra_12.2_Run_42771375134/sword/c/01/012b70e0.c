/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b70e0; name: FUN_012b70e0
 */


float FUN_012b70e0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0));
  fVar4 = 5.0;
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    uVar1 = FUN_0131acf0(0x40a00000);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    FUN_0131acf0(lVar3);
    piVar2 = *(int **)(lVar3 + 0x130);
    fVar4 = 0.0;
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar1 != 0)) {
      fVar4 = *(float *)((long)piVar2 + uVar1);
    }
    fVar5 = (float)FUN_01029020(DAT_01d4c4a8,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    fVar4 = fVar4 * (fVar5 + DAT_01d4be10);
  }
  return fVar4;
}


