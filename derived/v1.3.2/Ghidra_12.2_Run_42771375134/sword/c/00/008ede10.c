/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ede10; name: FUN_008ede10
 */


void FUN_008ede10(undefined4 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  switch(*param_1) {
  case 1:
  case 5:
    uVar2 = FUN_008ee7a0(2,param_3,*(undefined1 *)(param_1 + 1));
    uVar3 = FUN_008ef010(2,param_3,uVar2);
    if (1 < (uVar3 & 0xff)) {
      uVar5 = 1;
      do {
        cVar1 = FUN_008ee8b0(2,param_3,*(undefined1 *)(param_1 + 1),uVar5);
        uVar6 = (ulong)*(byte *)(param_2 + 5);
        if (uVar6 < 5) {
          if (*(byte *)(param_2 + 5) == 0) {
            uVar6 = 0;
          }
          else {
            uVar7 = 0;
            do {
              if (*(char *)(param_2 + uVar7) == cVar1) goto LAB_008ededc;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          *(char *)(param_2 + uVar6) = cVar1;
          *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
        }
LAB_008ededc:
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xff) < (uVar3 & 0xff));
    }
    break;
  case 2:
  case 7:
    uVar2 = FUN_008ee7a0(2,param_3,*(undefined1 *)(param_1 + 1));
    uVar2 = FUN_008ee870(2,uVar2);
    uVar3 = FUN_008ef010(2,param_3,uVar2);
    if ((uVar3 & 0xff) != 0) {
      uVar5 = 0;
      do {
        cVar1 = FUN_008ee700(2,param_3,*(undefined1 *)(param_1 + 1),uVar5);
        uVar6 = (ulong)*(byte *)(param_2 + 5);
        if (uVar6 < 5) {
          if (*(byte *)(param_2 + 5) == 0) {
            uVar6 = 0;
          }
          else {
            uVar7 = 0;
            do {
              if (*(char *)(param_2 + uVar7) == cVar1) goto LAB_008edf7c;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          *(char *)(param_2 + uVar6) = cVar1;
          *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
        }
LAB_008edf7c:
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xff) < (uVar3 & 0xff));
    }
    break;
  case 3:
    uVar2 = FUN_008ee7a0(2,param_3,*(undefined1 *)(param_1 + 1));
    uVar4 = FUN_008ee870(2,uVar2);
    uVar3 = FUN_008ef010(2,param_3,uVar4);
    uVar5 = FUN_008ef010(2,param_3,uVar2);
    if ((uVar3 & 0xff) != 0) {
      uVar9 = 0;
      do {
        cVar1 = FUN_008ee700(2,param_3,*(undefined1 *)(param_1 + 1),uVar9);
        uVar6 = (ulong)*(byte *)(param_2 + 5);
        if (uVar6 < 5) {
          if (*(byte *)(param_2 + 5) == 0) {
            uVar6 = 0;
          }
          else {
            uVar7 = 0;
            do {
              if (*(char *)(param_2 + uVar7) == cVar1) goto LAB_008ee0f8;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          *(char *)(param_2 + uVar6) = cVar1;
          *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
        }
LAB_008ee0f8:
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xff) < (uVar3 & 0xff));
    }
    if ((uVar5 & 0xff) != 0) {
      uVar3 = 0;
      do {
        cVar1 = FUN_008ee8b0(2,param_3,*(undefined1 *)(param_1 + 1),uVar3);
        if (cVar1 != *(char *)(param_1 + 1)) {
          uVar6 = (ulong)*(byte *)(param_2 + 5);
          if (uVar6 < 5) {
            if (*(byte *)(param_2 + 5) == 0) {
              uVar6 = 0;
            }
            else {
              uVar7 = 0;
              do {
                if (*(char *)(param_2 + uVar7) == cVar1) goto LAB_008ee178;
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar6);
            }
            *(char *)(param_2 + uVar6) = cVar1;
            *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
          }
        }
LAB_008ee178:
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xff) < (uVar5 & 0xff));
    }
    break;
  case 4:
  case 8:
    uVar2 = FUN_008ee7a0(2,param_3,*(undefined1 *)(param_1 + 1));
    uVar3 = FUN_008ef010(2,param_3,uVar2);
    if ((uVar3 & 0xff) != 0) {
      uVar5 = 0;
      do {
        cVar1 = FUN_008ee8b0(2,param_3,*(undefined1 *)(param_1 + 1),uVar5);
        uVar6 = (ulong)*(byte *)(param_2 + 5);
        if (uVar6 < 5) {
          if (*(byte *)(param_2 + 5) == 0) {
            uVar6 = 0;
          }
          else {
            uVar7 = 0;
            do {
              if (*(char *)(param_2 + uVar7) == cVar1) goto LAB_008ee010;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          *(char *)(param_2 + uVar6) = cVar1;
          *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
        }
LAB_008ee010:
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xff) < (uVar3 & 0xff));
    }
    break;
  case 6:
  case 9:
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (uVar6 < 5) {
      if (*(byte *)(param_2 + 5) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == '\0') goto LAB_008ee19c;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      *(undefined1 *)(param_2 + uVar6) = 0;
      uVar3 = *(byte *)(param_2 + 5) + 1;
      uVar6 = (ulong)uVar3;
      *(char *)(param_2 + 5) = (char)uVar3;
LAB_008ee19c:
      if (((uint)uVar6 & 0xff) < 5) {
        if ((uVar6 & 0xff) == 0) {
          uVar7 = 0;
        }
        else {
          uVar8 = 0;
          uVar7 = uVar6 & 0xff;
          do {
            if (*(char *)(param_2 + uVar8) == '\x01') goto LAB_008ee1ec;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        *(undefined1 *)(param_2 + uVar7) = 1;
        uVar3 = *(byte *)(param_2 + 5) + 1;
        uVar6 = (ulong)uVar3;
        *(char *)(param_2 + 5) = (char)uVar3;
LAB_008ee1ec:
        if (((uint)uVar6 & 0xff) < 5) {
          if ((uVar6 & 0xff) == 0) {
            uVar7 = 0;
          }
          else {
            uVar8 = 0;
            uVar7 = uVar6 & 0xff;
            do {
              if (*(char *)(param_2 + uVar8) == '\x02') goto LAB_008ee23c;
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          *(undefined1 *)(param_2 + uVar7) = 2;
          uVar3 = *(byte *)(param_2 + 5) + 1;
          uVar6 = (ulong)uVar3;
          *(char *)(param_2 + 5) = (char)uVar3;
LAB_008ee23c:
          if (((uint)uVar6 & 0xff) < 5) {
            if ((uVar6 & 0xff) == 0) {
              uVar7 = 0;
            }
            else {
              uVar8 = 0;
              uVar7 = uVar6 & 0xff;
              do {
                if (*(char *)(param_2 + uVar8) == '\x03') goto LAB_008ee28c;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar7);
            }
            *(undefined1 *)(param_2 + uVar7) = 3;
            uVar3 = *(byte *)(param_2 + 5) + 1;
            uVar6 = (ulong)uVar3;
            *(char *)(param_2 + 5) = (char)uVar3;
LAB_008ee28c:
            if (((uint)uVar6 & 0xff) < 5) {
              if ((uVar6 & 0xff) == 0) {
                uVar6 = 0;
              }
              else {
                uVar7 = 0;
                uVar6 = uVar6 & 0xff;
                do {
                  if (*(char *)(param_2 + uVar7) == '\x04') {
                    return;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar6);
              }
              *(undefined1 *)(param_2 + uVar6) = 4;
              *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
            }
          }
        }
      }
    }
  }
  return;
}


