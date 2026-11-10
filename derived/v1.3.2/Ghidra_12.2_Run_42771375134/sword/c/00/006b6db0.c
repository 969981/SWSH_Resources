/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6db0; name: FUN_006b6db0
 */


void FUN_006b6db0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_2 + 0x90);
  plVar1 = *(long **)(param_2 + 0x98);
  if (plVar1 != plVar2 && plVar2 != plVar1) {
    do {
      lVar5 = *plVar2;
      piVar3 = *(int **)(lVar5 + 0x10);
      if (((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
          (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 != 0)) &&
         (*(int *)((long)piVar3 + uVar4) == 1)) {
        if (lVar5 == 0) {
          return;
        }
        FUN_006b6e70(0,param_1,lVar5);
        FUN_006b9b70(0x3f800000,*(undefined8 *)(lVar5 + 0xf0));
        *(undefined8 *)(*(long *)(lVar5 + 0x88) + 0x118) = 0;
        *(long *)(*(long *)(lVar5 + 0x88) + 0x110) = lVar5;
        *(undefined4 *)(lVar5 + 0x124) = 0;
        do {
          FUN_006b6750(param_1,lVar5,1);
          lVar5 = *(long *)(lVar5 + 0x110);
        } while (lVar5 != 0);
        return;
      }
      plVar2 = plVar2 + 4;
    } while (plVar1 != plVar2);
  }
  return;
}


