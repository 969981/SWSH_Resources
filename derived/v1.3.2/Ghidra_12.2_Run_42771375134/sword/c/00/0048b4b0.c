/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b4b0; name: FUN_0048b4b0
 */


/* WARNING: Removing unreachable block (ram,0x0048b548) */

undefined8 FUN_0048b4b0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  FUN_0044f2f0(param_1 + 0x18);
  puVar4 = PTR_DAT_02712a90;
  if ((*(byte *)(param_1 + 0x16d) >> 3 & 1) != 0) goto LAB_0048b610;
  uVar2 = *(uint *)(param_1 + 0x2b0);
  uVar10 = *(uint *)(param_1 + 0x2b4);
  if (uVar2 < uVar10) {
LAB_0048b5b8:
    if (uVar10 <= uVar2) goto LAB_0048b5e4;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8);
    iVar1 = *(uint *)(param_1 + 0x2b0) + 1;
    *(int *)(param_1 + 0x2b0) = iVar1;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = PTR_DAT_02712df8;
      goto LAB_0048b5e4;
    }
  }
  else {
    uVar10 = uVar10 + 3;
    puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
    if (puVar6 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x2a8);
      if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
        uVar3 = *(uint *)(param_1 + 0x2b0);
        if (uVar3 != 0) {
          *puVar6 = *puVar8;
          if (uVar3 != 1) {
            if (uVar3 == 2) {
              lVar9 = 1;
            }
            else {
              lVar5 = 0;
              do {
                lVar9 = lVar5;
                puVar6[lVar9 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar9 * 8 + 8);
                puVar6[lVar9 + 2] = *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar9 * 8 + 0x10);
                lVar5 = lVar9 + 2;
              } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
              lVar9 = lVar9 + 3;
              if ((~uVar3 & 1) == 0) goto LAB_0048b5a4;
            }
            puVar6[lVar9] = *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar9 * 8);
          }
LAB_0048b5a4:
          puVar8 = *(undefined8 **)(param_1 + 0x2a8);
        }
        FUN_00404870(*(undefined4 *)puVar4,puVar8);
      }
      *(undefined8 **)(param_1 + 0x2a8) = puVar6;
      *(uint *)(param_1 + 0x2b4) = uVar10;
      goto LAB_0048b5b8;
    }
LAB_0048b5e4:
    iVar1 = *(int *)(param_1 + 0x2b0);
  }
  if (iVar1 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x2a8);
    do {
      puVar8 = puVar6 + 1;
      FUN_00481210(*puVar6,param_1);
      puVar6 = puVar8;
    } while (puVar8 != (undefined8 *)
                       (*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8));
  }
LAB_0048b610:
  if (*(int *)(param_1 + 0x1d8) == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = FUN_0048fb90(*(undefined8 *)PTR_DAT_02712ad0,*(int *)(param_1 + 0x1d8),param_1,
                         param_1 + 8);
    if ((int)uVar7 == 1) {
      FUN_004a7f60(*(undefined8 *)(param_1 + 0x1f8),param_1 + 0x290,param_1 + 0x298,param_1 + 0x198)
      ;
      uVar7 = 1;
    }
  }
  return uVar7;
}


