/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00376b80; name: FUN_00376b80
 */


void FUN_00376b80(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined4 uVar15;
  int local_74;
  char *local_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  
  lVar6 = *param_1;
  pcVar14 = (char *)*param_3;
  puVar9 = (uint *)(lVar6 + 0x10);
  uVar10 = *puVar9;
  if (uVar10 != 0) {
    lVar11 = *(long *)(lVar6 + 8);
    uVar12 = (ulong)(uVar10 - 1);
    pbVar13 = (byte *)(lVar11 + uVar12 * 0x10 + 8);
    if (*pbVar13 == 0) {
      bVar4 = 0;
      if ((char)param_1[9] != '\0') {
        bVar4 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar11 + uVar12 * 0x10));
        bVar4 = bVar4 & 1;
        lVar6 = *param_1;
        *(byte *)(param_1 + 9) = bVar4;
        lVar11 = *(long *)(lVar6 + 8);
        puVar9 = (uint *)(lVar6 + 0x10);
        uVar10 = *puVar9;
        uVar12 = (ulong)(uVar10 - 1);
        pbVar13 = (byte *)(lVar11 + uVar12 * 0x10 + 8);
      }
      *(byte *)(lVar11 + uVar12 * 0x10 + 9) = bVar4;
      *pbVar13 = bVar4;
    }
  }
  uStack_67 = (undefined1)param_1[9];
  local_68 = 0;
  local_70 = pcVar14;
  if (uVar10 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_66,uStack_67) << 8;
    *puVar1 = pcVar14;
    *puVar9 = *puVar9 + 1;
  }
  else {
    FUN_00321500(lVar6,&local_70);
  }
  local_74 = 0x1c6;
  lVar6 = *param_1;
  pcVar14 = (char *)*param_4;
  puVar9 = (uint *)(lVar6 + 0x10);
  uVar10 = *puVar9;
  piVar2 = &local_74;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar2 = (int *)param_1[0xb];
  }
  bVar3 = uVar10 == 0;
  if (pcVar14 != (char *)0x0) {
    do {
      if (bVar3) {
        uVar10 = 0;
      }
      else {
        lVar11 = *(long *)(lVar6 + 8);
        uVar12 = (ulong)(uVar10 - 1);
        pbVar13 = (byte *)(lVar11 + uVar12 * 0x10 + 8);
        if (*pbVar13 == 0) {
          bVar4 = 0;
          if ((char)param_1[9] != '\0') {
            bVar4 = (**(code **)(*(long *)param_1[5] + 0x20))
                              ((long *)param_1[5],*(undefined8 *)(lVar11 + uVar12 * 0x10));
            bVar4 = bVar4 & 1;
            lVar6 = *param_1;
            *(byte *)(param_1 + 9) = bVar4;
            lVar11 = *(long *)(lVar6 + 8);
            puVar9 = (uint *)(lVar6 + 0x10);
            uVar10 = *puVar9;
            uVar12 = (ulong)(uVar10 - 1);
            pbVar13 = (byte *)(lVar11 + uVar12 * 0x10 + 8);
          }
          *(byte *)(lVar11 + uVar12 * 0x10 + 9) = bVar4;
          *pbVar13 = bVar4;
        }
      }
      local_68 = 0;
      uStack_67 = (char)param_1[9];
      if (uVar10 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
        plVar7 = (long *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10);
        plVar7[1] = (ulong)CONCAT61(uStack_66,(char)param_1[9]) << 8;
        *plVar7 = (long)pcVar14;
        *puVar9 = *puVar9 + 1;
        uVar15 = (undefined4)param_4[1];
        local_70 = (char *)0x0;
        if ((char)param_1[9] == '\0') goto LAB_00376e3c;
LAB_00376da8:
        local_70 = (char *)0x0;
        plVar7 = (long *)param_1[5];
        iVar5 = *(int *)(*param_1 + 0x10);
        if (iVar5 == 0) {
          uVar12 = (**(code **)(*plVar7 + 0x10))(plVar7,"bad__repx__name",&local_70);
          if ((uVar12 & 1) != 0) goto LAB_00376ddc;
          goto LAB_00376e3c;
        }
        uVar12 = (**(code **)(*plVar7 + 0x10))
                           (plVar7,*(undefined8 *)
                                    (*(long *)(*param_1 + 8) + (ulong)(iVar5 - 1) * 0x10),&local_70)
        ;
        if ((uVar12 & 1) == 0) goto LAB_00376e3c;
LAB_00376ddc:
        pcVar14 = local_70;
        if ((local_70 == (char *)0x0) || (*local_70 == '\0')) goto LAB_00376e3c;
        iVar5 = strcasecmp("eLOCKED",local_70);
        if (iVar5 == 0) {
          lVar6 = 0;
LAB_00376ec0:
          uVar8 = (&DAT_025e7c58)[lVar6 * 4];
        }
        else {
          iVar5 = strcasecmp("eLIMITED",pcVar14);
          if (iVar5 == 0) {
            lVar6 = 1;
            goto LAB_00376ec0;
          }
          iVar5 = strcasecmp("eFREE",pcVar14);
          if (iVar5 == 0) {
            lVar6 = 2;
            goto LAB_00376ec0;
          }
          uVar8 = 0;
        }
        (*(code *)param_3[2])(param_1[6],uVar15,uVar8);
        lVar6 = *param_1;
        iVar5 = *(int *)(lVar6 + 0x10);
        if (iVar5 == 0) goto LAB_00376ee4;
LAB_00376e48:
        uVar10 = iVar5 - 1;
        if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10 + 8) != '\0') &&
           (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10 + 9) != '\0')) {
          (**(code **)(*(long *)param_1[5] + 0x50))();
          lVar6 = *param_1;
          uVar10 = *(int *)(lVar6 + 0x10) - 1;
        }
        *(uint *)(lVar6 + 0x10) = uVar10;
        *(undefined1 *)(param_1 + 9) = 1;
        if ((uVar10 != 0) &&
           (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar10 - 1) * 0x10 + 9) == '\0')) {
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
      else {
        local_70 = pcVar14;
        FUN_00321500(lVar6,&local_70);
        uVar15 = (undefined4)param_4[1];
        local_70 = (char *)0x0;
        if ((char)param_1[9] != '\0') goto LAB_00376da8;
LAB_00376e3c:
        lVar6 = *param_1;
        iVar5 = *(int *)(lVar6 + 0x10);
        if (iVar5 != 0) goto LAB_00376e48;
LAB_00376ee4:
        *(undefined1 *)(param_1 + 9) = 1;
      }
      *piVar2 = *piVar2 + 1;
      pcVar14 = (char *)param_4[2];
      puVar9 = (uint *)(lVar6 + 0x10);
      uVar10 = *puVar9;
      bVar3 = uVar10 == 0;
      param_4 = param_4 + 2;
    } while (pcVar14 != (char *)0x0);
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar10 = uVar10 - 1;
    if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar10 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar6 = *param_1;
      puVar9 = (uint *)(lVar6 + 0x10);
      uVar10 = *puVar9 - 1;
    }
    *puVar9 = uVar10;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar10 != 0) && (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar10 - 1) * 0x10 + 9) == '\0'))
    {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


