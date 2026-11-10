/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0f10; name: FUN_005c0f10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005c0f10(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = *(long *)(param_3 + 8);
  *param_1 = param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x20);
    if ((lVar5 == 0) && (lVar5 = *(long *)(lVar3 + 0x28), lVar5 == 0)) {
      lVar5 = 0;
      if (*(long *)(lVar3 + 0x18) != 0) {
        lVar5 = *(long *)(lVar3 + 0x18);
        lVar6 = lVar3;
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(lVar4 + 0x28);
          if (lVar5 != 0 && lVar5 != lVar6) goto LAB_005c0f3c;
          param_1[1] = lVar4;
          lVar5 = *(long *)(lVar4 + 0x18);
          lVar6 = lVar4;
        } while (*(long *)(lVar4 + 0x18) != 0);
        lVar5 = 0;
      }
    }
LAB_005c0f3c:
    param_1[1] = lVar5;
  }
  lVar5 = *(long *)(lVar3 + 0x20);
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar4 = lVar3;
  if (lVar6 == 0) {
    if (lVar5 != 0) {
      if (*(long *)(param_2 + 0x18) == lVar3) goto LAB_005c0fc4;
LAB_005c0f98:
      lVar6 = *(long *)(lVar3 + 0x18);
      if (*(long *)(lVar6 + 0x28) == lVar3) {
        *(long *)(lVar6 + 0x28) = lVar5;
      }
      else {
        *(long *)(lVar6 + 0x20) = lVar5;
      }
      goto LAB_005c0ff8;
    }
    bVar2 = false;
    if (*(char *)(lVar3 + 0x30) == '\0') goto LAB_005c10d8;
joined_r0x005c1590:
    if (lVar5 == 0) goto LAB_005c1338;
LAB_005c1014:
    if (bVar2) goto LAB_005c1018;
  }
  else {
    if (lVar5 == 0) {
      lVar5 = lVar6;
      if (*(long *)(param_2 + 0x18) != lVar3) goto LAB_005c0f98;
LAB_005c0fc4:
      *(long *)(param_2 + 0x18) = lVar5;
LAB_005c0ff8:
      bVar2 = false;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      cVar1 = *(char *)(lVar3 + 0x30);
    }
    else {
      do {
        lVar4 = lVar6;
        lVar6 = *(long *)(lVar4 + 0x20);
      } while (*(long *)(lVar4 + 0x20) != 0);
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 == 0) {
        bVar2 = true;
        cVar1 = *(char *)(lVar4 + 0x30);
      }
      else {
        if (*(long *)(param_2 + 0x18) == lVar4) {
          *(long *)(param_2 + 0x18) = lVar5;
        }
        else {
          lVar6 = *(long *)(lVar4 + 0x18);
          if (*(long *)(lVar6 + 0x28) == lVar4) {
            *(long *)(lVar6 + 0x28) = lVar5;
          }
          else {
            *(long *)(lVar6 + 0x20) = lVar5;
          }
        }
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
        bVar2 = true;
        cVar1 = *(char *)(lVar4 + 0x30);
      }
    }
    if (cVar1 != '\0') goto joined_r0x005c1590;
LAB_005c10d8:
    if (lVar5 == 0) {
      *(undefined1 *)(lVar4 + 0x30) = 0;
      lVar6 = lVar4;
LAB_005c110c:
      do {
        if (lVar6 == *(long *)(param_2 + 0x18)) goto LAB_005c1330;
        lVar8 = *(long *)(lVar6 + 0x18);
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar8 + 0x20);
          if (lVar10 == lVar6) {
            lVar10 = *(long *)(lVar8 + 0x28);
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x30) != '\0')) {
            *(undefined1 *)(lVar10 + 0x30) = 0;
            lVar10 = *(long *)(lVar8 + 0x20);
            *(undefined1 *)(lVar8 + 0x30) = 1;
            if (lVar6 == lVar10) {
              lVar10 = *(long *)(lVar8 + 0x28);
              if (lVar10 != 0) {
                *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
                if (*(long *)(lVar10 + 0x20) != 0) {
                  *(long *)(*(long *)(lVar10 + 0x20) + 0x18) = lVar8;
                }
              }
              if (*(long *)(param_2 + 0x18) == lVar8) {
                *(long *)(param_2 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  *(long *)(lVar10 + 0x20) = lVar8;
                }
              }
              else {
                lVar11 = *(long *)(lVar8 + 0x18);
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x18) = lVar11;
                }
                if (lVar11 != 0) {
                  lVar9 = 0x20;
                  if (*(long *)(lVar11 + 0x20) != lVar8) {
                    lVar9 = 0x28;
                  }
                  *(long *)(lVar11 + lVar9) = lVar10;
                }
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x20) = lVar8;
                }
              }
            }
            else {
              if (lVar10 != 0) {
                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar10 + 0x28);
                if (*(long *)(lVar10 + 0x28) != 0) {
                  *(long *)(*(long *)(lVar10 + 0x28) + 0x18) = lVar8;
                }
              }
              if (*(long *)(param_2 + 0x18) == lVar8) {
                *(long *)(param_2 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  goto LAB_005c123c;
                }
              }
              else {
                lVar11 = *(long *)(lVar8 + 0x18);
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x18) = lVar11;
                }
                if (lVar11 != 0) {
                  lVar9 = 0x20;
                  if (*(long *)(lVar11 + 0x20) != lVar8) {
                    lVar9 = 0x28;
                  }
                  *(long *)(lVar11 + lVar9) = lVar10;
                }
                if (lVar10 != 0) {
LAB_005c123c:
                  *(long *)(lVar10 + 0x28) = lVar8;
                }
              }
            }
            *(long *)(lVar8 + 0x18) = lVar10;
          }
          lVar10 = *(long *)(lVar6 + 0x18);
          if (lVar10 == 0) {
            lVar11 = 0;
            cVar1 = DAT_00000030;
          }
          else {
            lVar11 = *(long *)(lVar10 + 0x20);
            if (lVar11 == lVar6) {
              lVar11 = *(long *)(lVar10 + 0x28);
              cVar1 = *(char *)(lVar11 + 0x30);
              goto joined_r0x005c11a4;
            }
            cVar1 = *(char *)(lVar11 + 0x30);
          }
          if (cVar1 == '\0') goto LAB_005c11a8;
