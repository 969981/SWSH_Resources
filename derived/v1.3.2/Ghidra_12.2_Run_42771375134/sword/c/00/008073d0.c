/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008073d0; name: FUN_008073d0
 */


undefined8 FUN_008073d0(long param_1)

{
  string sVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  byte *local_68;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    do {
      FUN_00842de0(param_1 + 0x28);
    } while (*(int *)(param_1 + 0x28) == 5);
    return 1;
  }
  local_70 = 0;
  local_68 = (byte *)0x0;
  local_78 = 0x5b02;
  sVar1 = *(string *)(param_1 + 0x30);
  uVar6 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
  }
  lVar15 = param_1 + 0x28;
  if (uVar6 == 1) {
    if (((byte)sVar1 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        lVar8 = -(ulong)((byte)sVar1 >> 1);
        pcVar11 = (char *)(param_1 + 0x32);
        pcVar10 = (char *)((ulong)&local_78 | 2);
        do {
          lVar8 = lVar8 + 1;
          if (lVar8 == 0) goto LAB_008074a8;
          cVar2 = *pcVar10;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '[') {
LAB_008074a8:
      FUN_00842de0(lVar15);
      pcVar11 = (char *)(param_1 + 0x32);
      do {
        local_70 = 0;
        local_68 = (byte *)0x0;
        local_78 = 0x7b02;
        bVar4 = *(byte *)(param_1 + 0x30);
        uVar14 = (ulong)(bVar4 >> 1);
        uVar6 = uVar14;
        if ((bVar4 & 1) != 0) {
          uVar6 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar6 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '{') {
              lVar8 = -uVar14;
              pcVar10 = (char *)((ulong)&local_78 | 2);
              pcVar13 = pcVar11;
              do {
                lVar8 = lVar8 + 1;
                if (lVar8 == 0) goto LAB_008075d0;
                cVar2 = *pcVar10;
                cVar3 = *pcVar13;
                pcVar10 = pcVar10 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar3 == cVar2);
            }
LAB_00807568:
            uStack_88 = 0;
            local_80 = (void *)0x0;
            local_90 = 0x3c02;
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '<') {
                lVar8 = -uVar14;
                pcVar10 = (char *)((ulong)&local_90 | 2);
                pcVar13 = pcVar11;
                do {
                  lVar8 = lVar8 + 1;
                  if (lVar8 == 0) goto LAB_008075d0;
                  cVar2 = *pcVar10;
                  cVar3 = *pcVar13;
                  pcVar10 = pcVar10 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '<') goto LAB_008075d0;
            goto LAB_008075e0;
          }
          if (**(char **)(param_1 + 0x40) != '{') goto LAB_00807568;
LAB_008075d0:
          uVar6 = FUN_00807930(param_1);
        }
        else {
LAB_008075e0:
          local_80 = (void *)0x0;
          uStack_88 = 0;
          local_90 = 0x3c02;
          uVar6 = FUN_008073d0(param_1);
        }
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        local_70 = 0;
        local_68 = (byte *)0x0;
        local_78 = 0x5d02;
        bVar4 = *(byte *)(param_1 + 0x30);
        uVar6 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar6 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar6 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ']') {
              lVar8 = -(ulong)(bVar4 >> 1);
              pcVar10 = (char *)((ulong)&local_78 | 2);
              pcVar13 = pcVar11;
              do {
                lVar8 = lVar8 + 1;
                if (lVar8 == 0) goto LAB_00807904;
                cVar2 = *pcVar10;
                cVar3 = *pcVar13;
                pcVar10 = pcVar10 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar3 == cVar2);
            }
          }
          else if (**(char **)(param_1 + 0x40) == ']') goto LAB_00807904;
        }
        local_68 = (void *)0x0;
        local_70 = 0;
        local_78 = 0x2c02;
        uVar6 = FUN_00806c70(param_1,&local_78);
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
        if ((uVar6 & 1) == 0) {
          return 0;
        }
      } while( true );
    }
  }
  local_70 = 0;
  local_68 = (byte *)0x0;
  local_78 = 0x2d02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar6 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        lVar8 = -(ulong)(bVar4 >> 1);
        pcVar11 = (char *)(param_1 + 0x32);
        pcVar10 = (char *)((ulong)&local_78 | 2);
        do {
          lVar8 = lVar8 + 1;
          if (lVar8 == 0) goto LAB_0080777c;
          cVar2 = *pcVar10;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 == cVar2);
        goto LAB_00807718;
      }
    }
    else if (**(char **)(param_1 + 0x40) == '-') {
LAB_0080777c:
      FUN_00842de0(lVar15);
      bVar4 = 1;
      iVar5 = *(int *)(param_1 + 0x28);
      goto joined_r0x00807794;
    }
    bVar4 = 0;
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
LAB_00807718:
    bVar4 = 0;
    iVar5 = *(int *)(param_1 + 0x28);
  }
joined_r0x00807794:
  if (2 < iVar5 - 2U) {
    return 0;
  }
  if ((bool)(bVar4 ^ 1 | iVar5 != 2)) goto LAB_00807904;
  std::string::string((string *)&local_78,(string *)(param_1 + 0x30));
  if ((local_78 & 1) == 0) {
    pbVar9 = (byte *)((ulong)&local_78 | 1);
    pbVar12 = pbVar9 + (local_78 >> 1 & 0x7f);
    if (pbVar9 != pbVar12) {
LAB_008077c4:
      do {
        if (*pbVar9 - 0x41 < 0x1a) {
          *pbVar9 = *pbVar9 + 0x20;
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar12 != pbVar9);
    }
  }
  else {
    pbVar12 = local_68 + local_70;
    pbVar9 = local_68;
    if (local_68 != pbVar12) goto LAB_008077c4;
  }
  uVar7 = (uint)local_78 & 0xff;
  uVar14 = (ulong)(uVar7 >> 1);
  uVar6 = uVar14;
  if ((local_78 & 1) != 0) {
    uVar6 = local_70;
  }
  if (uVar6 == 3) {
    iVar5 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1cddd59);
    if (iVar5 != 0) {
      uVar7 = (uint)(byte)local_78._0_1_;
      uVar14 = (ulong)((byte)local_78._0_1_ >> 1);
      goto LAB_00807838;
    }
  }
  else {
LAB_00807838:
    uVar7 = uVar7 & 1;
    uVar6 = uVar14;
    if (uVar7 != 0) {
      uVar6 = local_70;
    }
    if (uVar6 == 8) {
      iVar5 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1d3a0e0);
      if (iVar5 == 0) goto LAB_008078f4;
      uVar7 = (byte)local_78._0_1_ & 1;
      uVar14 = (ulong)((byte)local_78._0_1_ >> 1);
    }
    if (uVar7 != 0) {
      uVar14 = local_70;
    }
    if ((uVar14 != 3) ||
       (iVar5 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1d14976),
       iVar5 != 0)) {
      std::operator+("Invalid float number: ",(string *)&local_78);
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_90
                  );
      if (((byte)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      return 0;
    }
  }
LAB_008078f4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00807904:
  FUN_00842de0(lVar15);
  return 1;
}


