/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085b9d0; name: FUN_0085b9d0
 */


undefined8 FUN_0085b9d0(long param_1,ulong *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 local_68;
  
  puVar4 = PTR_DAT_02716d10;
LAB_0085ba30:
  do {
    pbVar11 = (byte *)*param_2;
    if (pbVar11 < (byte *)param_2[1]) {
      bVar2 = *pbVar11;
      uVar9 = (ulong)(uint)bVar2;
      if ((char)bVar2 < '\x01') goto LAB_0085be40;
      *(uint *)(param_2 + 4) = (uint)bVar2;
      *param_2 = (ulong)(pbVar11 + 1);
LAB_0085ba60:
      uVar14 = (uint)uVar9;
      switch((uint)(uVar9 >> 3) & 0x1fffffff) {
      case 2:
        if (uVar14 == 0x12) {
          uVar9 = param_2[7];
          *(int *)(param_2 + 7) = (int)uVar9 + -1;
          if ((int)uVar9 < 1) {
            return 0;
          }
          do {
            piVar12 = *(int **)(param_1 + 0x28);
            if (piVar12 == (int *)0x0) {
              iVar7 = *(int *)(param_1 + 0x24);
LAB_0085bc8c:
              FUN_00824290(param_1 + 0x18,iVar7 + 1);
              piVar12 = *(int **)(param_1 + 0x28);
              iVar7 = *piVar12;
LAB_0085bca0:
              *piVar12 = iVar7 + 1;
              uVar8 = FUN_008608f0(0,*(undefined8 *)(param_1 + 0x18));
              iVar7 = *(int *)(param_1 + 0x20);
              *(int *)(param_1 + 0x20) = iVar7 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar7 * 8 + 8) = uVar8;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x20);
              iVar7 = *piVar12;
              if (iVar7 <= iVar3) {
                if (iVar7 == *(int *)(param_1 + 0x24)) goto LAB_0085bc8c;
                goto LAB_0085bca0;
              }
              *(int *)(param_1 + 0x20) = iVar3 + 1;
              uVar8 = *(undefined8 *)(piVar12 + (long)iVar3 * 2 + 2);
            }
            uVar6 = FUN_0080cab0(param_2);
            uVar9 = FUN_0085ae50(uVar8,param_2);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            uVar9 = FUN_0080cc00(param_2,uVar6);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            pcVar1 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar1) {
              *(int *)(param_2 + 7) = (int)param_2[7] + 1;
              goto LAB_0085ba30;
            }
            if (*pcVar1 != '\x12') goto code_r0x0085bd14;
            *param_2 = (ulong)(pcVar1 + 1);
          } while( true );
        }
joined_r0x0085bbc8:
        if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
          return 1;
        }
        goto LAB_0085be78;
      case 3:
        if (uVar14 != 0x1a) goto joined_r0x0085bbc8;
        goto LAB_0085bd34;
      case 4:
        if (uVar14 != 0x20) goto joined_r0x0085bbc8;
        pbVar11 = (byte *)*param_2;
        if (pbVar11 < (byte *)param_2[1]) goto LAB_0085bab8;
        goto LAB_0085bd98;
      case 5:
        if (uVar14 != 0x28) goto joined_r0x0085bbc8;
        pbVar11 = (byte *)*param_2;
        if (pbVar11 < (byte *)param_2[1]) goto LAB_0085baec;
        goto LAB_0085bddc;
      case 6:
        if (uVar14 != 0x31) goto joined_r0x0085bbc8;
        pcVar1 = (char *)*param_2;
        iVar7 = (int)param_2[1] - (int)pcVar1;
        goto joined_r0x0085bb18;
      case 7:
        if (uVar14 != 0x3a) goto joined_r0x0085bbc8;
        goto LAB_0085bb64;
      case 8:
        if (uVar14 != 0x42) goto joined_r0x0085bbc8;
        break;
      default:
        goto switchD_0085ba78_default;
      }
      goto LAB_0085bbd0;
    }
    uVar9 = 0;
LAB_0085be40:
    iVar7 = FUN_0080d8c0(param_2,uVar9);
    bVar5 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar9 = (ulong)CONCAT14(bVar5,iVar7);
    if (bVar5) goto LAB_0085ba60;
switchD_0085ba78_default:
    if ((uint)uVar9 == 0) {
      return 1;
    }
    if (((uint)uVar9 & 7) == 4) {
      return 1;
    }
