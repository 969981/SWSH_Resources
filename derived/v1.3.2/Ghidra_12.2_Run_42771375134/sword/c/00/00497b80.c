/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00497b80; name: FUN_00497b80
 */


void FUN_00497b80(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (uint)param_2 / uVar1;
    }
    uVar1 = (uint)param_2 - uVar4 * uVar1;
    plVar6 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
    if (plVar6 == (long *)0x0) {
      plVar8 = (long *)0x0;
LAB_00497be0:
      if (plVar6 != (long *)0x0) {
        puVar9 = (undefined8 *)plVar6[2];
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
        }
        *plVar8 = *plVar6;
        puVar5 = PTR_DAT_02712a90;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        iVar2 = *(int *)(puVar9 + 10);
        *(undefined1 *)((long)puVar9 + 0x54) = 0;
        *(int *)(puVar9 + 10) = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          uVar3 = *(undefined4 *)puVar5;
          (**(code **)*puVar9)(puVar9);
          FUN_00404870(uVar3,puVar9);
          return;
        }
      }
    }
    else {
      plVar8 = (long *)0x0;
      do {
        if (plVar6[1] == param_2) goto LAB_00497be0;
        plVar7 = (long *)*plVar6;
        plVar8 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


