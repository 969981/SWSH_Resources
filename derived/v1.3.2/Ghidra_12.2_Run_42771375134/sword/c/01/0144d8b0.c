/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d8b0; name: FUN_0144d8b0
 */


void FUN_0144d8b0(int *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  undefined8 uVar21;
  int *local_88;
  int local_74;
  int *local_70;
  
  local_88 = param_2;
LAB_0144d8f8:
  local_70 = local_88 + -1;
LAB_0144d924:
  piVar20 = param_1;
  lVar13 = (long)local_88 - (long)piVar20;
  uVar11 = lVar13 >> 2;
  switch(uVar11) {
  case 0:
  case 1:
    return;
  case 2:
    iVar3 = local_88[-1];
    iVar2 = *piVar20;
    uVar21 = *param_3;
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
    iVar6 = FUN_01452170(uVar21,iVar3);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 == '\x03') {
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
        if (cVar4 == '\x01') {
          uVar9 = uVar10;
        }
      }
    }
    else if (cVar4 == '\x03') {
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
      if (cVar4 == '\x01') {
        uVar9 = uVar10;
      }
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
    iVar6 = FUN_01452170(uVar21,iVar2);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 == '\x03') {
        uVar10 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar10 = 9;
        }
      }
      else {
        uVar10 = 5;
        if (pcVar7[0x19] == '\0') {
          uVar10 = 1;
        }
        uVar14 = 7;
        if (pcVar7[0x19] == '\0') {
          uVar14 = 3;
        }
        if (cVar4 == '\x01') {
          uVar10 = uVar14;
        }
      }
    }
    else if (cVar4 == '\x03') {
      uVar10 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar10 = 8;
      }
    }
    else {
      uVar14 = 6;
      if (pcVar7[0x19] == '\0') {
        uVar14 = 2;
      }
      uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
      if (cVar4 == '\x01') {
        uVar10 = uVar14;
      }
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    bVar5 = iVar3 < iVar2;
    if (uVar9 != uVar10) {
      bVar5 = uVar10 < uVar9;
    }
    if (bVar5) {
      iVar2 = *piVar20;
      *piVar20 = local_88[-1];
      local_88[-1] = iVar2;
      return;
    }
    return;
  case 3:
    FUN_0144f610(piVar20,piVar20 + 1,local_70,param_3);
    return;
  case 4:
    FUN_0144ffc0(piVar20,piVar20 + 1,piVar20 + 2,local_70,param_3);
    return;
  case 5:
    FUN_01450710(piVar20,piVar20 + 1,piVar20 + 2,piVar20 + 3,local_70,param_3);
    return;
  }
  if (0x7b < lVar13) {
    uVar8 = uVar11;
    if ((long)uVar11 < 0) {
      uVar8 = uVar11 + 1;
    }
    piVar12 = (int *)((long)piVar20 + (uVar8 & 0x7ffffffffffffffe) * 2);
    if (lVar13 < 0xf9d) {
      local_74 = FUN_0144f610(piVar20,piVar12,local_70,param_3);
    }
    else {
      uVar8 = uVar11 + 3;
      if (-1 < (long)uVar11) {
        uVar8 = uVar11;
      }
      local_74 = FUN_01450710(piVar20,(long)piVar20 + (uVar8 & 0xfffffffffffffffc),piVar12,
                              (long)piVar12 + (uVar8 & 0xfffffffffffffffc),local_70,param_3);
    }
    iVar2 = *piVar20;
    iVar3 = *piVar12;
    uVar21 = *param_3;
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
    iVar6 = FUN_01452170(uVar21,iVar2);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
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
    else if (cVar4 != '\x03') {
      if (cVar4 == '\x01') {
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
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
    iVar6 = FUN_01452170(uVar21,iVar3);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
          uVar10 = 7;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 3;
          }
        }
        else {
          uVar10 = 5;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 1;
          }
        }
      }
      else {
        uVar10 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar10 = 9;
        }
      }
    }
    else if (cVar4 != '\x03') {
      if (cVar4 == '\x01') {
        uVar10 = 6;
        if (pcVar7[0x19] == '\0') {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
      }
    }
    else {
      uVar10 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar10 = 8;
      }
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    bVar5 = iVar2 < iVar3;
    if (uVar9 != uVar10) {
      bVar5 = uVar10 < uVar9;
    }
    if (!bVar5) {
      piVar16 = local_88 + -2;
LAB_0144dc24:
      piVar19 = piVar16;
      if (piVar20 != piVar19) goto code_r0x0144dc2c;
      piVar12 = piVar20 + 1;
      iVar3 = *piVar20;
      iVar2 = *local_70;
      uVar21 = *param_3;
      lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
      iVar6 = FUN_01452170(uVar21,iVar3);
      cVar4 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar4 != '\x03') {
          if (cVar4 == '\x01') {
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
      else if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
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
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
      iVar6 = FUN_01452170(uVar21,iVar2);
      cVar4 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar4 != '\x03') {
          if (cVar4 == '\x01') {
            uVar10 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar10 = 3;
            }
          }
          else {
            uVar10 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar10 = 1;
            }
          }
        }
        else {
          uVar10 = 0xb;
          if (pcVar7[0x19] != '\0') {
            uVar10 = 9;
          }
        }
      }
      else if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
          uVar10 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
        }
      }
      else {
        uVar10 = 10;
        if (pcVar7[0x19] != '\0') {
          uVar10 = 8;
        }
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      bVar5 = iVar3 < iVar2;
      if (uVar9 != uVar10) {
        bVar5 = uVar10 < uVar9;
      }
      if (!bVar5) {
        if (piVar12 == local_70) {
          return;
        }
        piVar12 = piVar20 + 2;
        while( true ) {
          iVar2 = *piVar20;
          iVar3 = piVar12[-1];
          uVar21 = *param_3;
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
          iVar6 = FUN_01452170(uVar21,iVar2);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
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
              if (cVar4 == '\x01') {
                uVar9 = uVar10;
              }
            }
          }
          else if (cVar4 == '\x03') {
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
            if (cVar4 == '\x01') {
              uVar9 = uVar10;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
          iVar6 = FUN_01452170(uVar21,iVar3);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
              uVar10 = 0xb;
              if (pcVar7[0x19] != '\0') {
                uVar10 = 9;
              }
            }
            else {
              uVar10 = 5;
              if (pcVar7[0x19] == '\0') {
                uVar10 = 1;
              }
              uVar14 = 7;
              if (pcVar7[0x19] == '\0') {
                uVar14 = 3;
              }
              if (cVar4 == '\x01') {
                uVar10 = uVar14;
              }
            }
          }
          else if (cVar4 == '\x03') {
            uVar10 = 10;
            if (pcVar7[0x19] != '\0') {
              uVar10 = 8;
            }
          }
          else {
            uVar14 = 6;
            if (pcVar7[0x19] == '\0') {
              uVar14 = 2;
            }
            uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
            if (cVar4 == '\x01') {
              uVar10 = uVar14;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          bVar5 = iVar2 < iVar3;
          if (uVar9 != uVar10) {
            bVar5 = uVar10 < uVar9;
          }
          if (bVar5) break;
          piVar12 = piVar12 + 1;
          if (local_88 == piVar12) {
            return;
          }
        }
        iVar2 = piVar12[-1];
        piVar12[-1] = *local_70;
        *local_70 = iVar2;
      }
      if (piVar12 == local_70) {
        return;
      }
      while( true ) {
        param_1 = piVar12 + -1;
        do {
          piVar12 = param_1;
          iVar2 = *piVar20;
          iVar3 = piVar12[1];
          uVar21 = *param_3;
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
          iVar6 = FUN_01452170(uVar21,iVar2);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
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
              if (cVar4 == '\x01') {
                uVar9 = uVar10;
              }
            }
          }
          else if (cVar4 == '\x03') {
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
            if (cVar4 == '\x01') {
              uVar9 = uVar10;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
          iVar6 = FUN_01452170(uVar21,iVar3);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
              uVar10 = 0xb;
              if (pcVar7[0x19] != '\0') {
                uVar10 = 9;
              }
            }
            else {
              uVar10 = 5;
              if (pcVar7[0x19] == '\0') {
                uVar10 = 1;
              }
              uVar14 = 7;
              if (pcVar7[0x19] == '\0') {
                uVar14 = 3;
              }
              if (cVar4 == '\x01') {
                uVar10 = uVar14;
              }
            }
          }
          else if (cVar4 == '\x03') {
            uVar10 = 10;
            if (pcVar7[0x19] != '\0') {
              uVar10 = 8;
            }
          }
          else {
            uVar14 = 6;
            if (pcVar7[0x19] == '\0') {
              uVar14 = 2;
            }
            uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
            if (cVar4 == '\x01') {
              uVar10 = uVar14;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          param_1 = piVar12 + 1;
          bVar5 = iVar2 < iVar3;
          if (uVar9 != uVar10) {
            bVar5 = uVar10 < uVar9;
          }
        } while (!bVar5);
        piVar12 = piVar12 + 2;
        do {
          iVar2 = *piVar20;
          local_70 = local_70 + -1;
          iVar3 = *local_70;
          uVar21 = *param_3;
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
          iVar6 = FUN_01452170(uVar21,iVar2);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
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
              if (cVar4 == '\x01') {
                uVar9 = uVar10;
              }
            }
          }
          else if (cVar4 == '\x03') {
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
            if (cVar4 == '\x01') {
              uVar9 = uVar10;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
          iVar6 = FUN_01452170(uVar21,iVar3);
          cVar4 = *pcVar7;
          if (iVar6 == 0) {
            if (cVar4 == '\x03') {
              uVar10 = 0xb;
              if (pcVar7[0x19] != '\0') {
                uVar10 = 9;
              }
            }
            else {
              uVar10 = 5;
              if (pcVar7[0x19] == '\0') {
                uVar10 = 1;
              }
              uVar14 = 7;
              if (pcVar7[0x19] == '\0') {
                uVar14 = 3;
              }
              if (cVar4 == '\x01') {
                uVar10 = uVar14;
              }
            }
          }
          else if (cVar4 == '\x03') {
            uVar10 = 10;
            if (pcVar7[0x19] != '\0') {
              uVar10 = 8;
            }
          }
          else {
            uVar14 = 6;
            if (pcVar7[0x19] == '\0') {
              uVar14 = 2;
            }
            uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
            if (cVar4 == '\x01') {
              uVar10 = uVar14;
            }
          }
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          bVar5 = iVar2 < iVar3;
          if (uVar9 != uVar10) {
            bVar5 = uVar10 < uVar9;
          }
        } while (bVar5);
        if (local_70 <= param_1) break;
        iVar2 = *param_1;
        *param_1 = *local_70;
        *local_70 = iVar2;
      }
      uVar9 = 4;
      goto LAB_0144edb0;
    }
    piVar16 = piVar20 + 1;
    piVar19 = local_70;
    if (local_70 <= piVar16) goto LAB_0144dad0;
    goto LAB_0144de90;
  }
  FUN_0144f610(piVar20,piVar20 + 1,piVar20 + 2,param_3);
  if (piVar20 + 3 == local_88) {
    return;
  }
  lVar13 = 0;
  piVar12 = piVar20 + 3;
  piVar16 = piVar20 + 2;
