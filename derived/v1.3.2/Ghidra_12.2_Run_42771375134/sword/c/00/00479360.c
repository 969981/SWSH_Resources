/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479360; name: FUN_00479360
 */


/* WARNING: Removing unreachable block (ram,0x004793e8) */

void FUN_00479360(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  
  puVar4 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 < uVar9) goto LAB_00479458;
  uVar9 = uVar9 + 1;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 != 0) {
      *puVar6 = *puVar7;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar8 = 1;
        }
        else {
          lVar5 = 0;
          do {
            lVar8 = lVar5;
            puVar6[lVar8 + 1] = *(undefined8 *)(*param_1 + lVar8 * 8 + 8);
            puVar6[lVar8 + 2] = *(undefined8 *)(*param_1 + lVar8 * 8 + 0x10);
            lVar5 = lVar8 + 2;
          } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar3 & 1) == 0) goto LAB_00479444;
        }
        puVar6[lVar8] = *(undefined8 *)(*param_1 + lVar8 * 8);
      }
LAB_00479444:
      puVar7 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar7);
  }
  *param_1 = (long)puVar6;
  *(uint *)((long)param_1 + 0xc) = uVar9;
LAB_00479458:
  if (uVar2 < uVar9) {
    plVar1 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
      *(int *)(*plVar1 + 0x74) = *(int *)(*plVar1 + 0x74) + 1;
    }
  }
  return;
}


