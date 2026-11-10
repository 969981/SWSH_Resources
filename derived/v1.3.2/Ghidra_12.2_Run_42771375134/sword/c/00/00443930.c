/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443930; name: FUN_00443930
 */


int FUN_00443930(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  
  if ((char)param_2[0xe] != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  puVar7 = PTR_DAT_02712b68;
  if (param_2[0xf] == 0) {
LAB_00443a20:
    iVar8 = 1;
LAB_00443a24:
    if ((iVar8 == 1) && ((char)param_2[0xe] != '\0')) {
      if (*(int *)(param_1 + 200) != 0) {
        puVar12 = *(undefined4 **)(param_1 + 0xc0);
LAB_00443a40:
        iVar8 = FUN_004497a0(param_1,puVar12);
        if (iVar8 == 1) goto code_r0x00443a58;
        puVar6 = (undefined8 *)PTR_DAT_02712b68;
        for (puVar15 = *(undefined4 **)(param_1 + 0xc0); PTR_DAT_02712b68 = (undefined *)puVar6,
            puVar15 != puVar12; puVar15 = puVar15 + 8) {
          FUN_00448ea0(param_1,*puVar15);
          puVar6 = (undefined8 *)PTR_DAT_02712b68;
        }
        if (param_2[0xf] != 0) {
          uVar13 = 0;
          do {
            FUN_004b5650(*puVar6,param_2[0xc],param_2[0xd],
                         *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar13 * 4),0);
            uVar13 = uVar13 + 1;
          } while (uVar13 < param_2[0xf]);
        }
        goto LAB_00443b04;
      }
LAB_00443a70:
      iVar8 = 1;
    }
LAB_00443b04:
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)(param_2 + 0x10));
LAB_00443b18:
    cVar4 = (char)param_2[0xe];
  }
  else {
    if (param_2[0xf] != 1) {
      uVar13 = 0;
LAB_004439ec:
      iVar8 = FUN_004b5650(*(undefined8 *)puVar7,param_2[0xc],param_2[0xd],
                           *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar13 * 4),
                           (char)param_2[0xe]);
      if (iVar8 == 1) goto code_r0x00443a10;
      if ((int)uVar13 != 0) {
        uVar14 = 0;
        do {
          FUN_004b5650(*(undefined8 *)puVar7,param_2[0xc],param_2[0xd],
                       *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar14 * 4),0);
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
        goto LAB_00443a24;
      }
      goto LAB_00443b04;
    }
    iVar8 = FUN_004b5650(*(undefined8 *)PTR_DAT_02712b68,param_2[0xc],param_2[0xd],param_2[0x10],
                         (char)param_2[0xe]);
    cVar4 = (char)param_2[0xe];
    if (iVar8 == 1 && cVar4 != '\0') {
      if (*(int *)(param_1 + 200) != 0) {
        puVar12 = *(undefined4 **)(param_1 + 0xc0);
LAB_004439a8:
        iVar8 = FUN_004497a0(param_1,puVar12);
        if (iVar8 == 1) goto code_r0x004439c0;
        for (puVar15 = *(undefined4 **)(param_1 + 0xc0); puVar15 != puVar12; puVar15 = puVar15 + 8)
        {
          FUN_00448ea0(param_1,*puVar15);
        }
        FUN_004b5650(*(undefined8 *)puVar7,param_2[0xc],param_2[0xd],param_2[0x10],0);
        goto LAB_00443b18;
      }
LAB_004439d8:
      iVar8 = 1;
      goto LAB_00443b18;
    }
  }
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  uVar3 = *param_2;
  uVar9 = 0;
  uVar10 = 0xffffffff;
  if (uVar3 < 8) {
    uVar5 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar5 & 3) == 0) {
      if ((uVar5 & 0xc) == 0) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0xc0U) == 0) goto LAB_00443b8c;
        uVar9 = param_2[1];
      }
      else {
        uVar9 = param_2[0xe];
        if (param_2[0xc] != 1) {
          uVar9 = 0;
        }
      }
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = param_2[0xc];
      uVar9 = param_2[1];
    }
  }
LAB_00443b8c:
  uVar3 = param_2[10];
  uVar11 = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xd4) = iVar8;
  if (uVar3 != 2) {
    uVar11 = 0;
  }
  FUN_0044d500(param_1 + 0xd8,uVar1,uVar9,uVar11,iVar8,uVar10,uVar2);
  return iVar8;
code_r0x00443a10:
  uVar13 = uVar13 + 1;
  if (param_2[0xf] <= uVar13) goto LAB_00443a20;
  goto LAB_004439ec;
code_r0x00443a58:
  puVar12 = puVar12 + 8;
  if (puVar12 == (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 200) * 0x20))
  goto LAB_00443a70;
  goto LAB_00443a40;
code_r0x004439c0:
  puVar12 = puVar12 + 8;
  if (puVar12 == (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 200) * 0x20))
  goto LAB_004439d8;
  goto LAB_004439a8;
}


