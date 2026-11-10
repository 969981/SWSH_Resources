/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bdf10; name: FUN_005bdf10
 */


void FUN_005bdf10(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_40 [16];
  
  if (param_2 == 0) {
    return;
  }
  FUN_005c8860(auStack_40,param_1 + 0x240,1);
  if (*(long *)(param_1 + 0xe0) != 0) {
    plVar2 = (long *)(param_1 + 0xd0);
    for (lVar3 = *plVar2; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      lVar10 = *(long *)(lVar3 + 0x10);
      if (*(long *)(lVar10 + 0x58) == param_2) {
        lVar3 = 0;
        if (0 < *(long *)(param_1 + 0x88)) {
          lVar3 = *(long *)(param_1 + 0x88) + -1;
        }
        *(long *)(param_1 + 0x88) = lVar3;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) - *(long *)(lVar10 + 0x60);
        plVar4 = (long *)(lVar10 + 0x20);
        plVar5 = (long *)*plVar4;
        if (plVar5 == (long *)0x0) {
          lVar8 = 0;
          lVar3 = *(long *)(lVar10 + 0x28);
          if (lVar3 != 0) goto LAB_005bdfa8;
LAB_005be010:
          lVar1 = 0;
        }
        else {
          lVar8 = *(long *)((long)plVar5 + 0x10);
          lVar3 = *(long *)(lVar10 + 0x28);
          if (lVar3 == 0) goto LAB_005be010;
LAB_005bdfa8:
          lVar1 = *(long *)(lVar3 + 0x10);
        }
        if (((lVar8 == 0) || (*(long *)(lVar8 + 0x58) != 0)) ||
           ((*(byte *)(lVar10 + 0x78) & 1) != 0)) {
          if (((lVar1 == 0) || (*(long *)(lVar1 + 0x58) != 0)) ||
             ((*(byte *)(lVar1 + 0x78) & 1) != 0)) goto LAB_005be084;
          *(long *)(lVar10 + 0x60) =
               (*(long *)(lVar1 + 0x50) + *(long *)(lVar1 + 0x60)) - *(long *)(lVar10 + 0x50);
          plVar4 = (long *)(param_1 + 0xf8);
          plVar5 = (long *)(lVar1 + 0x38);
          lVar3 = lVar10 + 0x38;
          if ((long *)*plVar4 == plVar5) {
            if (*(long *)(param_1 + 0x100) == 0) {
              *(long *)(param_1 + 0x100) = lVar3;
            }
            else {
              *plVar5 = lVar3;
              *(long *)(lVar10 + 0x40) = *plVar4;
            }
LAB_005be230:
            *plVar4 = lVar3;
          }
          else {
            lVar8 = *plVar5;
            *plVar5 = lVar3;
            *(long *)(lVar10 + 0x38) = lVar8;
            *(long **)(lVar10 + 0x40) = plVar5;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 8) = lVar3;
            }
            if ((long *)*plVar4 == plVar5) goto LAB_005be230;
          }
          *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
          *(undefined8 *)(lVar10 + 0x58) = 0;
          *(undefined8 *)(lVar10 + 0x88) = 0;
          *(undefined4 *)(lVar10 + 0x84) = 0;
          *(undefined8 *)(lVar10 + 0x68) = 0;
          *(undefined8 *)(lVar10 + 0x70) = 0;
          plVar7 = (long *)(lVar1 + 0x20);
          lVar3 = *plVar7;
          plVar9 = *(long **)(lVar1 + 0x28);
          if (lVar3 == 0) {
            if (((long *)*plVar2 == plVar7) && ((long *)*plVar2 != (long *)0x0)) {
              if (plVar9 == (long *)0x0) {
                *plVar2 = 0;
                *(undefined8 *)(param_1 + 0xd8) = 0;
              }
              else {
                *plVar9 = 0;
                *plVar2 = (long)plVar9;
              }
              goto LAB_005be2d4;
            }
          }
          else {
            if (plVar9 == (long *)0x0) {
              if ((*(long **)(param_1 + 0xd8) != plVar7) ||
                 (*(long **)(param_1 + 0xd8) == (long *)0x0)) goto LAB_005be2e4;
              *(undefined8 *)(lVar3 + 8) = 0;
              *(long *)(param_1 + 0xd8) = lVar3;
            }
            else {
              *plVar9 = lVar3;
              *(long **)(lVar3 + 8) = plVar9;
            }
LAB_005be2d4:
            *plVar7 = 0;
            *(undefined8 *)(lVar1 + 0x28) = 0;
            *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
          }
LAB_005be2e4:
          lVar3 = *(long *)(lVar1 + 0x38);
          plVar2 = *(long **)(lVar1 + 0x40);
          if (lVar3 == 0) {
            if (((long *)*plVar4 == plVar5) && ((long *)*plVar4 != (long *)0x0)) {
              if (plVar2 == (long *)0x0) {
                *plVar4 = 0;
                *(undefined8 *)(param_1 + 0x100) = 0;
              }
              else {
                *plVar2 = 0;
                *plVar4 = (long)plVar2;
              }
              goto LAB_005be33c;
            }
          }
          else {
            if (plVar2 == (long *)0x0) {
              if ((*(long **)(param_1 + 0x100) != plVar5) ||
                 (*(long **)(param_1 + 0x100) == (long *)0x0)) goto LAB_005be34c;
              *(undefined8 *)(lVar3 + 8) = 0;
              *(long *)(param_1 + 0x100) = lVar3;
            }
            else {
              *plVar2 = lVar3;
              *(long **)(lVar3 + 8) = plVar2;
            }
LAB_005be33c:
            *plVar5 = 0;
            *(undefined8 *)(lVar1 + 0x40) = 0;
            *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
          }
LAB_005be34c:
          FUN_005be4a0(param_1 + 0x110);
        }
        else {
          if (((lVar1 == 0) || (*(long *)(lVar1 + 0x58) != 0)) ||
             ((*(byte *)(lVar1 + 0x78) & 1) != 0)) {
            *(long *)(lVar8 + 0x60) =
                 (*(long *)(lVar10 + 0x50) + *(long *)(lVar10 + 0x60)) - *(long *)(lVar8 + 0x50);
            lVar3 = *(long *)(lVar10 + 0x20);
            plVar5 = *(long **)(lVar10 + 0x28);
            if (lVar3 == 0) {
              if (((long *)*plVar2 == plVar4) && ((long *)*plVar2 != (long *)0x0)) {
                if (plVar5 == (long *)0x0) {
                  *plVar2 = 0;
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                }
                else {
                  *plVar5 = 0;
                  *plVar2 = (long)plVar5;
                }
                goto LAB_005be2b0;
              }
            }
            else {
              if (plVar5 == (long *)0x0) {
                if ((*(long **)(param_1 + 0xd8) != plVar4) ||
                   (*(long **)(param_1 + 0xd8) == (long *)0x0)) goto LAB_005be2c4;
                *(undefined8 *)(lVar3 + 8) = 0;
                *(long *)(param_1 + 0xd8) = lVar3;
              }
              else {
                *plVar5 = lVar3;
                *(long **)(lVar3 + 8) = plVar5;
              }
LAB_005be2b0:
              *plVar4 = 0;
              *(undefined8 *)(lVar10 + 0x28) = 0;
              *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
            }
          }
          else {
            *(long *)(lVar8 + 0x60) =
                 (*(long *)(lVar1 + 0x50) + *(long *)(lVar1 + 0x60)) - *(long *)(lVar8 + 0x50);
            lVar3 = *(long *)(lVar10 + 0x20);
            plVar5 = *(long **)(lVar10 + 0x28);
            if (lVar3 == 0) {
              if (((long *)*plVar2 == plVar4) && ((long *)*plVar2 != (long *)0x0)) {
                if (plVar5 == (long *)0x0) {
                  *plVar2 = 0;
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                }
                else {
                  *plVar5 = 0;
                  *plVar2 = (long)plVar5;
                }
                goto LAB_005be398;
              }
            }
            else {
              if (plVar5 == (long *)0x0) {
                if ((*(long **)(param_1 + 0xd8) != plVar4) ||
                   (*(long **)(param_1 + 0xd8) == (long *)0x0)) goto LAB_005be3a8;
                *(undefined8 *)(lVar3 + 8) = 0;
                *(long *)(param_1 + 0xd8) = lVar3;
              }
              else {
                *plVar5 = lVar3;
                *(long **)(lVar3 + 8) = plVar5;
              }
LAB_005be398:
              *plVar4 = 0;
              *(undefined8 *)(lVar10 + 0x28) = 0;
              *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
            }
LAB_005be3a8:
            plVar5 = (long *)(lVar1 + 0x20);
            lVar3 = *plVar5;
            plVar4 = *(long **)(lVar1 + 0x28);
            if (lVar3 == 0) {
              if (((long *)*plVar2 == plVar5) && ((long *)*plVar2 != (long *)0x0)) {
                if (plVar4 == (long *)0x0) {
                  *plVar2 = 0;
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                }
                else {
                  *plVar4 = 0;
                  *plVar2 = (long)plVar4;
                }
                goto LAB_005be408;
              }
            }
            else {
              if (plVar4 == (long *)0x0) {
                if ((*(long **)(param_1 + 0xd8) != plVar5) ||
                   (*(long **)(param_1 + 0xd8) == (long *)0x0)) goto LAB_005be418;
                *(undefined8 *)(lVar3 + 8) = 0;
                *(long *)(param_1 + 0xd8) = lVar3;
              }
              else {
                *plVar4 = lVar3;
                *(long **)(lVar3 + 8) = plVar4;
              }
LAB_005be408:
              *plVar5 = 0;
              *(undefined8 *)(lVar1 + 0x28) = 0;
              *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
            }
LAB_005be418:
            plVar2 = (long *)(lVar1 + 0x38);
            lVar3 = *plVar2;
            plVar5 = *(long **)(lVar1 + 0x40);
            if (lVar3 == 0) {
              puVar6 = (undefined8 *)(param_1 + 0xf8);
              if (((long *)*puVar6 == plVar2) && ((long *)*puVar6 != (long *)0x0)) {
                if (plVar5 == (long *)0x0) {
                  *puVar6 = 0;
                  *(undefined8 *)(param_1 + 0x100) = 0;
                }
                else {
                  *plVar5 = 0;
                  *puVar6 = plVar5;
                }
                goto LAB_005be47c;
              }
            }
            else {
              if (plVar5 == (long *)0x0) {
                if ((*(long **)(param_1 + 0x100) != plVar2) ||
                   (*(long **)(param_1 + 0x100) == (long *)0x0)) goto LAB_005be48c;
                *(undefined8 *)(lVar3 + 8) = 0;
                *(long *)(param_1 + 0x100) = lVar3;
              }
              else {
                *plVar5 = lVar3;
                *(long **)(lVar3 + 8) = plVar5;
              }
LAB_005be47c:
              *plVar2 = 0;
              *(undefined8 *)(lVar1 + 0x40) = 0;
              *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
            }
LAB_005be48c:
            FUN_005be4a0(param_1 + 0x110);
          }
LAB_005be2c4:
          FUN_005be4a0(param_1 + 0x110,lVar10);
        }
        break;
      }
    }
  }
  goto LAB_005be198;