LAB_0085be78:
    uVar13 = *(ulong *)(param_1 + 8);
    if ((uVar13 & 1) == 0) {
      uVar8 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar8);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
    }
    else {
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar13 & 0xfffffffffffffffe);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
    }
  } while( true );
code_r0x0085bd14:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if (*pcVar1 != '\x1a') goto LAB_0085ba30;
  *param_2 = (ulong)(pcVar1 + 1);
LAB_0085bd34:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == *(long *)puVar4) {
    FUN_009b58d0((long *)(param_1 + 0x30),*(long *)puVar4);
    lVar10 = *(long *)(param_1 + 0x30);
  }
  uVar9 = FUN_008160d0(param_2,lVar10);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pbVar11 = (byte *)*param_2;
  if (((byte *)param_2[1] <= pbVar11) || (*pbVar11 != 0x20)) goto LAB_0085ba30;
  pbVar11 = pbVar11 + 1;
  *param_2 = (ulong)pbVar11;
  if (pbVar11 < (byte *)param_2[1]) {
LAB_0085bab8:
    if ((char)*pbVar11 < '\0') goto LAB_0085bd98;
    *(ulong *)(param_1 + 0x38) = (ulong)*pbVar11;
    *param_2 = *param_2 + 1;
  }
  else {
LAB_0085bd98:
    auVar15 = FUN_0080d3e0(param_2);
    *(long *)(param_1 + 0x38) = auVar15._0_8_;
    if ((auVar15._8_8_ & 1) == 0) {
      return 0;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  pbVar11 = (byte *)*param_2;
  if (((byte *)param_2[1] <= pbVar11) || (*pbVar11 != 0x28)) goto LAB_0085ba30;
  pbVar11 = pbVar11 + 1;
  *param_2 = (ulong)pbVar11;
  if (pbVar11 < (byte *)param_2[1]) {
LAB_0085baec:
    if (-1 < (char)*pbVar11) {
      uVar9 = (ulong)*pbVar11;
      *param_2 = (ulong)(pbVar11 + 1);
      goto LAB_0085bde8;
    }
  }
LAB_0085bddc:
  auVar15 = FUN_0080d3e0(param_2);
  uVar9 = auVar15._0_8_;
  if ((auVar15._8_8_ & 1) == 0) {
    return 0;
  }
LAB_0085bde8:
  *(ulong *)(param_1 + 0x40) = uVar9;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  pcVar1 = (char *)*param_2;
  if ((pcVar1 < (char *)param_2[1]) && (*pcVar1 == '1')) {
    pcVar1 = pcVar1 + 1;
    *param_2 = (ulong)pcVar1;
    iVar7 = (int)(char *)param_2[1] - (int)pcVar1;
joined_r0x0085bb18:
    if (iVar7 < 8) {
      uVar9 = FUN_0080d2f0(param_2,&local_68);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
    }
    else {
      local_68 = *(undefined8 *)pcVar1;
      *param_2 = (ulong)(pcVar1 + 8);
    }
    *(undefined8 *)(param_1 + 0x48) = local_68;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
    pcVar1 = (char *)*param_2;
    if ((pcVar1 < (char *)param_2[1]) && (*pcVar1 == ':')) {
      *param_2 = (ulong)(pcVar1 + 1);
LAB_0085bb64:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 == *(long *)puVar4) {
        FUN_009b58d0((long *)(param_1 + 0x50),*(long *)puVar4);
        lVar10 = *(long *)(param_1 + 0x50);
      }
      uVar9 = FUN_008160d0(param_2,lVar10);
      if ((uVar9 & 1) != 0) {
        pcVar1 = (char *)*param_2;
        if (((char *)param_2[1] <= pcVar1) || (*pcVar1 != 'B')) goto LAB_0085ba30;
        *param_2 = (ulong)(pcVar1 + 1);
LAB_0085bbd0:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
        lVar10 = *(long *)(param_1 + 0x58);
        if (lVar10 == *(long *)puVar4) {
          FUN_009b58d0((long *)(param_1 + 0x58),*(long *)puVar4);
          lVar10 = *(long *)(param_1 + 0x58);
        }
        uVar9 = FUN_008160d0(param_2,lVar10);
        if ((uVar9 & 1) != 0) {
          if ((*param_2 == param_2[1]) &&
             ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
            *(undefined4 *)(param_2 + 4) = 0;
            *(undefined1 *)((long)param_2 + 0x24) = 1;
            return 1;
          }
          goto LAB_0085ba30;
        }
      }
      return 0;
    }
  }
  goto LAB_0085ba30;
}


