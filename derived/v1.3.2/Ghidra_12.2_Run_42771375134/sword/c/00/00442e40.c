/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442e40; name: FUN_00442e40
 */


void FUN_00442e40(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    plVar5 = (long *)**(long **)(param_1 + 0xa8);
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0xb0) <= uVar3) goto LAB_00442ecc;
        plVar5 = (long *)(*(long **)(param_1 + 0xa8))[uVar3];
      } while (plVar5 == (long *)0x0);
    }
    else {
      uVar3 = 0;
    }
    do {
      do {
        FUN_00404870(*(undefined4 *)puVar1,plVar5[2]);
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0xb0) <= uVar3) {
          if (*(int *)(param_1 + 0xb0) == 0) goto LAB_00442f18;
          goto LAB_00442ecc;
        }
        plVar5 = *(long **)(*(long *)(param_1 + 0xa8) + (ulong)uVar3 * 8);
      } while (plVar5 == (long *)0x0);
    } while( true );
  }
LAB_00442f18:
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
LAB_00442ecc:
  puVar1 = PTR_DAT_02712a90;
  uVar4 = 0;
  do {
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + uVar4 * 8);
    plVar2 = (long *)*plVar5;
    if (plVar2 != (long *)0x0) {
      do {
        plVar2 = (long *)*plVar2;
        FUN_00404870(*(undefined4 *)puVar1);
      } while (plVar2 != (long *)0x0);
      plVar5 = (long *)(*(long *)(param_1 + 0xa8) + uVar4 * 8);
    }
    *plVar5 = 0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < *(uint *)(param_1 + 0xb0));
  goto LAB_00442f18;
}


