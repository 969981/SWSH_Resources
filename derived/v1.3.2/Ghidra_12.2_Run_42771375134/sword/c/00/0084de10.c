/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084de10; name: FUN_0084de10
 */


undefined8 FUN_0084de10(long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  long *plVar16;
  
  puVar5 = PTR_DAT_02716d10;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = PTR_DAT_027172b0 + 0x10;
LAB_0084de78:
  while (pbVar14 = (byte *)*param_2, (byte *)param_2[1] <= pbVar14) {
    uVar10 = 0;
LAB_0084e420:
    iVar7 = FUN_0080d8c0(param_2,uVar10);
    bVar6 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar10 = (ulong)CONCAT14(bVar6,iVar7);
    if (bVar6) goto LAB_0084dea8;
switchD_0084dec0_default:
    if ((uint)uVar10 == 0) {
      return 1;
    }
    if (((uint)uVar10 & 7) == 4) {
      return 1;
    }
LAB_0084e458:
    if ((*puVar1 & 1) == 0) {
      uVar9 = FUN_009bb7d0(puVar1);
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,uVar9);
    }
    else {
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,*puVar1 & 0xfffffffffffffffe);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar14;
  uVar10 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_0084e420;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar14 + 1);
LAB_0084dea8:
  uVar15 = (uint)uVar10;
  switch((uint)(uVar10 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar15 != 10) {
joined_r0x0084e16c:
      if ((uVar15 == 0) || ((uVar15 & 7) == 4)) {
        return 1;
      }
      goto LAB_0084e458;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar5);
      lVar11 = *(long *)(param_1 + 0x18);
    }
    uVar10 = FUN_008160d0(param_2,lVar11);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pcVar13 = (char *)*param_2;
    if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == '\x12')) {
      *param_2 = (ulong)(pcVar13 + 1);
      goto LAB_0084e1dc;
    }
    goto LAB_0084de78;
  case 2:
    if (uVar15 != 0x12) goto joined_r0x0084e16c;
LAB_0084e1dc:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
    lVar11 = *(long *)(param_1 + 0x30);
    if (lVar11 == *(long *)puVar5) {
      FUN_009b58d0((long *)(param_1 + 0x30),*(long *)puVar5);
      lVar11 = *(long *)(param_1 + 0x30);
    }
    uVar10 = FUN_008160d0(param_2,lVar11);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pbVar14 = (byte *)*param_2;
    if (((byte *)param_2[1] <= pbVar14) || (*pbVar14 != 0x18)) goto LAB_0084de78;
    pbVar14 = pbVar14 + 1;
    *param_2 = (ulong)pbVar14;
    if (pbVar14 < (byte *)param_2[1]) goto LAB_0084def4;
LAB_0084e240:
    uVar10 = 0;
LAB_0084e244:
    uVar10 = FUN_0080d5d0(param_2,uVar10);
    if ((long)uVar10 < 0) {
      return 0;
    }
    break;
  case 3:
    if (uVar15 != 0x18) goto joined_r0x0084e16c;
    pbVar14 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar14) goto LAB_0084e240;
