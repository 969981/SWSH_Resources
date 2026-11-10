/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00666fc0; name: FUN_00666fc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00666fc0(long *param_1,long param_2,long param_3)

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
    lVar5 = *(long *)(lVar3 + 0x30);
    if ((lVar5 == 0) && (lVar5 = *(long *)(lVar3 + 0x38), lVar5 == 0)) {
      lVar5 = 0;
      if (*(long *)(lVar3 + 0x28) != 0) {
        lVar5 = *(long *)(lVar3 + 0x28);
        lVar6 = lVar3;
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(lVar4 + 0x38);
          if (lVar5 != 0 && lVar5 != lVar6) goto LAB_00666fec;
          param_1[1] = lVar4;
          lVar5 = *(long *)(lVar4 + 0x28);
          lVar6 = lVar4;
        } while (*(long *)(lVar4 + 0x28) != 0);
        lVar5 = 0;
      }
    }
LAB_00666fec:
    param_1[1] = lVar5;
  }
  lVar5 = *(long *)(lVar3 + 0x30);
  lVar6 = *(long *)(lVar3 + 0x38);
  lVar4 = lVar3;
  if (lVar6 == 0) {
    if (lVar5 != 0) {
      if (*(long *)(param_2 + 0x18) == lVar3) goto LAB_00667074;
LAB_00667048:
      lVar6 = *(long *)(lVar3 + 0x28);
      if (*(long *)(lVar6 + 0x38) == lVar3) {
        *(long *)(lVar6 + 0x38) = lVar5;
      }
      else {
        *(long *)(lVar6 + 0x30) = lVar5;
      }
      goto LAB_006670a8;
    }
    bVar2 = false;
    if (*(char *)(lVar3 + 0x40) == '\0') goto LAB_00667188;
joined_r0x00667640:
    if (lVar5 == 0) goto LAB_006673e8;
LAB_006670c4:
    if (bVar2) goto LAB_006670c8;
  }
  else {
    if (lVar5 == 0) {
      lVar5 = lVar6;
      if (*(long *)(param_2 + 0x18) != lVar3) goto LAB_00667048;
LAB_00667074:
      *(long *)(param_2 + 0x18) = lVar5;
LAB_006670a8:
      bVar2 = false;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      cVar1 = *(char *)(lVar3 + 0x40);
    }
    else {
      do {
        lVar4 = lVar6;
        lVar6 = *(long *)(lVar4 + 0x30);
      } while (*(long *)(lVar4 + 0x30) != 0);
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 == 0) {
        bVar2 = true;
        cVar1 = *(char *)(lVar4 + 0x40);
      }
      else {
        if (*(long *)(param_2 + 0x18) == lVar4) {
          *(long *)(param_2 + 0x18) = lVar5;
        }
        else {
          lVar6 = *(long *)(lVar4 + 0x28);
          if (*(long *)(lVar6 + 0x38) == lVar4) {
            *(long *)(lVar6 + 0x38) = lVar5;
          }
          else {
            *(long *)(lVar6 + 0x30) = lVar5;
          }
        }
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        bVar2 = true;
        cVar1 = *(char *)(lVar4 + 0x40);
      }
    }
    if (cVar1 != '\0') goto joined_r0x00667640;
