/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00808b70; name: FUN_00808b70
 */


undefined8 FUN_00808b70(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  ulong local_48;
  undefined8 local_40;
  void *local_38;
  
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = 0;
  lVar1 = param_1 + 0x28;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0x5b02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar5 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        lVar6 = -(ulong)(bVar4 >> 1);
        pcVar8 = (char *)(param_1 + 0x32);
        pcVar9 = (char *)((ulong)&local_60 | 2);
        do {
          lVar6 = lVar6 + 1;
          if (lVar6 == 0) goto LAB_00808c18;
          cVar2 = *pcVar9;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 == cVar2);
      }
      goto LAB_00808c6c;
    }
    if (**(char **)(param_1 + 0x40) != '[') goto LAB_00808c6c;
LAB_00808c18:
    FUN_00842de0(lVar1);
    uVar5 = FUN_00807170(param_1,&local_48);
    if ((uVar5 & 1) != 0) {
      uStack_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0x5d02;
      uVar5 = FUN_00806c70(param_1,&local_60);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      goto joined_r0x00808c78;
    }
  }
  else {
LAB_00808c6c:
    uVar5 = FUN_00807310(param_1,&local_48);
joined_r0x00808c78:
    if ((uVar5 & 1) != 0) {
      uStack_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0x3a02;
      bVar4 = *(byte *)(param_1 + 0x30);
      uVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar5 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == ':') {
            lVar6 = -(ulong)(bVar4 >> 1);
            pcVar8 = (char *)(param_1 + 0x32);
            pcVar9 = (char *)((ulong)&local_60 | 2);
            do {
              lVar6 = lVar6 + 1;
              if (lVar6 == 0) goto LAB_00808d00;
              cVar2 = *pcVar9;
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar3 == cVar2);
          }
          goto LAB_00808dfc;
        }
        if (**(char **)(param_1 + 0x40) != ':') goto LAB_00808dfc;
LAB_00808d00:
        FUN_00842de0(lVar1);
        uStack_70 = 0;
        local_68 = 0;
        local_78 = 0x7b02;
        bVar4 = *(byte *)(param_1 + 0x30);
        uVar7 = (ulong)(bVar4 >> 1);
        uVar5 = uVar7;
        if ((bVar4 & 1) != 0) {
          uVar5 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar5 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '{') {
              lVar6 = -uVar7;
              pcVar8 = (char *)(param_1 + 0x32);
              pcVar9 = (char *)((ulong)&local_78 | 2);
              do {
                lVar6 = lVar6 + 1;
                if (lVar6 == 0) goto LAB_00808dfc;
                cVar2 = *pcVar9;
                cVar3 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar3 == cVar2);
            }
          }
          else if (**(char **)(param_1 + 0x40) == '{') goto LAB_00808dfc;
        }
        local_80 = 0;
        uStack_88 = 0;
        local_90 = 0x3c02;
        if (uVar5 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '<') {
              lVar6 = -uVar7;
              pcVar8 = (char *)(param_1 + 0x32);
              pcVar9 = (char *)((ulong)&local_90 | 2);
              do {
                lVar6 = lVar6 + 1;
                if (lVar6 == 0) goto LAB_00808dfc;
                cVar2 = *pcVar9;
                cVar3 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar3 == cVar2);
            }
          }
          else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00808dfc;
        }
        uVar5 = FUN_008073d0(param_1);
      }
      else {
LAB_00808dfc:
        uVar5 = FUN_00807930(param_1);
      }
      if ((uVar5 & 1) != 0) {
        uStack_58 = 0;
        local_50 = (void *)0x0;
        local_60 = 0x3b02;
        bVar4 = *(byte *)(param_1 + 0x30);
        uVar7 = (ulong)(bVar4 >> 1);
        uVar5 = uVar7;
        if ((bVar4 & 1) != 0) {
          uVar5 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar5 == 1) {
          if ((bVar4 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ';') {
              lVar6 = -uVar7;
              pcVar8 = (char *)(param_1 + 0x32);
              pcVar9 = (char *)((ulong)&local_60 | 2);
              do {
                lVar6 = lVar6 + 1;
                if (lVar6 == 0) goto LAB_00808f34;
                cVar2 = *pcVar9;
                cVar3 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar3 == cVar2);
            }
            goto LAB_00808e8c;
          }
          if (**(char **)(param_1 + 0x40) != ';') goto LAB_00808e8c;
LAB_00808f34:
          FUN_00842de0(lVar1);
        }
        else {
LAB_00808e8c:
          local_68 = 0;
          uStack_70 = 0;
          local_78 = 0x2c02;
          if (uVar5 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == ',') {
                lVar6 = -uVar7;
                pcVar8 = (char *)(param_1 + 0x32);
                pcVar9 = (char *)((ulong)&local_78 | 2);
                do {
                  lVar6 = lVar6 + 1;
                  if (lVar6 == 0) goto LAB_00808f34;
                  cVar2 = *pcVar9;
                  cVar3 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == ',') goto LAB_00808f34;
          }
        }
        uVar10 = 1;
        goto joined_r0x00808f44;
      }
    }
  }
  uVar10 = 0;
joined_r0x00808f44:
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar10;
}


