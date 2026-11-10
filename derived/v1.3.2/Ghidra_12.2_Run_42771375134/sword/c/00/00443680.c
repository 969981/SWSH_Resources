/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443680; name: FUN_00443680
 */


int FUN_00443680(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  *(undefined1 *)(param_1 + 0xd0) = 1;
  if (param_2[0xc] == 0) {
LAB_00443770:
    if (*(int *)(param_1 + 200) != 0) {
      puVar10 = *(undefined4 **)(param_1 + 0xc0);
LAB_0044377c:
      iVar5 = FUN_004497a0(param_1,puVar10);
      if (iVar5 == 1) goto code_r0x00443794;
      for (puVar13 = *(undefined4 **)(param_1 + 0xc0); puVar13 != puVar10; puVar13 = puVar13 + 8) {
        FUN_00448ea0(param_1,*puVar13);
      }
      if (param_2[0xc] != 0) {
        uVar12 = 0;
        do {
          FUN_00446610(param_1,*(undefined4 *)(*(long *)(param_2 + 0xe) + uVar12 * 4));
          uVar12 = uVar12 + 1;
        } while (uVar12 < param_2[0xc]);
      }
      goto LAB_0044383c;
    }
LAB_004437ac:
    iVar5 = 1;
LAB_0044383c:
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)(param_2 + 0xe));
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  else {
    if (param_2[0xc] != 1) {
      uVar12 = 0;
      do {
        memcpy(auStack_d0,param_2,0x48);
        iVar5 = FUN_00446510(param_1,auStack_d0,
                             *(undefined4 *)(*(long *)(param_2 + 0xe) + uVar12 * 4));
        if (iVar5 != 1) {
          if ((int)uVar12 != 0) {
            lVar11 = 0;
            do {
              FUN_00446610(param_1,*(undefined4 *)
                                    (*(long *)(param_2 + 0xe) + (uVar12 - 1 & 0xffffffff) * 4 +
                                    lVar11 * 4));
              iVar9 = (int)lVar11;
              lVar11 = lVar11 + -1;
            } while ((int)uVar12 + iVar9 != 1);
          }
          goto LAB_0044383c;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_2[0xc]);
      goto LAB_00443770;
    }
    memcpy(auStack_88,param_2,0x48);
    iVar5 = FUN_00446510(param_1,auStack_88,param_2[0xe]);
    if (iVar5 == 1) {
      if (*(int *)(param_1 + 200) != 0) {
        puVar10 = *(undefined4 **)(param_1 + 0xc0);
LAB_004436f0:
        iVar5 = FUN_004497a0(param_1,puVar10);
        if (iVar5 == 1) goto code_r0x00443708;
        for (puVar13 = *(undefined4 **)(param_1 + 0xc0); puVar13 != puVar10; puVar13 = puVar13 + 8)
        {
          FUN_00448ea0(param_1,*puVar13);
        }
        FUN_00446610(param_1,param_2[0xe]);
        goto LAB_00443854;
      }
LAB_00443720:
      iVar5 = 1;
    }
  }
LAB_00443854:
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  uVar3 = *param_2;
  uVar6 = 0;
  uVar7 = 0xffffffff;
  if (uVar3 < 8) {
    uVar4 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar4 & 3) == 0) {
      if ((uVar4 & 0xc) == 0) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0xc0U) == 0) goto LAB_004438c0;
        uVar6 = param_2[1];
      }
      else {
        uVar6 = param_2[0xe];
        if (param_2[0xc] != 1) {
          uVar6 = 0;
        }
      }
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_2[0xc];
      uVar6 = param_2[1];
    }
  }
LAB_004438c0:
  uVar3 = param_2[10];
  uVar8 = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xd4) = iVar5;
  if (uVar3 != 2) {
    uVar8 = 0;
  }
  FUN_0044d500(param_1 + 0xd8,uVar1,uVar6,uVar8,iVar5,uVar7,uVar2);
  return iVar5;
code_r0x00443794:
  puVar10 = puVar10 + 8;
  if (puVar10 == (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 200) * 0x20))
  goto LAB_004437ac;
  goto LAB_0044377c;
code_r0x00443708:
  puVar10 = puVar10 + 8;
  if (puVar10 == (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 200) * 0x20))
  goto LAB_00443720;
  goto LAB_004436f0;
}