LAB_00667188:
    if (lVar5 == 0) {
      *(undefined1 *)(lVar4 + 0x40) = 0;
      lVar6 = lVar4;
LAB_006671bc:
      do {
        if (lVar6 == *(long *)(param_2 + 0x18)) goto LAB_006673e0;
        lVar8 = *(long *)(lVar6 + 0x28);
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar8 + 0x30);
          if (lVar10 == lVar6) {
            lVar10 = *(long *)(lVar8 + 0x38);
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x40) != '\0')) {
            *(undefined1 *)(lVar10 + 0x40) = 0;
            lVar10 = *(long *)(lVar8 + 0x30);
            *(undefined1 *)(lVar8 + 0x40) = 1;
            if (lVar6 == lVar10) {
              lVar10 = *(long *)(lVar8 + 0x38);
              if (lVar10 != 0) {
                *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar10 + 0x30);
                if (*(long *)(lVar10 + 0x30) != 0) {
                  *(long *)(*(long *)(lVar10 + 0x30) + 0x28) = lVar8;
                }
              }
              if (*(long *)(param_2 + 0x18) == lVar8) {
                *(long *)(param_2 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x28) = 0;
                  *(long *)(lVar10 + 0x30) = lVar8;
                }
              }
              else {
                lVar11 = *(long *)(lVar8 + 0x28);
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x28) = lVar11;
                }
                if (lVar11 != 0) {
                  lVar9 = 0x30;
                  if (*(long *)(lVar11 + 0x30) != lVar8) {
                    lVar9 = 0x38;
                  }
                  *(long *)(lVar11 + lVar9) = lVar10;
                }
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x30) = lVar8;
                }
              }
            }
            else {
              if (lVar10 != 0) {
                *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar10 + 0x38);
                if (*(long *)(lVar10 + 0x38) != 0) {
                  *(long *)(*(long *)(lVar10 + 0x38) + 0x28) = lVar8;
                }
              }
              if (*(long *)(param_2 + 0x18) == lVar8) {
                *(long *)(param_2 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x28) = 0;
                  goto LAB_006672ec;
                }
              }
              else {
                lVar11 = *(long *)(lVar8 + 0x28);
                if (lVar10 != 0) {
                  *(long *)(lVar10 + 0x28) = lVar11;
                }
                if (lVar11 != 0) {
                  lVar9 = 0x30;
                  if (*(long *)(lVar11 + 0x30) != lVar8) {
                    lVar9 = 0x38;
                  }
                  *(long *)(lVar11 + lVar9) = lVar10;
                }
                if (lVar10 != 0) {
LAB_006672ec:
                  *(long *)(lVar10 + 0x38) = lVar8;
                }
              }
            }
            *(long *)(lVar8 + 0x28) = lVar10;
          }
          lVar10 = *(long *)(lVar6 + 0x28);
          if (lVar10 == 0) {
            lVar11 = 0;
            cVar1 = DAT_00000040;
          }
          else {
            lVar11 = *(long *)(lVar10 + 0x30);
            if (lVar11 == lVar6) {
              lVar11 = *(long *)(lVar10 + 0x38);
              cVar1 = *(char *)(lVar11 + 0x40);
              goto joined_r0x00667254;
            }
            cVar1 = *(char *)(lVar11 + 0x40);
          }
          if (cVar1 == '\0') goto LAB_00667258;