LAB_0084def4:
    uVar10 = (ulong)*pbVar14;
    if ((char)*pbVar14 < '\0') goto LAB_0084e244;
    *param_2 = (ulong)(pbVar14 + 1);
    break;
  case 4:
    if (uVar15 != 0x20) goto joined_r0x0084e16c;
    pbVar14 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar14) goto LAB_0084e28c;
    goto LAB_0084df20;
  case 5:
    if (uVar15 != 0x28) goto joined_r0x0084e16c;
    pbVar14 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar14) goto LAB_0084df80;
    goto LAB_0084df9c;
  case 6:
    if (uVar15 != 0x32) goto joined_r0x0084e16c;
    goto LAB_0084e000;
  case 7:
    if (uVar15 != 0x3a) goto joined_r0x0084e16c;
    goto LAB_0084e064;
  case 8:
    if (uVar15 != 0x42) goto joined_r0x0084e16c;
    goto LAB_0084e0c8;
  case 9:
    if (uVar15 != 0x48) goto joined_r0x0084e16c;
    pbVar14 = (byte *)*param_2;
    if (pbVar14 < (byte *)param_2[1]) goto LAB_0084e14c;
    goto LAB_0084e338;
  case 10:
    if (uVar15 != 0x52) goto joined_r0x0084e16c;
    goto LAB_0084e37c;
  default:
    goto switchD_0084dec0_default;
  }
  *(int *)(param_1 + 0x20) = (int)uVar10;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  pbVar14 = (byte *)*param_2;
  if ((pbVar14 < (byte *)param_2[1]) && (*pbVar14 == 0x20)) {
    pbVar14 = pbVar14 + 1;
    *param_2 = (ulong)pbVar14;
    if (pbVar14 < (byte *)param_2[1]) {
LAB_0084df20:
      uVar15 = (uint)*pbVar14;
      uVar10 = (ulong)uVar15;
      if ((char)*pbVar14 < '\0') goto LAB_0084e290;
      *param_2 = (ulong)(pbVar14 + 1);
      if (2 < uVar15 - 1) goto LAB_0084df40;
LAB_0084e2b0:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(int *)(param_1 + 0x24) = (int)uVar10;
      pbVar14 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
      if (pbVar12 <= pbVar14) goto LAB_0084de78;
    }
    else {
LAB_0084e28c:
      uVar10 = 0;
LAB_0084e290:
      uVar10 = FUN_0080d5d0(param_2,uVar10);
      uVar15 = (uint)uVar10;
      if ((long)uVar10 < 0) {
        return 0;
      }
      if (uVar15 - 1 < 3) goto LAB_0084e2b0;
LAB_0084df40:
      if ((*puVar1 & 1) == 0) {
        uVar10 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar10 = *puVar1 & 0xfffffffffffffffe;
      }
      FUN_0080fc40(uVar10,4,(long)(int)uVar15);
      pbVar14 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
      if (pbVar12 <= pbVar14) goto LAB_0084de78;
    }
    if (*pbVar14 == 0x28) {
      pbVar14 = pbVar14 + 1;
      *param_2 = (ulong)pbVar14;
      if (pbVar14 < pbVar12) {
LAB_0084df9c:
        uVar15 = (uint)*pbVar14;
        uVar10 = (ulong)uVar15;
        if ((char)*pbVar14 < '\0') goto LAB_0084e3dc;
        *param_2 = (ulong)(pbVar14 + 1);
        if (0x11 < uVar15 - 1) goto LAB_0084dfbc;
LAB_0084e3fc:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        *(int *)(param_1 + 0x38) = (int)uVar10;
        pcVar13 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar13) goto LAB_0084de78;
      }
      else {
LAB_0084df80:
        uVar10 = 0;
LAB_0084e3dc:
        uVar10 = FUN_0080d5d0(param_2,uVar10);
        uVar15 = (uint)uVar10;
        if ((long)uVar10 < 0) {
          return 0;
        }
        if (uVar15 - 1 < 0x12) goto LAB_0084e3fc;
LAB_0084dfbc:
        if ((*puVar1 & 1) == 0) {
          uVar10 = FUN_009bb7d0(puVar1);
        }
        else {
          uVar10 = *puVar1 & 0xfffffffffffffffe;
        }
        FUN_0080fc40(uVar10,5,(long)(int)uVar15);
        pcVar13 = (char *)*param_2;
        if ((char *)param_2[1] <= pcVar13) goto LAB_0084de78;
      }
      if (*pcVar13 == '2') {
        *param_2 = (ulong)(pcVar13 + 1);
LAB_0084e000:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        lVar11 = *(long *)(param_1 + 0x28);
        if (lVar11 == *(long *)puVar5) {
          FUN_009b58d0((long *)(param_1 + 0x28),*(long *)puVar5);
          lVar11 = *(long *)(param_1 + 0x28);
        }
        uVar10 = FUN_008160d0(param_2,lVar11);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        pcVar13 = (char *)*param_2;
        if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == ':')) {
          *param_2 = (ulong)(pcVar13 + 1);
LAB_0084e064:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
          lVar11 = *(long *)(param_1 + 0x40);
          if (lVar11 == *(long *)puVar5) {
            FUN_009b58d0((long *)(param_1 + 0x40),*(long *)puVar5);
            lVar11 = *(long *)(param_1 + 0x40);
          }
          uVar10 = FUN_008160d0(param_2,lVar11);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pcVar13 = (char *)*param_2;
          if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == 'B')) {
            *param_2 = (ulong)(pcVar13 + 1);
LAB_0084e0c8:
            plVar16 = *(long **)(param_1 + 0x50);
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
            if (plVar16 == (long *)0x0) {
              plVar16 = operator_new(0x60);
              *plVar16 = (long)puVar2;
              FUN_00825430(plVar16 + 1);
              *(undefined4 *)(plVar16 + 0xb) = 0;
              plVar16[9] = 0;
              plVar16[10] = 0;
              plVar16[7] = 0;
              plVar16[8] = 0;
              plVar16[5] = 0;
              plVar16[6] = 0;
              *(long **)(param_1 + 0x50) = plVar16;
            }
            pcVar13 = (char *)*param_2;
            if ((pcVar13 < (char *)param_2[1]) && (cVar4 = *pcVar13, -1 < cVar4)) {
              *param_2 = (ulong)(pcVar13 + 1);
              uVar10 = FUN_0080ca20(param_2,cVar4);
            }
            else {
              iVar7 = FUN_0080d720(param_2);
              if (iVar7 < 0) {
                return 0;
              }
              uVar10 = FUN_0080ca20(param_2,iVar7);
            }
            if ((long)uVar10 < 0) {
              return 0;
            }
            uVar8 = FUN_00856bf0(plVar16,param_2);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            uVar10 = FUN_0080cb90(param_2,uVar10 & 0xffffffff);
            if ((uVar10 & 1) == 0) {
              return 0;
            }
            pbVar14 = (byte *)*param_2;
            if ((pbVar14 < (byte *)param_2[1]) && (*pbVar14 == 0x48)) {
              pbVar14 = pbVar14 + 1;
              *param_2 = (ulong)pbVar14;
              if (pbVar14 < (byte *)param_2[1]) {
LAB_0084e14c:
                uVar10 = (ulong)*pbVar14;
                if ((char)*pbVar14 < '\0') goto LAB_0084e33c;
                *param_2 = (ulong)(pbVar14 + 1);
              }
              else {
LAB_0084e338:
                uVar10 = 0;
LAB_0084e33c:
                uVar10 = FUN_0080d5d0(param_2,uVar10);
                if ((long)uVar10 < 0) {
                  return 0;
                }
              }
              *(int *)(param_1 + 0x3c) = (int)uVar10;
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
              pcVar13 = (char *)*param_2;
              if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == 'R')) {
                *param_2 = (ulong)(pcVar13 + 1);
LAB_0084e37c:
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
                lVar11 = *(long *)(param_1 + 0x48);
                if (lVar11 == *(long *)puVar5) {
                  FUN_009b58d0((long *)(param_1 + 0x48),*(long *)puVar5);
                  lVar11 = *(long *)(param_1 + 0x48);
                }
                uVar10 = FUN_008160d0(param_2,lVar11);
                if ((uVar10 & 1) == 0) {
                  return 0;
                }
                if ((*param_2 == param_2[1]) &&
                   ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5]))))
                {
                  *(undefined4 *)(param_2 + 4) = 0;
                  *(undefined1 *)((long)param_2 + 0x24) = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0084de78;
}


