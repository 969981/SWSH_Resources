/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6be0; name: FUN_006b6be0
 */


void FUN_006b6be0(long param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x110);
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x118) != 0) {
      FUN_006b8080(0,*(long *)(param_1 + 0x118));
      lVar2 = *(long *)(param_1 + 0x110);
    }
    FUN_006b6cc0(lVar2);
    plVar1 = *(long **)(param_1 + 0x90);
    if (*(long **)(param_1 + 0x98) != plVar1) {
      for (; plVar1 != *(long **)(param_1 + 0x98); plVar1 = plVar1 + 4) {
        lVar2 = *plVar1;
        piVar3 = *(int **)(lVar2 + 0x10);
        if (((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
            (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 != 0)) &&
           (*(int *)((long)piVar3 + uVar4) == 1)) goto LAB_006b6c6c;
      }
    }
    lVar2 = 0;
LAB_006b6c6c:
    FUN_006b9b70(0x3f800000,*(undefined8 *)(lVar2 + 0xf0));
    *(undefined8 *)(*(long *)(lVar2 + 0x88) + 0x118) = 0;
    *(long *)(*(long *)(lVar2 + 0x88) + 0x110) = lVar2;
    *(undefined4 *)(lVar2 + 0x124) = 0;
    do {
      FUN_006b6750(0,lVar2,1);
      lVar2 = *(long *)(lVar2 + 0x110);
    } while (lVar2 != 0);
  }
  return;
}


