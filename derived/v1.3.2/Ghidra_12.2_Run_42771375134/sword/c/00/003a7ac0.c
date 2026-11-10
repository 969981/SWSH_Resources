/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7ac0; name: FUN_003a7ac0
 */


int FUN_003a7ac0(long param_1,uint param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint *local_78;
  uint local_70;
  long local_68;
  
  iVar6 = FUN_003a0380(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x1f18);
  if (uVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x1f10);
    if (*(ulong *)(lVar7 + (ulong)(uVar4 - 1) * 0x10 + 8) == (ulong)param_2) {
      iVar6 = *(int *)(param_1 + 0x1edc) + iVar6;
      FUN_003a7d30(param_1);
    }
    else {
      uVar10 = 0;
      do {
        uVar9 = (uint)uVar10;
        if (*(ulong *)(lVar7 + uVar10 * 0x10 + 8) != (ulong)param_2) {
          if (uVar9 == 0) {
            return iVar6;
          }
          break;
        }
        uVar9 = uVar9 + 1;
        uVar10 = (ulong)uVar9;
      } while (uVar9 < uVar4);
      *(uint *)(param_1 + 0x1f18) = uVar4 - uVar9;
      if (uVar4 - uVar9 == 0) {
        uVar10 = 0;
        goto LAB_003a7c18;
      }
      lVar13 = 0;
      lVar14 = 0;
      uVar15 = 0;
      do {
        lVar16 = (ulong)((uVar9 - 1) + (int)uVar15 + 1) * 0x10;
        plVar1 = (long *)(lVar7 + lVar16);
        puVar8 = *(undefined4 **)(*plVar1 + 0x10);
        puVar2 = (undefined4 *)(*(long *)(param_1 + 0x1f08) + lVar13);
        *puVar2 = *puVar8;
        puVar2[1] = puVar8[1];
        puVar2[2] = puVar8[2];
        puVar2[3] = puVar8[3];
        puVar2[4] = puVar8[4];
        puVar2[5] = puVar8[5];
        uVar12 = *(undefined8 *)(lVar7 + lVar14);
        ((undefined8 *)(lVar7 + lVar14))[1] = plVar1[1];
        FUN_00397700(uVar12,1);
        lVar7 = *(long *)(param_1 + 0x1f10);
        puVar3 = (undefined8 *)(lVar7 + lVar16);
        *(undefined8 *)(lVar7 + lVar14) = *puVar3;
        uVar15 = uVar15 + 1;
        *puVar3 = uVar12;
        puVar3[1] = 0;
        uVar10 = (ulong)*(uint *)(param_1 + 0x1f18);
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + 0x18;
      } while (uVar15 < uVar10);
      for (; (uint)uVar10 <= uVar9 - 1; uVar10 = (ulong)((int)uVar10 + 1)) {
LAB_003a7c18:
        FUN_00397700(*(undefined8 *)(lVar7 + uVar10 * 0x10),1);
        lVar7 = *(long *)(param_1 + 0x1f10);
        *(undefined8 *)(lVar7 + uVar10 * 0x10 + 8) = 0;
      }
      FUN_003a7130(param_1);
      local_68 = param_1 + 0x1ea8;
      if (*(uint *)(param_1 + 0x1ecc) != 0) {
        local_70 = 1;
        local_78 = *(uint **)(param_1 + 0x1ec0);
LAB_003a7c74:
        if ((*(uint **)(param_1 + 0x1ec0))[local_70 - 1] == 0xffffffff) goto code_r0x003a7c84;
        lVar7 = *(long *)(param_1 + 0x1eb0) + (ulong)*local_78 * 0x20;
        iVar11 = 0;
        while (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x10) == param_2) {
            iVar11 = iVar11 + 1;
            lVar7 = FUN_003a7eb0(&local_78,1);
          }
          else {
            *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) - uVar9;
            lVar7 = FUN_003a7eb0(&local_78,0);
          }
        }
        goto LAB_003a7c9c;
      }
LAB_003a7c98:
      iVar11 = 0;
LAB_003a7c9c:
      iVar6 = iVar11 + iVar6;
    }
  }
  return iVar6;
code_r0x003a7c84:
  local_78 = local_78 + 1;
  bVar5 = *(uint *)(param_1 + 0x1ecc) <= local_70;
  local_70 = local_70 + 1;
  if (bVar5) goto LAB_003a7c98;
  goto LAB_003a7c74;
}


