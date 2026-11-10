/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144ffc0; name: FUN_0144ffc0
 */


int FUN_0144ffc0(int *param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  
  iVar4 = FUN_0144f610();
  iVar6 = *param_4;
  iVar1 = *param_3;
  uVar11 = *param_5;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar12,iVar6);
  iVar5 = FUN_01452170(uVar11,iVar6);
  cVar2 = *pcVar7;
  if (iVar5 == 0) {
    if (cVar2 == '\x03') {
      uVar8 = 0xb;
      if (pcVar7[0x19] != '\0') {
        uVar8 = 9;
      }
    }
    else {
      uVar8 = 5;
      if (pcVar7[0x19] == '\0') {
        uVar8 = 1;
      }
      uVar9 = 7;
      if (pcVar7[0x19] == '\0') {
        uVar9 = 3;
      }
      if (cVar2 == '\x01') {
        uVar8 = uVar9;
      }
    }
  }
  else if (cVar2 == '\x03') {
    uVar8 = 10;
    if (pcVar7[0x19] != '\0') {
      uVar8 = 8;
    }
  }
  else {
    uVar9 = 6;
    if (pcVar7[0x19] == '\0') {
      uVar9 = 2;
    }
    uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
    if (cVar2 == '\x01') {
      uVar8 = uVar9;
    }
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar12,iVar1);
  iVar5 = FUN_01452170(uVar11,iVar1);
  cVar2 = *pcVar7;
  if (iVar5 == 0) {
    if (cVar2 == '\x03') {
      uVar9 = 0xb;
      if (pcVar7[0x19] != '\0') {
        uVar9 = 9;
      }
    }
    else {
      uVar9 = 5;
      if (pcVar7[0x19] == '\0') {
        uVar9 = 1;
      }
      uVar10 = 7;
      if (pcVar7[0x19] == '\0') {
        uVar10 = 3;
      }
      if (cVar2 == '\x01') {
        uVar9 = uVar10;
      }
    }
  }
  else if (cVar2 == '\x03') {
    uVar9 = 10;
    if (pcVar7[0x19] != '\0') {
      uVar9 = 8;
    }
  }
  else {
    uVar10 = 6;
    if (pcVar7[0x19] == '\0') {
      uVar10 = 2;
    }
    uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
    if (cVar2 == '\x01') {
      uVar9 = uVar10;
    }
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  bVar3 = iVar6 < iVar1;
  if (uVar8 != uVar9) {
    bVar3 = uVar9 < uVar8;
  }
  iVar6 = iVar4;
  if (bVar3) {
    iVar6 = *param_3;
    *param_3 = *param_4;
    *param_4 = iVar6;
    iVar1 = *param_3;
    uVar11 = *param_5;
    iVar5 = *param_2;
    lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar12,iVar1);
    iVar6 = FUN_01452170(uVar11,iVar1);
    cVar2 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar2 != '\x03') {
        if (cVar2 == '\x01') {
          uVar8 = 7;
          if (pcVar7[0x19] == '\0') {
            uVar8 = 3;
          }
        }
        else {
          uVar8 = 5;
          if (pcVar7[0x19] == '\0') {
            uVar8 = 1;
          }
        }
      }
      else {
        uVar8 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar8 = 9;
        }
      }
    }
    else if (cVar2 != '\x03') {
      if (cVar2 == '\x01') {
        uVar8 = 6;
        if (pcVar7[0x19] == '\0') {
          uVar8 = 2;
        }
      }
      else {
        uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
      }
    }
    else {
      uVar8 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar8 = 8;
      }
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar12,iVar5);
    iVar6 = FUN_01452170(uVar11,iVar5);
    cVar2 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar2 != '\x03') {
        if (cVar2 == '\x01') {
          uVar9 = 7;
          if (pcVar7[0x19] == '\0') {
            uVar9 = 3;
          }
        }
        else {
          uVar9 = 5;
          if (pcVar7[0x19] == '\0') {
            uVar9 = 1;
          }
        }
      }
      else {
        uVar9 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar9 = 9;
        }
      }
    }
    else if (cVar2 != '\x03') {
      if (cVar2 == '\x01') {
        uVar9 = 6;
        if (pcVar7[0x19] == '\0') {
          uVar9 = 2;
        }
      }
      else {
        uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
      }
    }
    else {
      uVar9 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar9 = 8;
      }
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    iVar6 = iVar4 + 1;
    bVar3 = iVar1 < iVar5;
    if (uVar8 != uVar9) {
      bVar3 = uVar9 < uVar8;
    }
    if (bVar3) {
      iVar6 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar6;
      iVar1 = *param_2;
      uVar11 = *param_5;
      iVar5 = *param_1;
      lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar12,iVar1);
      iVar6 = FUN_01452170(uVar11,iVar1);
      cVar2 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar2 != '\x03') {
          if (cVar2 == '\x01') {
            uVar8 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar8 = 1;
            }
          }
        }
        else {
          uVar8 = 0xb;
          if (pcVar7[0x19] != '\0') {
            uVar8 = 9;
          }
        }
      }
      else if (cVar2 != '\x03') {
        if (cVar2 == '\x01') {
          uVar8 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
        }
      }
      else {
        uVar8 = 10;
        if (pcVar7[0x19] != '\0') {
          uVar8 = 8;
        }
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar12,iVar5);
      iVar6 = FUN_01452170(uVar11,iVar5);
      cVar2 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar2 != '\x03') {
          if (cVar2 == '\x01') {
            uVar9 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar9 = 3;
            }
          }
          else {
            uVar9 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar9 = 1;
            }
          }
        }
        else {
          uVar9 = 0xb;
          if (pcVar7[0x19] != '\0') {
            uVar9 = 9;
          }
        }
      }
      else if (cVar2 != '\x03') {
        if (cVar2 == '\x01') {
          uVar9 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar9 = 2;
          }
        }
        else {
          uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
        }
      }
      else {
        uVar9 = 10;
        if (pcVar7[0x19] != '\0') {
          uVar9 = 8;
        }
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      iVar6 = iVar4 + 2;
      bVar3 = iVar1 < iVar5;
      if (uVar8 != uVar9) {
        bVar3 = uVar9 < uVar8;
      }
      if (bVar3) {
        iVar1 = *param_1;
        iVar6 = iVar4 + 3;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
    }
  }
  return iVar6;
}