LAB_005c1458:
          lVar8 = *(long *)(lVar6 + 0x18);
          if (lVar8 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(lVar8 + 0x20);
            if (lVar10 == lVar6) {
              lVar10 = *(long *)(lVar8 + 0x28);
            }
          }
          *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)(lVar8 + 0x30);
          lVar11 = *(long *)(lVar8 + 0x20);
          *(undefined1 *)(lVar8 + 0x30) = 0;
          if (lVar6 == lVar11) {
            if (*(long *)(lVar10 + 0x28) != 0) {
              *(undefined1 *)(*(long *)(lVar10 + 0x28) + 0x30) = 0;
            }
            lVar6 = *(long *)(lVar8 + 0x28);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
              if (*(long *)(lVar6 + 0x20) != 0) {
                *(long *)(*(long *)(lVar6 + 0x20) + 0x18) = lVar8;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar8) {
              *(long *)(param_2 + 0x18) = lVar6;
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x18) = 0;
                goto LAB_005c1584;
              }
            }
            else {
              lVar10 = *(long *)(lVar8 + 0x18);
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x18) = lVar10;
              }
              if (lVar10 != 0) {
                lVar11 = 0x20;
                if (*(long *)(lVar10 + 0x20) != lVar8) {
                  lVar11 = 0x28;
                }
                *(long *)(lVar10 + lVar11) = lVar6;
              }
              if (lVar6 != 0) {
LAB_005c1584:
                *(long *)(lVar6 + 0x20) = lVar8;
              }
            }
            *(long *)(lVar8 + 0x18) = lVar6;
            *(undefined1 *)(lVar4 + 0x30) = 0;
            goto joined_r0x005c1590;
          }
          if (*(long *)(lVar10 + 0x20) != 0) {
            *(undefined1 *)(*(long *)(lVar10 + 0x20) + 0x30) = 0;
            lVar11 = *(long *)(lVar8 + 0x20);
          }
          if (lVar11 != 0) {
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar11 + 0x28);
            if (*(long *)(lVar11 + 0x28) != 0) {
              *(long *)(*(long *)(lVar11 + 0x28) + 0x18) = lVar8;
            }
          }
          if (*(long *)(param_2 + 0x18) == lVar8) {
            *(long *)(param_2 + 0x18) = lVar11;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              goto LAB_005c1564;
            }
          }
          else {
            lVar6 = *(long *)(lVar8 + 0x18);
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x18) = lVar6;
            }
            if (lVar6 != 0) {
              lVar10 = 0x20;
              if (*(long *)(lVar6 + 0x20) != lVar8) {
                lVar10 = 0x28;
              }
              *(long *)(lVar6 + lVar10) = lVar11;
            }
            if (lVar11 != 0) {
LAB_005c1564:
              *(long *)(lVar11 + 0x28) = lVar8;
            }
          }
          *(long *)(lVar8 + 0x18) = lVar11;
          *(undefined1 *)(lVar4 + 0x30) = 0;
          goto joined_r0x005c10f0;
        }
        lVar11 = 0;
        cVar1 = DAT_00000030;
joined_r0x005c11a4:
        if (cVar1 != '\0') goto LAB_005c1458;
