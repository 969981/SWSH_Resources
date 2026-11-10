/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7140; name: FUN_00ff7140
 */


void FUN_00ff7140(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar6;
  long lVar5;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 != puVar3) {
    uVar7 = *(ulong *)(param_1 + 0x70);
    plVar8 = (long *)((long)puVar3 + (uVar7 >> 6 & 0x3fffffffffffff8));
    uVar1 = *(long *)(param_1 + 0x80) + uVar7;
    plVar9 = (long *)(*plVar8 + (uVar7 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar3 + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                     (uVar1 & 0x1ff) * 8);
    if (plVar2 != plVar9) {
      do {
        if (*plVar9 != 0) {
          (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
          *plVar9 = 0;
        }
        plVar9 = plVar9 + 1;
        if ((long)plVar9 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar9 = (long *)*plVar8;
        }
      } while (plVar2 != plVar9);
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  lVar5 = (long)puVar6 - (long)puVar3;
  while (uVar1 = lVar5 >> 3, 2 < uVar1) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),*puVar3,0x1000,8);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar5 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar1 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  return;
}


