/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144f610; name: FUN_0144f610
 */


undefined8 FUN_0144f610(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  iVar1 = *param_2;
  iVar6 = *param_1;
  uVar10 = *param_4;
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar11,iVar1);
  iVar5 = FUN_01452170(uVar10,iVar1);
  cVar2 = *pcVar7;
  if (iVar5 == 0) {
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
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar11,iVar6);
  iVar5 = FUN_01452170(uVar10,iVar6);
  cVar2 = *pcVar7;
  if (iVar5 == 0) {
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
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  iVar5 = *param_2;
  bVar3 = iVar1 < iVar6;
  if (uVar8 != uVar9) {
    bVar3 = uVar9 < uVar8;
  }
  iVar1 = *param_3;
  uVar10 = *param_4;
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar11,iVar1);
  iVar6 = FUN_01452170(uVar10,iVar1);
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
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar11,iVar5);
  iVar6 = FUN_01452170(uVar10,iVar5);
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
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  bVar4 = iVar1 < iVar5;
  if (uVar8 != uVar9) {
    bVar4 = uVar9 < uVar8;
  }
  if (bVar3) {
    iVar1 = *param_1;
    if (bVar4) {
      *param_1 = *param_3;
      *param_3 = iVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = iVar1;
      uVar10 = *param_4;
      iVar6 = *param_3;
      lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar11,iVar6);
      iVar5 = FUN_01452170(uVar10,iVar6);
      cVar2 = *pcVar7;
      if (iVar5 == 0) {
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
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar11,iVar1);
      iVar5 = FUN_01452170(uVar10,iVar1);
      cVar2 = *pcVar7;
      if (iVar5 == 0) {
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
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      bVar3 = iVar6 < iVar1;
      if (uVar8 != uVar9) {
        bVar3 = uVar9 < uVar8;
      }
      if (bVar3) {
        iVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = iVar1;
        return 2;
      }
    }
  }
  else {
    if (!bVar4) {
      return 0;
    }
    iVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_2;
    iVar6 = *param_1;
    uVar10 = *param_4;
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar11,iVar1);
    iVar5 = FUN_01452170(uVar10,iVar1);
    cVar2 = *pcVar7;
    if (iVar5 == 0) {
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
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar11,iVar6);
    iVar5 = FUN_01452170(uVar10,iVar6);
    cVar2 = *pcVar7;
    if (iVar5 == 0) {
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
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    bVar3 = iVar1 < iVar6;
    if (uVar8 != uVar9) {
      bVar3 = uVar9 < uVar8;
    }
    if (bVar3) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      return 2;
    }
  }
  return 1;
}