LAB_00667508:
          lVar8 = *(long *)(lVar6 + 0x28);
          if (lVar8 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(lVar8 + 0x30);
            if (lVar10 == lVar6) {
              lVar10 = *(long *)(lVar8 + 0x38);
            }
          }
          *(undefined1 *)(lVar10 + 0x40) = *(undefined1 *)(lVar8 + 0x40);
          lVar11 = *(long *)(lVar8 + 0x30);
          *(undefined1 *)(lVar8 + 0x40) = 0;
          if (lVar6 == lVar11) {
            if (*(long *)(lVar10 + 0x38) != 0) {
              *(undefined1 *)(*(long *)(lVar10 + 0x38) + 0x40) = 0;
            }
            lVar6 = *(long *)(lVar8 + 0x38);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar6 + 0x30);
              if (*(long *)(lVar6 + 0x30) != 0) {
                *(long *)(*(long *)(lVar6 + 0x30) + 0x28) = lVar8;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar8) {
              *(long *)(param_2 + 0x18) = lVar6;
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x28) = 0;
                goto LAB_00667634;
              }
            }
            else {
              lVar10 = *(long *)(lVar8 + 0x28);
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x28) = lVar10;
              }
              if (lVar10 != 0) {
                lVar11 = 0x30;
                if (*(long *)(lVar10 + 0x30) != lVar8) {
                  lVar11 = 0x38;
                }
                *(long *)(lVar10 + lVar11) = lVar6;
              }
              if (lVar6 != 0) {
LAB_00667634:
                *(long *)(lVar6 + 0x30) = lVar8;
              }
            }
            *(long *)(lVar8 + 0x28) = lVar6;
            *(undefined1 *)(lVar4 + 0x40) = 0;
            goto joined_r0x00667640;
          }
          if (*(long *)(lVar10 + 0x30) != 0) {
            *(undefined1 *)(*(long *)(lVar10 + 0x30) + 0x40) = 0;
            lVar11 = *(long *)(lVar8 + 0x30);
          }
          if (lVar11 != 0) {
            *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar11 + 0x38);
            if (*(long *)(lVar11 + 0x38) != 0) {
              *(long *)(*(long *)(lVar11 + 0x38) + 0x28) = lVar8;
            }
          }
          if (*(long *)(param_2 + 0x18) == lVar8) {
            *(long *)(param_2 + 0x18) = lVar11;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x28) = 0;
              goto LAB_00667614;
            }
          }
          else {
            lVar6 = *(long *)(lVar8 + 0x28);
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x28) = lVar6;
            }
            if (lVar6 != 0) {
              lVar10 = 0x30;
              if (*(long *)(lVar6 + 0x30) != lVar8) {
                lVar10 = 0x38;
              }
              *(long *)(lVar6 + lVar10) = lVar11;
            }
            if (lVar11 != 0) {
LAB_00667614:
              *(long *)(lVar11 + 0x38) = lVar8;
            }
          }
          *(long *)(lVar8 + 0x28) = lVar11;
          *(undefined1 *)(lVar4 + 0x40) = 0;
          goto joined_r0x006671a0;
        }
        lVar11 = 0;
        cVar1 = DAT_00000040;
joined_r0x00667254:
        if (cVar1 != '\0') goto LAB_00667508;
LAB_00667258:
        lVar10 = *(long *)(lVar11 + 0x38);
        if (((lVar10 != 0) && (*(char *)(lVar10 + 0x40) != '\0')) ||
           ((*(long *)(lVar11 + 0x30) != 0 && (*(char *)(*(long *)(lVar11 + 0x30) + 0x40) != '\0')))
           ) {
          if (((lVar6 == *(long *)(lVar8 + 0x30)) &&
              (((lVar10 == 0 || (*(char *)(lVar10 + 0x40) == '\0')) &&
               (lVar9 = *(long *)(lVar11 + 0x30), lVar9 != 0)))) &&
             (*(char *)(lVar9 + 0x40) != '\0')) {
            *(undefined1 *)(lVar11 + 0x40) = 1;
            *(undefined1 *)(lVar9 + 0x40) = 0;
            lVar8 = *(long *)(lVar11 + 0x30);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar8 + 0x38);
              if (*(long *)(lVar8 + 0x38) != 0) {
                *(long *)(*(long *)(lVar8 + 0x38) + 0x28) = lVar11;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar11) {
              *(long *)(param_2 + 0x18) = lVar8;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x28) = 0;
                goto LAB_00667500;
              }
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x28);
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x28) = lVar10;
              }
              if (lVar10 != 0) {
                lVar9 = 0x30;
                if (*(long *)(lVar10 + 0x30) != lVar11) {
                  lVar9 = 0x38;
                }
                *(long *)(lVar10 + lVar9) = lVar8;
              }
              if (lVar8 != 0) {
LAB_00667500:
                *(long *)(lVar8 + 0x38) = lVar11;
              }
            }
          }
          else {
            if ((((lVar6 != *(long *)(lVar8 + 0x38)) ||
                 ((*(long *)(lVar11 + 0x30) != 0 &&
                  (*(char *)(*(long *)(lVar11 + 0x30) + 0x40) != '\0')))) || (lVar10 == 0)) ||
               (*(char *)(lVar10 + 0x40) == '\0')) goto LAB_00667508;
            *(undefined1 *)(lVar11 + 0x40) = 1;
            *(undefined1 *)(lVar10 + 0x40) = 0;
            lVar8 = *(long *)(lVar11 + 0x38);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar8 + 0x30);
              if (*(long *)(lVar8 + 0x30) != 0) {
                *(long *)(*(long *)(lVar8 + 0x30) + 0x28) = lVar11;
              }
            }
            if (*(long *)(param_2 + 0x18) == lVar11) {
              *(long *)(param_2 + 0x18) = lVar8;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x28) = 0;
                goto LAB_006674ec;
              }
            }
            else {
              lVar10 = *(long *)(lVar11 + 0x28);
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x28) = lVar10;
              }
              if (lVar10 != 0) {
                lVar9 = 0x30;
                if (*(long *)(lVar10 + 0x30) != lVar11) {
                  lVar9 = 0x38;
                }
                *(long *)(lVar10 + lVar9) = lVar8;
              }
              if (lVar8 != 0) {
LAB_006674ec:
                *(long *)(lVar8 + 0x30) = lVar11;
              }
            }
          }
          *(long *)(lVar11 + 0x28) = lVar8;
          goto LAB_00667508;
        }
        cVar1 = *(char *)(lVar8 + 0x40);
        *(undefined1 *)(lVar11 + 0x40) = 1;
        lVar6 = lVar8;
      } while (cVar1 == '\0');
      *(undefined1 *)(lVar8 + 0x40) = 0;
