/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00192700; name: FUN_00192700
 */


void FUN_00192700(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  void *__s;
  ulong uVar6;
  long lVar7;
  
  iVar4 = (int)param_3;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x14) != 0) {
                    /* try { // try from 0019272c to 00192757 has its CatchHandler @ 001929a0 */
    plVar5 = (long *)FUN_00400d30();
    __s = (void *)(**(code **)(*plVar5 + 0x10))
                            (plVar5,0x80,"NonTrackedAlloc","./../../Common/src\\CmBitMap.h",0x1ce);
                    /* try { // try from 00192758 to 00192767 has its CatchHandler @ 00192990 */
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x80);
  }
  if (iVar4 != 0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar6 = (ulong)uVar3;
    if (iVar4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar7 * 8);
        uVar2 = uVar6 + lVar7;
        lVar7 = lVar7 + 2;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + (uVar2 & 0xffffffff) * 8) = *puVar1;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)((int)uVar2 + 1) * 8) = puVar1[1];
      } while ((param_3 & 0xffffffff) - (param_3 & 1) != lVar7);
      uVar6 = (ulong)(uVar3 + (int)lVar7);
    }
    if ((param_3 & 1) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 8) = *(undefined8 *)(param_2 + lVar7 * 8);
    }
    *(uint *)(param_1 + 0x3c) = uVar3 + iVar4;
  }
  return;
}