LAB_005be084:
  if (plVar5 != (long *)0x0 || lVar3 != 0) {
    if (plVar5 != (long *)0x0) {
      if (*(long *)(plVar5[2] + 0x58) != 0) {
        plVar5 = (long *)*plVar5;
        goto joined_r0x005be0b0;
      }
      lVar3 = *(long *)(plVar5[2] + 0x40);
      if (lVar3 != 0) {
        lVar8 = *(long *)(lVar3 + 0x10);
LAB_005be110:
        plVar2 = (long *)(lVar8 + 0x38);
        lVar3 = lVar10 + 0x38;
        if (*(long **)(param_1 + 0xf8) == plVar2) {
          if (*(long *)(param_1 + 0x100) == 0) {
            *(long *)(param_1 + 0xf8) = lVar3;
            *(long *)(param_1 + 0x100) = lVar3;
          }
          else {
            *plVar2 = lVar3;
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_1 + 0xf8);
            *(long *)(param_1 + 0xf8) = lVar3;
          }
        }
        else {
          lVar8 = *plVar2;
          *plVar2 = lVar3;
          *(long *)(lVar10 + 0x38) = lVar8;
          *(long **)(lVar10 + 0x40) = plVar2;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 8) = lVar3;
          }
          if (*(long **)(param_1 + 0xf8) == plVar2) {
            *(long *)(param_1 + 0xf8) = lVar3;
          }
        }
        goto LAB_005be17c;
      }
      goto LAB_005be14c;
    }
    plVar5 = (long *)0x0;
joined_r0x005be0b0:
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar8 = *(long *)(lVar3 + 0x10);
      if (*(long *)(lVar8 + 0x58) == 0) goto LAB_005be110;
      lVar3 = *(long *)(lVar3 + 8);
    }
    goto LAB_005be084;
  }
LAB_005be14c:
  puVar6 = (undefined8 *)(lVar10 + 0x38);
  if (*(long *)(param_1 + 0xf8) == 0) {
    *(undefined8 **)(param_1 + 0xf8) = puVar6;
  }
  else {
    *(undefined8 **)(*(long *)(param_1 + 0x100) + 8) = puVar6;
    *puVar6 = *(undefined8 *)(param_1 + 0x100);
  }
  *(undefined8 **)(param_1 + 0x100) = puVar6;
LAB_005be17c:
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *(undefined8 *)(lVar10 + 0x88) = 0;
  *(undefined4 *)(lVar10 + 0x84) = 0;
  *(undefined8 *)(lVar10 + 0x68) = 0;
  *(undefined8 *)(lVar10 + 0x70) = 0;
LAB_005be198:
  FUN_005c88a0(auStack_40);
  return;
}


