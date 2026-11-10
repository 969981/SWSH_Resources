/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01451110; name: FUN_01451110
 */


bool FUN_01451110(int *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int local_7c;
  long local_68;
  
  puVar5 = PTR_DAT_02710798;
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar1 = *param_1;
    iVar2 = param_2[-1];
    uVar14 = *param_3;
    lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar15,iVar2);
    iVar6 = FUN_01452170(uVar14,iVar2);
    cVar3 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar3 != '\x03') {
        uVar8 = 5;
        if (pcVar7[0x19] == '\0') {
          uVar8 = 1;
        }
        uVar9 = 7;
        if (pcVar7[0x19] == '\0') {
          uVar9 = 3;
        }
        if (cVar3 == '\x01') {
          uVar8 = uVar9;
        }
      }
      else {
        uVar8 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar8 = 9;
        }
      }
    }
    else if (cVar3 != '\x03') {
      uVar9 = 6;
      if (pcVar7[0x19] == '\0') {
        uVar9 = 2;
      }
      uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
      if (cVar3 == '\x01') {
        uVar8 = uVar9;
      }
    }
    else {
      uVar8 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar8 = 8;
      }
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    lVar15 = *(long *)(*(long *)puVar5 + 0x268);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    pcVar7 = (char *)FUN_0152d900(lVar15,iVar1);
    iVar6 = FUN_01452170(uVar14,iVar1);
    cVar3 = *pcVar7;
    if (iVar6 == 0) {
      if (cVar3 != '\x03') {
        uVar9 = 5;
        if (pcVar7[0x19] == '\0') {
          uVar9 = 1;
        }
        uVar12 = 7;
        if (pcVar7[0x19] == '\0') {
          uVar12 = 3;
        }
        if (cVar3 == '\x01') {
          uVar9 = uVar12;
        }
      }
      else {
        uVar9 = 0xb;
        if (pcVar7[0x19] != '\0') {
          uVar9 = 9;
        }
      }
    }
    else if (cVar3 != '\x03') {
      uVar12 = 6;
      if (pcVar7[0x19] == '\0') {
        uVar12 = 2;
      }
      uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
      if (cVar3 == '\x01') {
        uVar9 = uVar12;
      }
    }
    else {
      uVar9 = 10;
      if (pcVar7[0x19] != '\0') {
        uVar9 = 8;
      }
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    bVar4 = iVar2 < iVar1;
    if (uVar8 != uVar9) {
      bVar4 = uVar9 < uVar8;
    }
    if (bVar4) {
      iVar1 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = iVar1;
      return true;
    }
    break;
  case 3:
    FUN_0144f610(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_0144ffc0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_01450710(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_0144f610(param_1,param_1 + 1,param_1 + 2,param_3);
    puVar5 = PTR_DAT_02710798;
    if (param_1 + 3 != param_2) {
      local_68 = 0;
      local_7c = 0;
      piVar11 = param_1 + 3;
      piVar13 = param_1 + 2;
      do {
        piVar10 = piVar11;
        iVar1 = *piVar13;
        iVar2 = *piVar10;
        uVar14 = *param_3;
        lVar15 = *(long *)(*(long *)puVar5 + 0x268);
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar15,iVar2);
        iVar6 = FUN_01452170(uVar14,iVar2);
        cVar3 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar3 != '\x03') {
            uVar8 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar8 = 1;
            }
            uVar9 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar9 = 3;
            }
            if (cVar3 == '\x01') {
              uVar8 = uVar9;
            }
          }
          else {
            uVar8 = 0xb;
            if (pcVar7[0x19] != '\0') {
              uVar8 = 9;
            }
          }
        }
        else if (cVar3 != '\x03') {
          uVar9 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar9 = 2;
          }
          uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
          if (cVar3 == '\x01') {
            uVar8 = uVar9;
          }
        }
        else {
          uVar8 = 10;
          if (pcVar7[0x19] != '\0') {
            uVar8 = 8;
          }
        }
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
        }
        lVar15 = *(long *)(*(long *)puVar5 + 0x268);
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
        }
        pcVar7 = (char *)FUN_0152d900(lVar15,iVar1);
        iVar6 = FUN_01452170(uVar14,iVar1);
        cVar3 = *pcVar7;
        if (iVar6 == 0) {
          if (cVar3 != '\x03') {
            uVar9 = 5;
            if (pcVar7[0x19] == '\0') {
              uVar9 = 1;
            }
            uVar12 = 7;
            if (pcVar7[0x19] == '\0') {
              uVar12 = 3;
            }
            if (cVar3 == '\x01') {
              uVar9 = uVar12;
            }
          }
          else {
            uVar9 = 0xb;
            if (pcVar7[0x19] != '\0') {
              uVar9 = 9;
            }
          }
        }
        else if (cVar3 != '\x03') {
          uVar12 = 6;
          if (pcVar7[0x19] == '\0') {
            uVar12 = 2;
          }
          uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
          if (cVar3 == '\x01') {
            uVar9 = uVar12;
          }
        }
        else {
          uVar9 = 10;
          if (pcVar7[0x19] != '\0') {
            uVar9 = 8;
          }
        }
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
        }
        bVar4 = iVar2 < iVar1;
        if (uVar8 != uVar9) {
          bVar4 = uVar9 < uVar8;
        }
        if (bVar4) {
          iVar1 = *piVar10;
          lVar15 = local_68;
          do {
            lVar16 = lVar15;
            *(undefined4 *)((long)param_1 + lVar16 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar16 + 8);
            if (lVar16 == -8) {
              piVar11 = param_1;
              goto LAB_014516fc;
            }
            iVar2 = *(int *)((long)param_1 + lVar16 + 4);
            uVar14 = *param_3;
            lVar15 = *(long *)(*(long *)puVar5 + 0x268);
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
            }
            pcVar7 = (char *)FUN_0152d900(lVar15,iVar1);
            iVar6 = FUN_01452170(uVar14,iVar1);
            cVar3 = *pcVar7;
            if (iVar6 == 0) {
              if (cVar3 != '\x03') {
                uVar8 = 5;
                if (pcVar7[0x19] == '\0') {
                  uVar8 = 1;
                }
                uVar9 = 7;
                if (pcVar7[0x19] == '\0') {
                  uVar9 = 3;
                }
                if (cVar3 == '\x01') {
                  uVar8 = uVar9;
                }
              }
              else {
                uVar8 = 0xb;
                if (pcVar7[0x19] != '\0') {
                  uVar8 = 9;
                }
              }
            }
            else if (cVar3 != '\x03') {
              uVar9 = 6;
              if (pcVar7[0x19] == '\0') {
                uVar9 = 2;
              }
              uVar8 = (uint)(pcVar7[0x19] != '\0') << 2;
              if (cVar3 == '\x01') {
                uVar8 = uVar9;
              }
            }
            else {
              uVar8 = 10;
              if (pcVar7[0x19] != '\0') {
                uVar8 = 8;
              }
            }
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
            }
            lVar15 = *(long *)(*(long *)puVar5 + 0x268);
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
            }
            pcVar7 = (char *)FUN_0152d900(lVar15,iVar2);
            iVar6 = FUN_01452170(uVar14,iVar2);
            cVar3 = *pcVar7;
            if (iVar6 == 0) {
              if (cVar3 != '\x03') {
                uVar9 = 5;
                if (pcVar7[0x19] == '\0') {
                  uVar9 = 1;
                }
                uVar12 = 7;
                if (pcVar7[0x19] == '\0') {
                  uVar12 = 3;
                }
                if (cVar3 == '\x01') {
                  uVar9 = uVar12;
                }
              }
              else {
                uVar9 = 0xb;
                if (pcVar7[0x19] != '\0') {
                  uVar9 = 9;
                }
              }
            }
            else if (cVar3 != '\x03') {
              uVar12 = 6;
              if (pcVar7[0x19] == '\0') {
                uVar12 = 2;
              }
              uVar9 = (uint)(pcVar7[0x19] != '\0') << 2;
              if (cVar3 == '\x01') {
                uVar9 = uVar12;
              }
            }
            else {
              uVar9 = 10;
              if (pcVar7[0x19] != '\0') {
                uVar9 = 8;
              }
            }
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
            }
            bVar4 = iVar1 < iVar2;
            if (uVar8 != uVar9) {
              bVar4 = uVar9 < uVar8;
            }
            lVar15 = lVar16 + -4;
          } while (bVar4);
          piVar11 = (int *)((long)param_1 + lVar16 + 8);
LAB_014516fc:
          *piVar11 = iVar1;
          local_7c = local_7c + 1;
          if (local_7c == 8) {
            return piVar10 + 1 == param_2;
          }
        }
        local_68 = local_68 + 4;
        piVar11 = piVar10 + 1;
        piVar13 = piVar10;
      } while (piVar10 + 1 != param_2);
    }
  }
  return true;
}