LAB_005c11a8:
        lVar10 = *(long *)(lVar11 + 0x28);
        if (((lVar10 != 0) && (*(char *)(lVar10 + 0x30) != '\0')) ||
           ((*(long *)(lVar11 + 0x20) != 0 && (*(char *)(*(long *)(lVar11 + 0x20) + 0x30) != '\0')))
           ) {
          if (((lVar6 == *(long *)(lVar8 + 0x20)) &&
              (((lVar10 == 0 || (*(char *)(lVar10 + 0x30) == '\0')) &&
               (lVar9 = *(long *)(lVar11 + 0x20), lVar9 != 0)))) &&
             (*(char *)(lVar9 + 0x30) != '\0')) {
            *(undefined1 *)(lVar11 + 0x30) = 1;
            *(undefined1 *)(lVar9 + 0x30) = 0;
            lVar8 = *(long *)(lVar11 + 0x20);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar8 + 0x28);
              if (*(long *)(lVar8 + 0x28) != 0) {
                *(long *)(*(long *)(lVar8 + 0x28) + 0x18) = lVar11;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar11) {
              *(long *)(param_2 + 0x18) = lVar8;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                goto LAB_005c1450;
              }
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x18);
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = lVar10;
              }
              if (lVar10 != 0) {
                lVar9 = 0x20;
                if (*(long *)(lVar10 + 0x20) != lVar11) {
                  lVar9 = 0x28;
                }
                *(long *)(lVar10 + lVar9) = lVar8;
              }
              if (lVar8 != 0) {
LAB_005c1450:
                *(long *)(lVar8 + 0x28) = lVar11;
              }
            }
          }
          else {
            if ((((lVar6 != *(long *)(lVar8 + 0x28)) ||
                 ((*(long *)(lVar11 + 0x20) != 0 &&
                  (*(char *)(*(long *)(lVar11 + 0x20) + 0x30) != '\0')))) || (lVar10 == 0)) ||
               (*(char *)(lVar10 + 0x30) == '\0')) goto LAB_005c1458;
            *(undefined1 *)(lVar11 + 0x30) = 1;
            *(undefined1 *)(lVar10 + 0x30) = 0;
            lVar8 = *(long *)(lVar11 + 0x28);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar8 + 0x20);
              if (*(long *)(lVar8 + 0x20) != 0) {
                *(long *)(*(long *)(lVar8 + 0x20) + 0x18) = lVar11;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar11) {
              *(long *)(param_2 + 0x18) = lVar8;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                goto LAB_005c143c;
              }
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x18);
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = lVar10;
              }
              if (lVar10 != 0) {
                lVar9 = 0x20;
                if (*(long *)(lVar10 + 0x20) != lVar11) {
                  lVar9 = 0x28;
                }
                *(long *)(lVar10 + lVar9) = lVar8;
              }
              if (lVar8 != 0) {
LAB_005c143c:
                *(long *)(lVar8 + 0x20) = lVar11;
              }
            }
          }
          *(long *)(lVar11 + 0x18) = lVar8;
          goto LAB_005c1458;
        }
        cVar1 = *(char *)(lVar8 + 0x30);
        *(undefined1 *)(lVar11 + 0x30) = 1;
        lVar6 = lVar8;
      } while (cVar1 == '\0');
      *(undefined1 *)(lVar8 + 0x30) = 0;
LAB_005c1330:
      *(undefined1 *)(lVar4 + 0x30) = 0;
      goto joined_r0x005c1590;
    }
    lVar6 = lVar5;
    if (*(char *)(lVar5 + 0x30) == '\0') goto LAB_005c110c;
    *(undefined1 *)(lVar5 + 0x30) = 0;
    *(undefined1 *)(lVar4 + 0x30) = 0;
joined_r0x005c10f0:
    if (lVar5 != 0) goto LAB_005c1014;
LAB_005c1338:
    lVar5 = *(long *)(lVar4 + 0x18);
    if (lVar5 == 0) {
LAB_005c135c:
      plVar7 = (long *)(param_2 + 0x18);
LAB_005c1360:
      *plVar7 = 0;
    }
    else {
      plVar7 = (long *)(lVar5 + 0x28);
      if (lVar4 == *plVar7) goto LAB_005c1360;
      if (lVar4 != *(long *)(lVar5 + 0x20)) goto LAB_005c135c;
      *(long *)(lVar5 + 0x20) = 0;
    }
    if (bVar2) {
LAB_005c1018:
      lVar5 = *(long *)(lVar3 + 0x18);
      if (lVar5 == 0) {
        plVar7 = (long *)(param_2 + 0x18);
      }
      else {
        plVar7 = (long *)(lVar5 + 0x28);
        if (lVar3 != *(long *)(lVar5 + 0x28)) {
          plVar7 = (long *)(lVar5 + 0x20);
        }
      }
      *plVar7 = lVar4;
      *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      lVar6 = *(long *)(lVar3 + 0x20);
      *(long *)(lVar4 + 0x20) = lVar6;
      lVar5 = *(long *)(lVar3 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar5;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x18) = lVar4;
        lVar5 = *(long *)(lVar4 + 0x28);
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x18) = lVar4;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        goto joined_r0x005c1078;
      }
    }
  }
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
joined_r0x005c1078:
  if (lVar3 != 0) {
    FUN_005c2650(*(undefined8 *)(param_2 + 8),lVar3,"../../../../Include\\SiCore/SiCore_Map.h",0x4e4
                );
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  return;
}


