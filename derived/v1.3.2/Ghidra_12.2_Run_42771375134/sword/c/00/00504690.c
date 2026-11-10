/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00504690; name: FUN_00504690
 */


void FUN_00504690(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02712e28;
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        if (*(long *)(lVar2 + lVar4) != 0) {
          FUN_00404870(*(undefined4 *)puVar1,*(long *)(lVar2 + lVar4));
          lVar2 = *(long *)(param_1 + 0xb8);
        }
        lVar3 = *(long *)(lVar2 + lVar4 + 0x10);
        if (lVar3 != 0) {
          FUN_004047f0(*(undefined4 *)puVar1,lVar3);
          lVar2 = *(long *)(param_1 + 0xb8);
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x20;
      } while (lVar5 < *(int *)(param_1 + 0x90));
      if (lVar2 == 0) goto LAB_00504724;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
  }
LAB_00504724:
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(long *)(param_1 + 0x50) = 0;
  }
  return;
}


