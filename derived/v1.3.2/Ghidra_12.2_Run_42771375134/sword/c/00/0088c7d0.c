/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088c7d0; name: FUN_0088c7d0
 */


undefined8 FUN_0088c7d0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar6 = (long *)*plVar2;
    if ((long *)plVar2[1] == plVar6) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar6;
      do {
        lVar8 = *plVar6;
        uVar7 = *(uint *)(lVar8 + 0x18);
        if (5 < uVar7) {
          uVar7 = 6;
        }
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            if ((*(long *)(lVar8 + 0x20 + uVar9 * 8) != 0) &&
               (*(long **)(param_2 + 8) != (long *)0x0)) {
              (**(code **)(**(long **)(param_2 + 8) + 0x18))();
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        puVar4 = *(undefined8 **)(lVar8 + 0x58);
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined8 *)(lVar8 + 0x38) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        if (puVar4 != (undefined8 *)0x0) {
          plVar2 = (long *)*puVar4;
          if ((long *)puVar4[1] == plVar2) {
            lVar1 = 0;
          }
          else {
            lVar1 = *plVar2;
            do {
              plVar3 = plVar2 + 1;
              puVar4 = (undefined8 *)*plVar2;
              *(undefined1 *)(puVar4 + 2) = 0;
              *puVar4 = 0;
              puVar4[1] = 0;
              plVar2 = plVar3;
            } while (plVar3 != *(long **)(*(long *)(lVar8 + 0x58) + 8));
          }
          if ((lVar1 != 0) && (*(long **)(param_2 + 8) != (long *)0x0)) {
            (**(code **)(**(long **)(param_2 + 8) + 0x18))();
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != *(long **)(*(long *)(param_1 + 0x18) + 8));
    }
    if ((lVar5 != 0) && (plVar2 = *(long **)(param_2 + 8), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
    }
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    FUN_0088f600(lVar5,*(undefined8 *)(lVar5 + 8));
    plVar2 = *(long **)(param_2 + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0x20));
    }
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      plVar2[1] = *plVar2;
      (**(code **)(**(long **)PTR_DAT_027174a8 + 0x18))();
    }
    plVar2 = *(long **)(param_2 + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0x18));
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 1;
}


