/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462410; name: FUN_00462410
 */


void FUN_00462410(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02712b50;
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x58) != 0)) {
    lVar6 = *(long *)(lVar5 + 0x50);
    do {
      FUN_0049b7f0(*(undefined8 *)puVar2,param_1,*(undefined2 *)(lVar6 + 6));
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != *(long *)(lVar5 + 0x50) + (ulong)*(uint *)(lVar5 + 0x58) * 0x20);
  }
  plVar3 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,PTR_PTR_02713088);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[0xe];
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar4 = lVar5;
      if (lVar5 != param_1) {
        do {
          lVar6 = lVar4;
          lVar4 = *(long *)(lVar6 + 0x58);
        } while (lVar4 != 0 && lVar4 != param_1);
      }
      if (lVar4 != 0) {
        plVar1 = plVar3 + 0xe;
        if (lVar4 != lVar5) {
          plVar1 = (long *)(lVar6 + 0x58);
        }
        *plVar1 = *(long *)(lVar4 + 0x58);
        (**(code **)(*plVar3 + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