LAB_006673e0:
      *(undefined1 *)(lVar4 + 0x40) = 0;
      goto joined_r0x00667640;
    }
    lVar6 = lVar5;
    if (*(char *)(lVar5 + 0x40) == '\0') goto LAB_006671bc;
    *(undefined1 *)(lVar5 + 0x40) = 0;
    *(undefined1 *)(lVar4 + 0x40) = 0;
joined_r0x006671a0:
    if (lVar5 != 0) goto LAB_006670c4;
LAB_006673e8:
    lVar5 = *(long *)(lVar4 + 0x28);
    if (lVar5 == 0) {
LAB_0066740c:
      plVar7 = (long *)(param_2 + 0x18);
LAB_00667410:
      *plVar7 = 0;
    }
    else {
      plVar7 = (long *)(lVar5 + 0x38);
      if (lVar4 == *plVar7) goto LAB_00667410;
      if (lVar4 != *(long *)(lVar5 + 0x30)) goto LAB_0066740c;
      *(long *)(lVar5 + 0x30) = 0;
    }
    if (bVar2) {
LAB_006670c8:
      lVar5 = *(long *)(lVar3 + 0x28);
      if (lVar5 == 0) {
        plVar7 = (long *)(param_2 + 0x18);
      }
      else {
        plVar7 = (long *)(lVar5 + 0x38);
        if (lVar3 != *(long *)(lVar5 + 0x38)) {
          plVar7 = (long *)(lVar5 + 0x30);
        }
      }
      *plVar7 = lVar4;
      *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(lVar3 + 0x40);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      lVar6 = *(long *)(lVar3 + 0x30);
      *(long *)(lVar4 + 0x30) = lVar6;
      lVar5 = *(long *)(lVar3 + 0x38);
      *(long *)(lVar4 + 0x38) = lVar5;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x28) = lVar4;
        lVar5 = *(long *)(lVar4 + 0x38);
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x28) = lVar4;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        goto joined_r0x00667128;
      }
    }
  }
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
joined_r0x00667128:
  if (lVar3 != 0) {
    FUN_0066dd60(*(undefined8 *)(param_2 + 8),lVar3,"../../../../Include\\SiCore/SiCore_Map.h",0x4e4
                );
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  return;
}


