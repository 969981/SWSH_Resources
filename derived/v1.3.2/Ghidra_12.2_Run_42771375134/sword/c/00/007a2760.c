/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a2760; name: FUN_007a2760
 */


void FUN_007a2760(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x270) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x220);
    while (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      (**(code **)(**(long **)(param_1 + 0x230) + 0x18))(*(long **)(param_1 + 0x230),plVar1,0x20,8);
      plVar1 = (long *)lVar5;
    }
    uVar4 = *(ulong *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x220) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar3 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar5);
      }
      if (uVar2 != 0) {
        lVar5 = lVar5 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}


