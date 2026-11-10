/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853810; name: FUN_00853810
 */


undefined8 FUN_00853810(long param_1,ulong *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  puVar5 = PTR_DAT_02716d10;
  puVar1 = PTR_DAT_027172d8 + 0x10;
LAB_00853868:
  while (pbVar11 = (byte *)*param_2, (byte *)param_2[1] <= pbVar11) {
    uVar9 = 0;
LAB_00853bd0:
    iVar7 = FUN_0080d8c0(param_2,uVar9);
    bVar6 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar9 = (ulong)CONCAT14(bVar6,iVar7);
    if (bVar6) goto LAB_00853898;
switchD_008538b0_default:
    if ((uint)uVar9 == 0) {
      return 1;
    }
    if (((uint)uVar9 & 7) == 4) {
      return 1;
    }
LAB_00853c08:
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      uVar8 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar8);
    }
    else {
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar12 & 0xfffffffffffffffe);
    }
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar11;
  uVar9 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_00853bd0;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar11 + 1);
LAB_00853898:
  uVar13 = (uint)uVar9;
  switch((uint)(uVar9 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar13 != 10) {
joined_r0x00853928:
      if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
        return 1;
      }
      goto LAB_00853c08;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    lVar10 = *(long *)(param_1 + 0x18);
    if (lVar10 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar5);
      lVar10 = *(long *)(param_1 + 0x18);
    }
    uVar9 = FUN_008160d0(param_2,lVar10);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pcVar2 = (char *)*param_2;
    if ((pcVar2 < (char *)param_2[1]) && (*pcVar2 == '\x12')) {
      *param_2 = (ulong)(pcVar2 + 1);
      goto LAB_00853988;
    }
    goto LAB_00853868;
  case 2:
    if (uVar13 != 0x12) goto joined_r0x00853928;
LAB_00853988:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    lVar10 = *(long *)(param_1 + 0x20);
    if (lVar10 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x20),*(long *)puVar5);
      lVar10 = *(long *)(param_1 + 0x20);
    }
    uVar9 = FUN_008160d0(param_2,lVar10);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pcVar2 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar2) || (*pcVar2 != '\x1a')) goto LAB_00853868;
    *param_2 = (ulong)(pcVar2 + 1);
    break;
  case 3:
    if (uVar13 != 0x1a) goto joined_r0x00853928;
    break;
  case 4:
    if (uVar13 != 0x22) goto joined_r0x00853928;
    goto LAB_00853a38;
  case 5:
    if (uVar13 != 0x28) goto joined_r0x00853928;
    pbVar11 = (byte *)*param_2;
    if (pbVar11 < (byte *)param_2[1]) goto LAB_00853908;
    goto LAB_00853b34;
  case 6:
    if (uVar13 != 0x30) goto joined_r0x00853928;
    pbVar11 = (byte *)*param_2;
    if (pbVar11 < (byte *)param_2[1]) goto LAB_00853ab4;
    goto LAB_00853b80;
  default:
    goto switchD_008538b0_default;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 == *(long *)puVar5) {
    FUN_009b58d0((long *)(param_1 + 0x28),*(long *)puVar5);
    lVar10 = *(long *)(param_1 + 0x28);
  }
  uVar9 = FUN_008160d0(param_2,lVar10);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pcVar2 = (char *)*param_2;
  if ((pcVar2 < (char *)param_2[1]) && (*pcVar2 == '\"')) {
    *param_2 = (ulong)(pcVar2 + 1);
LAB_00853a38:
    plVar14 = *(long **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
    if (plVar14 == (long *)0x0) {
      plVar14 = operator_new(0x58);
      *plVar14 = (long)puVar1;
      FUN_00825430(plVar14 + 1);
      *(undefined1 *)(plVar14 + 10) = 0;
      plVar14[8] = 0;
      plVar14[9] = 0;
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[7] = 0;
      *(long **)(param_1 + 0x30) = plVar14;
    }
    pcVar2 = (char *)*param_2;
    if ((pcVar2 < (char *)param_2[1]) && (cVar4 = *pcVar2, -1 < cVar4)) {
      *param_2 = (ulong)(pcVar2 + 1);
      uVar9 = FUN_0080ca20(param_2,cVar4);
    }
    else {
      iVar7 = FUN_0080d720(param_2);
      if (iVar7 < 0) {
        return 0;
      }
      uVar9 = FUN_0080ca20(param_2,iVar7);
    }
    if ((long)uVar9 < 0) {
      return 0;
    }
    uVar12 = FUN_0085a2c0(plVar14,param_2);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar9 = FUN_0080cb90(param_2,uVar9 & 0xffffffff);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pbVar11 = (byte *)*param_2;
    if ((pbVar11 < (byte *)param_2[1]) && (*pbVar11 == 0x28)) {
      pbVar11 = pbVar11 + 1;
      *param_2 = (ulong)pbVar11;
      if (pbVar11 < (byte *)param_2[1]) {
LAB_00853908:
        if ((char)*pbVar11 < '\0') goto LAB_00853b34;
        uVar9 = (ulong)*pbVar11;
        *param_2 = (ulong)(pbVar11 + 1);
      }
      else {
LAB_00853b34:
        auVar15 = FUN_0080d3e0(param_2);
        uVar9 = auVar15._0_8_;
        if ((auVar15._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(bool *)(param_1 + 0x38) = uVar9 != 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      pbVar11 = (byte *)*param_2;
      if ((pbVar11 < (byte *)param_2[1]) && (*pbVar11 == 0x30)) {
        pbVar11 = pbVar11 + 1;
        *param_2 = (ulong)pbVar11;
        if (pbVar11 < (byte *)param_2[1]) {
LAB_00853ab4:
          if ((char)*pbVar11 < '\0') goto LAB_00853b80;
          uVar9 = (ulong)*pbVar11;
          *param_2 = (ulong)(pbVar11 + 1);
        }
        else {
LAB_00853b80:
          auVar15 = FUN_0080d3e0(param_2);
          uVar9 = auVar15._0_8_;
          if ((auVar15._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x39) = uVar9 != 0;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
        if ((*param_2 == param_2[1]) &&
           ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined1 *)((long)param_2 + 0x24) = 1;
          return 1;
        }
      }
    }
  }
  goto LAB_00853868;
}