LAB_0144ef48:
  piVar19 = piVar12;
  iVar2 = *piVar16;
  iVar3 = *piVar19;
  uVar21 = *param_3;
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar15,iVar3);
  iVar6 = FUN_01452170(uVar21,iVar3);
  cVar4 = *pcVar7;
  if (iVar6 == 0) {
    if (cVar4 == '\x03') {
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
      if (cVar4 == '\x01') {
        uVar9 = uVar10;
      }
    }
  }
  else if (cVar4 == '\x03') {
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
    if (cVar4 == '\x01') {
      uVar9 = uVar10;
    }
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar15,iVar2);
  iVar6 = FUN_01452170(uVar21,iVar2);
  cVar4 = *pcVar7;
  if (iVar6 == 0) {
    if (cVar4 == '\x03') {
      uVar10 = 0xb;
      if (pcVar7[0x19] != '\0') {
        uVar10 = 9;
      }
    }
    else {
      uVar10 = 5;
      if (pcVar7[0x19] == '\0') {
        uVar10 = 1;
      }
      uVar14 = 7;
      if (pcVar7[0x19] == '\0') {
        uVar14 = 3;
      }
      if (cVar4 == '\x01') {
        uVar10 = uVar14;
      }
    }
  }
  else if (cVar4 == '\x03') {
    uVar10 = 10;
    if (pcVar7[0x19] != '\0') {
      uVar10 = 8;
    }
  }
  else {
    uVar14 = 6;
    if (pcVar7[0x19] == '\0') {
      uVar14 = 2;
    }
    uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
    if (cVar4 == '\x01') {
      uVar10 = uVar14;
    }
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  bVar5 = iVar3 < iVar2;
  if (uVar9 != uVar10) {
    bVar5 = uVar10 < uVar9;
  }
  if (bVar5) {
    iVar2 = *piVar19;
    lVar15 = lVar13;
    do {
      lVar18 = lVar15;
      *(undefined4 *)((long)piVar20 + lVar18 + 0xc) = *(undefined4 *)((long)piVar20 + lVar18 + 8);
      if (lVar18 == -8) {
        piVar12 = piVar20;
        goto LAB_0144f38c;
      }
      iVar3 = *(int *)((long)piVar20 + lVar18 + 4);
      uVar21 = *param_3;
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar15,iVar2);
      iVar6 = FUN_01452170(uVar21,iVar2);
      cVar4 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar4 == '\x03') {
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
          if (cVar4 == '\x01') {
            uVar9 = uVar10;
          }
        }
      }
      else if (cVar4 == '\x03') {
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
        if (cVar4 == '\x01') {
          uVar9 = uVar10;
        }
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      pcVar7 = (char *)FUN_0152d900(lVar15,iVar3);
      iVar6 = FUN_01452170(uVar21,iVar3);
      cVar4 = *pcVar7;
      if (iVar6 == 0) {
        if (cVar4 == '\x03') {
          uVar10 = 0xb;
          if (pcVar7[0x19] != '\0') {
            uVar10 = 9;
          }
        }
        else {
          uVar10 = 5;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 1;
          }
          uVar14 = 7;
          if (pcVar7[0x19] == '\0') {
            uVar14 = 3;
          }
          if (cVar4 == '\x01') {
            uVar10 = uVar14;
          }
        }
      }
      else if (cVar4 == '\x03') {
        uVar10 = 10;
        if (pcVar7[0x19] != '\0') {
          uVar10 = 8;
        }
      }
      else {
        uVar14 = 6;
        if (pcVar7[0x19] == '\0') {
          uVar14 = 2;
        }
        uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
        if (cVar4 == '\x01') {
          uVar10 = uVar14;
        }
      }
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      bVar5 = iVar2 < iVar3;
      if (uVar9 != uVar10) {
        bVar5 = uVar10 < uVar9;
      }
      lVar15 = lVar18 + -4;
    } while (bVar5);
    piVar12 = (int *)((long)piVar20 + lVar18 + 8);
