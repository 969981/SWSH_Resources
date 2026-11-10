/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bae50; name: FUN_004bae50
 */


/* WARNING: Removing unreachable block (ram,0x004baeec) */

undefined8 FUN_004bae50(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar3 = PTR_DAT_02712a90;
  if ((param_2 < *(uint *)(param_1 + 1)) || (param_2 <= *(uint *)((long)param_1 + 0xc)))
  goto LAB_004baf5c;
  uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - *(uint *)(param_1 + 1));
  puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  puVar6 = (undefined8 *)*param_1;
  if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      *puVar5 = *puVar6;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar8 = 1;
        }
        else {
          lVar4 = 0;
          do {
            lVar8 = lVar4;
            puVar5[lVar8 + 1] = *(undefined8 *)(*param_1 + lVar8 * 8 + 8);
            puVar5[lVar8 + 2] = *(undefined8 *)(*param_1 + lVar8 * 8 + 0x10);
            lVar4 = lVar8 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_004baf48;
        }
        puVar5[lVar8] = *(undefined8 *)(*param_1 + lVar8 * 8);
      }
LAB_004baf48:
      puVar6 = (undefined8 *)*param_1;
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar6);
  }
  *param_1 = (long)puVar5;
  *(uint *)((long)param_1 + 0xc) = uVar1;
LAB_004baf5c:
  *(uint *)(param_1 + 1) = param_2;
  if (param_2 != 0) {
    uVar7 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 1));
  }
  return 1;
}


