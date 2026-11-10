/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ea5c0; name: FUN_007ea5c0
 */


long FUN_007ea5c0(long *param_1,long param_2)

{
  size_t sVar1;
  char *__s1;
  size_t sVar2;
  string *this;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *__s2;
  char *pcVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *__s1_00;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte local_170 [8];
  size_t local_168;
  char *local_160;
  byte local_158 [8];
  size_t local_150;
  char *local_148;
  byte *local_140 [28];
  
  std::string::operator=((string *)(param_1 + 7),*(string **)(param_2 + 0x18));
  local_140[0] = (byte *)((long)param_1 + 0x39);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    local_140[0] = (byte *)param_1[9];
  }
  lVar6 = FUN_007f7570(param_1[1] + 0x118,local_140);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_007ea734;
  FUN_008468d0(local_140);
  FUN_007e4e00(lVar6,local_140);
  if ((*(int *)(lVar6 + 0x7c) == 2) && ((*(byte *)(param_2 + 0x11) >> 3 & 1) != 0)) {
    FUN_007e5340(local_140,"proto2");
  }
  FUN_0080c7c0(local_158,local_140);
  FUN_0080c7c0(local_170,param_2);
  bVar3 = local_158[0];
  sVar1 = (ulong)(local_158[0] >> 1);
  if ((local_158[0] & 1) != 0) {
    sVar1 = local_150;
  }
  sVar2 = (ulong)(local_170[0] >> 1);
  if ((local_170[0] & 1) != 0) {
    sVar2 = local_168;
  }
  if (sVar1 == sVar2) {
    pcVar7 = (char *)((ulong)local_158 | 1);
    __s1 = pcVar7;
    if ((local_158[0] & 1) != 0) {
      __s1 = local_148;
    }
    __s2 = (char *)((ulong)local_170 | 1);
    if ((local_170[0] & 1) != 0) {
      __s2 = local_160;
    }
    if ((local_158[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar9 = -(ulong)(local_158[0] >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_007ea704;
          pcVar7 = pcVar7 + 1;
          __s2 = __s2 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar5 = memcmp(__s1,__s2,sVar1);
      bVar4 = iVar5 == 0;
      goto joined_r0x007ea708;
    }
    bVar4 = true;
  }
  else {
LAB_007ea704:
    bVar4 = false;
  }
joined_r0x007ea708:
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
    bVar3 = local_158[0];
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(local_148);
  }
  FUN_00846d50(local_140);
  if (bVar4) {
    return lVar6;
  }
LAB_007ea734:
  plVar11 = (long *)param_1[1];
  lVar6 = *plVar11;
  this = (string *)plVar11[1];
  if ((long)this - lVar6 != 0) {
    pbVar12 = *(byte **)(param_2 + 0x18);
    bVar3 = *pbVar12;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar12 + 8);
    }
    uVar14 = ((long)this - lVar6 >> 3) * -0x5555555555555555;
    uVar13 = 0;
    if ((bVar3 & 1) == 0) {
      do {
        pbVar8 = (byte *)(lVar6 + uVar13 * 0x18);
        bVar3 = *pbVar8;
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar8 + 8);
        }
        if (sVar2 == sVar1) {
          pbVar10 = *(byte **)(lVar6 + uVar13 * 0x18 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar10 = pbVar8 + 1;
          }
          if ((bVar3 & 1) == 0) {
            if (sVar1 == 0) {
LAB_007ea8d8:
              FUN_007ec180(param_1,param_2,uVar13 & 0xffffffff);
              return 0;
            }
            lVar9 = -(ulong)(bVar3 >> 1);
            pbVar10 = pbVar12 + 1;
            while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar10) {
              pbVar10 = pbVar10 + 1;
              lVar9 = lVar9 + 1;
              if (lVar9 == 0) goto LAB_007ea8d8;
            }
          }
          else if ((sVar1 == 0) || (iVar5 = memcmp(pbVar10,pbVar12 + 1,sVar1), iVar5 == 0))
          goto LAB_007ea8d8;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar14);
    }
    else {
      do {
        pbVar8 = (byte *)(lVar6 + uVar13 * 0x18);
        bVar3 = *pbVar8;
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar8 + 8);
        }
        if (sVar2 == sVar1) {
          __s1_00 = *(byte **)(lVar6 + uVar13 * 0x18 + 0x10);
          pbVar10 = *(byte **)(pbVar12 + 0x10);
          if ((bVar3 & 1) == 0) {
            __s1_00 = pbVar8 + 1;
          }
          if ((bVar3 & 1) == 0) {
            if (sVar1 == 0) goto LAB_007ea8d8;
            lVar9 = -(ulong)(bVar3 >> 1);
            while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar10) {
              pbVar10 = pbVar10 + 1;
              lVar9 = lVar9 + 1;
              if (lVar9 == 0) goto LAB_007ea8d8;
            }
          }
          else if ((sVar1 == 0) || (iVar5 = memcmp(__s1_00,pbVar10,sVar1), iVar5 == 0))
          goto LAB_007ea8d8;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar14);
    }
  }
  if (*(long *)(*param_1 + 8) != 0) {
    if ((string *)plVar11[2] == this) {
      FUN_007fc500(plVar11);
      iVar5 = *(int *)(param_2 + 0x30);
      lVar6 = param_1[1];
    }
    else {
      std::string::string(this,*(string **)(param_2 + 0x18));
      plVar11[1] = plVar11[1] + 0x18;
      iVar5 = *(int *)(param_2 + 0x30);
      lVar6 = param_1[1];
    }
    if (0 < iVar5) {
      lVar9 = 1;
      do {
        pbVar12 = *(byte **)(*(long *)(param_2 + 0x38) + lVar9 * 8);
        local_140[0] = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          local_140[0] = pbVar12 + 1;
        }
        lVar6 = FUN_007f7570(lVar6 + 0x118,local_140);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
          lVar6 = *param_1;
          if (*(long *)(lVar6 + 0x18) != 0) {
            lVar6 = FUN_007e27c0(*(long *)(lVar6 + 0x18),
                                 *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar9 * 8));
            if (lVar6 != 0) goto LAB_007ea970;
            lVar6 = *param_1;
          }
          FUN_007e2a40(lVar6,*(undefined8 *)(*(long *)(param_2 + 0x38) + lVar9 * 8));
        }
LAB_007ea970:
        lVar6 = param_1[1];
        bVar4 = lVar9 < *(int *)(param_2 + 0x30);
        lVar9 = lVar9 + 1;
      } while (bVar4);
    }
    pbVar12 = (byte *)(*(long *)(lVar6 + 8) + -0x18);
    if ((*pbVar12 & 1) != 0) {
      operator_delete(*(void **)(*(long *)(lVar6 + 8) + -8));
    }
    *(byte **)(lVar6 + 8) = pbVar12;
  }
  lVar6 = FUN_007ec4f0(param_1,param_2);
  return lVar6;
}


