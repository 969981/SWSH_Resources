/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6870; name: FUN_011f6870
 */


void FUN_011f6870(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02716b80;
  lVar3 = *(long *)PTR_DAT_02716b80;
  if (lVar3 == 0) {
    return;
  }
  FUN_011f6460();
  if (*(long *)puVar1 != 0) {
    FUN_007c2db0(*(long *)puVar1,param_1 + 0x60);
  }
  lVar4 = *(long *)PTR_DAT_027104b0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar4 + 0x1f0);
    *(long *)(lVar4 + 0x1f0) = lVar5;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar4 = *(long *)(lVar4 + 0x58);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x60);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar2 = *(long *)(lVar4 + 0x430);
      *(long *)(lVar4 + 0x430) = lVar5;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
    }
  }
  FUN_007c2840(lVar3,*(undefined8 *)(param_1 + 8));
  return;
}