LAB_0144f38c:
    *piVar12 = iVar2;
  }
  lVar13 = lVar13 + 4;
  piVar12 = piVar19 + 1;
  piVar16 = piVar19;
  if (piVar19 + 1 == local_88) {
    return;
  }
  goto LAB_0144ef48;
code_r0x0144dc2c:
  iVar2 = *piVar19;
  iVar3 = *piVar12;
  uVar21 = *param_3;
  lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
  iVar6 = FUN_01452170(uVar21,iVar2);
  cVar4 = *pcVar7;
  if (iVar6 == 0) {
    if (cVar4 == '\x03') {
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
      if (cVar4 == '\x01') {
        uVar9 = uVar10;
      }
    }
  }
  else if (cVar4 == '\x03') {
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
    if (cVar4 == '\x01') {
      uVar9 = uVar10;
    }
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
  iVar6 = FUN_01452170(uVar21,iVar3);
  cVar4 = *pcVar7;
  if (iVar6 == 0) {
    if (cVar4 == '\x03') {
      uVar10 = 0xb;
      if (pcVar7[0x19] != '\0') {
        uVar10 = 9;
      }
    }
    else {
      uVar10 = 5;
      if (pcVar7[0x19] == '\0') {
        uVar10 = 1;
      }
      uVar14 = 7;
      if (pcVar7[0x19] == '\0') {
        uVar14 = 3;
      }
      if (cVar4 == '\x01') {
        uVar10 = uVar14;
      }
    }
  }
  else if (cVar4 == '\x03') {
    uVar10 = 10;
    if (pcVar7[0x19] != '\0') {
      uVar10 = 8;
    }
  }
  else {
    uVar14 = 6;
    if (pcVar7[0x19] == '\0') {
      uVar14 = 2;
    }
    uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
    if (cVar4 == '\x01') {
      uVar10 = uVar14;
    }
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  bVar5 = iVar2 < iVar3;
  if (uVar9 != uVar10) {
    bVar5 = uVar10 < uVar9;
  }
  piVar16 = piVar19 + -1;
  if (bVar5) goto code_r0x0144de3c;
  goto LAB_0144dc24;
code_r0x0144de3c:
  iVar2 = *piVar20;
  *piVar20 = *piVar19;
  *piVar19 = iVar2;
  local_74 = local_74 + 1;
  piVar16 = piVar20 + 1;
  if (piVar16 < piVar19) {
LAB_0144de90:
    while( true ) {
      piVar17 = piVar16 + -1;
      do {
        piVar16 = piVar17;
        iVar2 = piVar16[1];
        iVar3 = *piVar12;
        uVar21 = *param_3;
        lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
        iVar6 = FUN_01452170(uVar21,iVar2);
        cVar4 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar4 == '\x03') {
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
            if (cVar4 == '\x01') {
              uVar9 = uVar10;
            }
          }
        }
        else if (cVar4 == '\x03') {
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
          if (cVar4 == '\x01') {
            uVar9 = uVar10;
          }
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
        iVar6 = FUN_01452170(uVar21,iVar3);
        cVar4 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar4 == '\x03') {
            uVar10 = 0xb;
            if (pcVar7[0x19] != '\0') {
              uVar10 = 9;
            }
          }
          else {
            uVar10 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar10 = 1;
            }
            uVar14 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar14 = 3;
            }
            if (cVar4 == '\x01') {
              uVar10 = uVar14;
            }
          }
        }
        else if (cVar4 == '\x03') {
          uVar10 = 10;
          if (pcVar7[0x19] != '\0') {
            uVar10 = 8;
          }
        }
        else {
          uVar14 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar14 = 2;
          }
          uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
          if (cVar4 == '\x01') {
            uVar10 = uVar14;
          }
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        bVar5 = iVar2 < iVar3;
        if (uVar9 != uVar10) {
          bVar5 = uVar10 < uVar9;
        }
        piVar17 = piVar16 + 1;
      } while (bVar5);
      piVar16 = piVar16 + 2;
      do {
        piVar19 = piVar19 + -1;
        iVar3 = *piVar19;
        iVar2 = *piVar12;
        uVar21 = *param_3;
        lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
        iVar6 = FUN_01452170(uVar21,iVar3);
        cVar4 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar4 == '\x03') {
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
            if (cVar4 == '\x01') {
              uVar9 = uVar10;
            }
          }
        }
        else if (cVar4 == '\x03') {
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
          if (cVar4 == '\x01') {
            uVar9 = uVar10;
          }
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
        iVar6 = FUN_01452170(uVar21,iVar2);
        cVar4 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar4 == '\x03') {
            uVar10 = 0xb;
            if (pcVar7[0x19] != '\0') {
              uVar10 = 9;
            }
          }
          else {
            uVar10 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar10 = 1;
            }
            uVar14 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar14 = 3;
            }
            if (cVar4 == '\x01') {
              uVar10 = uVar14;
            }
          }
        }
        else if (cVar4 == '\x03') {
          uVar10 = 10;
          if (pcVar7[0x19] != '\0') {
            uVar10 = 8;
          }
        }
        else {
          uVar14 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar14 = 2;
          }
          uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
          if (cVar4 == '\x01') {
            uVar10 = uVar14;
          }
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        bVar5 = iVar3 < iVar2;
        if (uVar9 != uVar10) {
          bVar5 = uVar10 < uVar9;
        }
      } while (!bVar5);
      if (piVar19 < piVar17) break;
      iVar2 = *piVar17;
      *piVar17 = *piVar19;
      *piVar19 = iVar2;
      piVar1 = piVar19;
      if (piVar12 != piVar17) {
        piVar1 = piVar12;
      }
      local_74 = local_74 + 1;
      piVar12 = piVar1;
    }
    if (piVar17 == piVar12) goto joined_r0x0144e2c4;
