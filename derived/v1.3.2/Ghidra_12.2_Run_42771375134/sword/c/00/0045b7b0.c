/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b7b0; name: FUN_0045b7b0
 */


/* WARNING: Removing unreachable block (ram,0x0045b838) */

void FUN_0045b7b0(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  puVar5 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_3 + 1);
  uVar10 = *(uint *)((long)param_3 + 0xc);
  if (uVar2 < uVar10) goto LAB_0045b8a8;
  uVar10 = uVar10 + 4;
  puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar8 = (undefined8 *)*param_3;
  if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
    uVar3 = *(uint *)(param_3 + 1);
    if (uVar3 != 0) {
      *puVar7 = *puVar8;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar9 = 1;
        }
        else {
          lVar6 = 0;
          do {
            lVar9 = lVar6;
            puVar7[lVar9 + 1] = *(undefined8 *)(*param_3 + lVar9 * 8 + 8);
            puVar7[lVar9 + 2] = *(undefined8 *)(*param_3 + lVar9 * 8 + 0x10);
            lVar6 = lVar9 + 2;
          } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
          lVar9 = lVar9 + 3;
          if ((~uVar3 & 1) == 0) goto LAB_0045b894;
        }
        puVar7[lVar9] = *(undefined8 *)(*param_3 + lVar9 * 8);
      }
LAB_0045b894:
      puVar8 = (undefined8 *)*param_3;
    }
    FUN_00404870(*(undefined4 *)puVar5,puVar8);
  }
  *param_3 = (long)puVar7;
  *(uint *)((long)param_3 + 0xc) = uVar10;
LAB_0045b8a8:
  if (uVar2 < uVar10) {
    plVar1 = (long *)(*param_3 + (ulong)*(uint *)(param_3 + 1) * 8);
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
      uVar4 = *(ushort *)(param_2 + 8);
      if (uVar4 == 0) {
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + 1;
      }
      else if (uVar4 == 100) {
        *(int *)(param_3 + 2) = (int)param_3[2] + 1;
      }
      *(uint *)(param_3 + 3) = (int)param_3[3] + (uint)uVar4;
    }
  }
  return;
}


