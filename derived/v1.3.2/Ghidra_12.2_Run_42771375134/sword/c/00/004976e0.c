/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004976e0; name: FUN_004976e0
 */


void FUN_004976e0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  FUN_00497850(param_1,0);
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = 0xfffffffe / uVar1;
    }
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + (ulong)(-(uVar4 * uVar1) - 2) * 8);
    plVar6 = (long *)*plVar8;
    if (plVar6 == (long *)0x0) {
      plVar9 = (long *)0x0;
LAB_0049774c:
      if (plVar6 != (long *)0x0) {
        if (plVar9 != (long *)0x0) {
          plVar8 = plVar9;
        }
        puVar10 = (undefined8 *)plVar6[2];
        *plVar8 = *plVar6;
        puVar5 = PTR_DAT_02712a90;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        iVar2 = *(int *)(puVar10 + 10);
        *(undefined1 *)((long)puVar10 + 0x54) = 0;
        *(int *)(puVar10 + 10) = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          uVar3 = *(undefined4 *)puVar5;
          (**(code **)*puVar10)(puVar10);
          FUN_00404870(uVar3,puVar10);
        }
      }
    }
    else {
      plVar9 = (long *)0x0;
      do {
        if (plVar6[1] == -2) goto LAB_0049774c;
        plVar7 = (long *)*plVar6;
        plVar9 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
    puVar5 = PTR_DAT_02712a90;
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar11 = 0;
      do {
        plVar8 = (long *)(*(long *)(param_1 + 0x30) + uVar11 * 8);
        plVar6 = (long *)*plVar8;
        if (plVar6 != (long *)0x0) {
          do {
            plVar6 = (long *)*plVar6;
            FUN_00404870(*(undefined4 *)puVar5);
          } while (plVar6 != (long *)0x0);
          plVar8 = (long *)(*(long *)(param_1 + 0x30) + uVar11 * 8);
        }
        *plVar8 = 0;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x38));
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_00495d60(param_1);
  return;
}