LAB_0144dad8:
    iVar2 = *piVar12;
    iVar3 = *piVar17;
    uVar21 = *param_3;
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar2);
    iVar6 = FUN_01452170(uVar21,iVar2);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
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
    else if (cVar4 != '\x03') {
      if (cVar4 == '\x01') {
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
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar13,iVar3);
    iVar6 = FUN_01452170(uVar21,iVar3);
    cVar4 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar4 != '\x03') {
        if (cVar4 == '\x01') {
          uVar10 = 7;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 3;
          }
        }
        else {
          uVar10 = 5;
          if (pcVar7[0x19] == '\0') {
            uVar10 = 1;
          }
        }
      }
      else {
        uVar10 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar10 = 9;
        }
      }
    }
    else if (cVar4 != '\x03') {
      if (cVar4 == '\x01') {
        uVar10 = 6;
        if (pcVar7[0x19] == '\0') {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = (uint)(pcVar7[0x19] != '\0') << 2;
      }
    }
    else {
      uVar10 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar10 = 8;
      }
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    bVar5 = iVar2 < iVar3;
    if (uVar9 != uVar10) {
      bVar5 = uVar10 < uVar9;
    }
    if (!bVar5) goto joined_r0x0144e2c4;
    iVar2 = *piVar17;
    *piVar17 = *piVar12;
    *piVar12 = iVar2;
    if (local_74 != -1) goto LAB_0144e394;
  }
  else {
LAB_0144dad0:
    piVar17 = piVar20 + 1;
    if (piVar17 != piVar12) goto LAB_0144dad8;
joined_r0x0144e2c4:
    if (local_74 != 0) goto LAB_0144e394;
  }
  uVar11 = FUN_01451110(piVar20,piVar17,param_3);
  uVar8 = FUN_01451110(piVar17 + 1,local_88,param_3);
  if ((uVar8 & 1) != 0) goto LAB_0144ee60;
  param_1 = piVar17 + 1;
  if ((uVar11 & 1) != 0) goto LAB_0144d924;
LAB_0144e394:
  if ((long)local_88 - (long)piVar17 <= (long)piVar17 - (long)piVar20) {
    FUN_0144d8b0(piVar17 + 1,local_88,param_3);
    param_1 = piVar20;
    local_88 = piVar17;
    goto LAB_0144d8f8;
  }
  FUN_0144d8b0(piVar20,piVar17,param_3);
  param_1 = piVar17 + 1;
  goto LAB_0144d924;
LAB_0144ee60:
  bVar5 = (uVar11 & 1) == 0;
  if (bVar5) {
    local_88 = piVar17;
  }
  uVar9 = 1;
  if (bVar5) {
    uVar9 = 2;
  }
  param_1 = piVar20;
  if (4 < uVar9) {
    return;
  }
LAB_0144edb0:
  if ((1 << (ulong)uVar9 & 0x15U) == 0) {
    return;
  }
  goto LAB_0144d8f8;
}


