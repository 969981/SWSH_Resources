/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003838b0; name: FUN_003838b0
 */


void FUN_003838b0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined8 *local_58;
  int local_44;
  
  lVar6 = *param_1;
  uVar14 = *param_3;
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar6 + 8);
    uVar12 = (ulong)(uVar8 - 1);
    pbVar13 = (byte *)(lVar9 + uVar12 * 0x10 + 8);
    if (*pbVar13 == 0) {
      bVar5 = 0;
      if ((char)param_1[9] != '\0') {
        bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar12 * 0x10));
        bVar5 = bVar5 & 1;
        lVar6 = *param_1;
        *(byte *)(param_1 + 9) = bVar5;
        lVar9 = *(long *)(lVar6 + 8);
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        uVar12 = (ulong)(uVar8 - 1);
        pbVar13 = (byte *)(lVar9 + uVar12 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar12 * 0x10 + 9) = bVar5;
      *pbVar13 = bVar5;
    }
  }
  uStack_5f = (undefined1)param_1[9];
  local_60 = 0;
  local_68 = uVar14;
  if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT43(uStack_5c,CONCAT21(uStack_5e,uStack_5f)) << 8;
    *puVar1 = uVar14;
    *puVar7 = *puVar7 + 1;
  }
  else {
    FUN_00321500(lVar6,&local_68);
  }
  local_44 = 0x1b6;
  piVar3 = &local_44;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar3 = (int *)param_1[0xb];
  }
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)param_1[0xc];
  }
  lVar6 = *param_1;
  lVar9 = *param_4;
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  bVar4 = uVar8 == 0;
  if (lVar9 != 0) {
    iVar11 = iVar11 + 0x10;
    do {
      if (bVar4) {
        uVar8 = 0;
      }
      else {
        lVar10 = *(long *)(lVar6 + 8);
        uVar12 = (ulong)(uVar8 - 1);
        pbVar13 = (byte *)(lVar10 + uVar12 * 0x10 + 8);
        if (*pbVar13 == 0) {
          bVar5 = 0;
          if ((char)param_1[9] != '\0') {
            bVar5 = (**(code **)(*(long *)param_1[5] + 0x20))
                              ((long *)param_1[5],*(undefined8 *)(lVar10 + uVar12 * 0x10));
            bVar5 = bVar5 & 1;
            lVar6 = *param_1;
            *(byte *)(param_1 + 9) = bVar5;
            lVar10 = *(long *)(lVar6 + 8);
            puVar7 = (uint *)(lVar6 + 0x10);
            uVar8 = *puVar7;
            uVar12 = (ulong)(uVar8 - 1);
            pbVar13 = (byte *)(lVar10 + uVar12 * 0x10 + 8);
          }
          *(byte *)(lVar10 + uVar12 * 0x10 + 9) = bVar5;
          *pbVar13 = bVar5;
        }
      }
      uStack_5f = (undefined1)param_1[9];
      local_60 = 0;
      local_68 = lVar9;
      if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
        plVar2 = (long *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
        plVar2[1] = (ulong)CONCAT43(uStack_5c,CONCAT21(uStack_5e,uStack_5f)) << 8;
        *plVar2 = lVar9;
        *puVar7 = *puVar7 + 1;
      }
      else {
        FUN_00321500(lVar6,&local_68);
      }
      lVar6 = param_4[1];
      local_68 = CONCAT44(iVar11,(undefined4)local_68);
      local_60 = (undefined1)lVar6;
      uStack_5f = (undefined1)((ulong)lVar6 >> 8);
      uStack_5e = (undefined2)((ulong)lVar6 >> 0x10);
      local_68 = CONCAT71(local_68._1_7_,1);
      local_58 = param_3;
      FUN_00383c00(param_1,*piVar3,&local_68);
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 0x10) == 0) {
        *(undefined1 *)(param_1 + 9) = 1;
      }
      else {
        uVar8 = *(int *)(lVar6 + 0x10) - 1;
        if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
           (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
          (**(code **)(*(long *)param_1[5] + 0x50))();
          lVar6 = *param_1;
          uVar8 = *(int *)(lVar6 + 0x10) - 1;
        }
        *(uint *)(lVar6 + 0x10) = uVar8;
        *(undefined1 *)(param_1 + 9) = 1;
        if ((uVar8 != 0) &&
           (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0')) {
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
      *piVar3 = *piVar3 + 1;
      lVar9 = param_4[2];
      puVar7 = (uint *)(lVar6 + 0x10);
      uVar8 = *puVar7;
      bVar4 = uVar8 == 0;
      iVar11 = iVar11 + 0x1c;
      param_4 = param_4 + 2;
    } while (lVar9 != 0);
  }
  if (bVar4) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar8 = uVar8 - 1;
    if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar6 = *param_1;
      puVar7 = (uint *)(lVar6 + 0x10);
      uVar8 = *puVar7 - 1;
    }
    *puVar7 = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar8 != 0) && (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


