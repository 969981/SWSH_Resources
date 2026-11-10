/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009041b0; name: FUN_009041b0
 */


undefined8 FUN_009041b0(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  
  if (param_3 == 0xa5) {
    return 0;
  }
  uVar5 = FUN_008809d0(param_3);
  if ((uVar5 & 1) == 0) {
    if (param_4 == 0) {
      return 1;
    }
    uVar6 = 0x1fc;
    goto LAB_009042b0;
  }
  sVar2 = FUN_008e2d30(param_2,*(undefined8 *)(param_1 + 0xe0));
  if (sVar2 != 0) {
    uVar5 = FUN_008e1810(param_2,0x1c);
    if (((((uVar5 & 1) != 0) && (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) == 0)) &&
        (uVar5 = thunk_FUN_008dd3c0(param_3), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_008dd500(sVar2), (uVar5 & 1) != 0)) {
      local_48 = FUN_008e1aa0(param_2,0x1c);
      uVar3 = FUN_008ed2f0(&local_48);
      uVar3 = uVar3 & 0xffff;
      uVar5 = FUN_008e2850(param_2,uVar3);
      if ((uVar3 != param_3) && ((uVar5 & 1) != 0)) {
        if (param_4 == 0) {
          return 1;
        }
        FUN_009c7ca0(param_4,1,0x71);
        FUN_009c7cd0(param_4,sVar2);
        goto LAB_0090453c;
      }
    }
    if ((sVar2 == 0x280) && (uVar5 = FUN_00880c60(param_3), (uVar5 & 1) == 0)) {
      if (param_4 == 0) {
        return 1;
      }
      FUN_009c7ca0(param_4,1,0x72);
      uVar3 = 0x280;
      goto LAB_0090453c;
    }
  }
  iVar4 = FUN_008e12a0(param_2,0x13);
  if ((iVar4 == 0xff) &&
     (((uVar5 = FUN_008e1810(param_2,0x1c), (uVar5 & 1) != 0 &&
       (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) == 0)) &&
      (uVar5 = thunk_FUN_008dd3c0(param_3), (uVar5 & 1) == 0)))) {
    local_48 = FUN_008e1aa0(param_2,0x1c);
    uVar3 = FUN_008ed2f0(&local_48);
    uVar3 = uVar3 & 0xffff;
    uVar5 = FUN_008e2850(param_2,uVar3);
    if ((uVar3 == param_3) || ((uVar5 & 1) == 0)) goto LAB_00904340;
LAB_00904508:
    if (param_4 == 0) {
      return 1;
    }
    FUN_009c7ca0(param_4,1,0x73);
    uVar1 = FUN_008e0a00(param_2);
    FUN_009c7cd0(param_4,uVar1);
    goto LAB_0090453c;
  }
LAB_00904340:
  uVar5 = FUN_008e1810(param_2,0x17);
  if ((uVar5 & 1) != 0) {
    local_48 = FUN_008e1aa0(param_2,0x17);
    uVar3 = FUN_008ed2f0(&local_48);
    uVar3 = uVar3 & 0xffff;
    if ((uVar3 != param_3) && (uVar5 = thunk_FUN_008dd3c0(param_3), (uVar5 & 1) == 0))
    goto LAB_00904508;
  }
  uVar5 = FUN_008e1810(param_2,0xb);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_00880c60(param_3), (uVar5 & 1) != 0)) {
    uVar5 = FUN_008e1810(param_2,0xc);
    if ((((uVar5 & 1) == 0) || (uVar3 = FUN_008e4c70(param_2), uVar3 != param_3)) ||
       (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) != 0)) {
      uVar5 = FUN_008e1810(param_2,0xd);
      if ((((uVar5 & 1) == 0) || (uVar3 = FUN_008e1a60(param_2,0xd), (uVar3 & 0xffff) != param_3))
         || (uVar5 = thunk_FUN_008dd3c0(param_3), (uVar5 & 1) != 0)) {
        uVar5 = FUN_008e1810(param_2,0xf);
        if (((uVar5 & 1) == 0) || (uVar5 = FUN_00880a00(param_3,0xc), (uVar5 & 1) == 0)) {
          uVar5 = FUN_00932ae0(*(undefined8 *)(param_1 + 0xe0),3);
          if (((uVar5 & 1) != 0) && (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) == 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0xe0);
            uVar8 = *(undefined8 *)(param_1 + 0x58);
            uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
            uVar5 = FUN_00932cc0(uVar7,uVar8,uVar6,param_2,param_3);
            if ((uVar5 & 1) != 0) {
              if (param_4 == 0) {
                return 1;
              }
              uVar6 = 0x31a;
              goto LAB_009045f0;
            }
          }
          uVar5 = FUN_00932ae0(*(undefined8 *)(param_1 + 0xe0),2);
          if ((((uVar5 & 1) == 0) || (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) != 0)) ||
             (uVar5 = FUN_00880a00(param_3,9), (uVar5 & 1) == 0)) {
            if (param_3 == 0x2eb) {
              FUN_008e2d10(param_2);
              uVar5 = FUN_00888fc0();
              if ((uVar5 & 1) == 0) {
                if (param_4 == 0) {
                  return 1;
                }
                FUN_009c7ca0(param_4,1,0x199);
                uVar3 = FUN_008e0a00(param_2);
                uVar3 = uVar3 & 0xff;
LAB_0090453c:
                FUN_009c7cd0(param_4,uVar3);
                return 1;
              }
LAB_00904554:
              if ((*(char *)(*(long *)(*(long *)(param_1 + 0x58) + 0x88) + 0xa81) != '\0') &&
                 (uVar5 = FUN_00880a00(param_3,0xe), (uVar5 & 1) != 0)) {
                if (param_4 == 0) {
                  return 1;
                }
                uVar6 = 0x110;
LAB_009042b0:
                FUN_009c7ca0(param_4,1,uVar6);
                return 1;
              }
              uVar5 = FUN_008e1810(param_2,0x18);
              if ((((uVar5 & 1) == 0) || (uVar5 = FUN_008e0a10(param_2), (uVar5 & 1) != 0)) ||
                 (uVar5 = FUN_00880a00(param_3,8), (uVar5 & 1) == 0)) {
                return 0;
              }
              if (param_4 == 0) {
                return 1;
              }
              uVar6 = 0x744;
            }
            else {
              if ((param_3 != 0x232) || (uVar5 = FUN_008e2e20(param_2,0), (uVar5 & 1) != 0))
              goto LAB_00904554;
              if (param_4 == 0) {
                return 1;
              }
              uVar6 = 0x648;
            }
            FUN_009c7ca0(param_4,2,uVar6);
            param_3 = FUN_008e0a00(param_2);
            param_3 = param_3 & 0xff;
            goto LAB_00904618;
          }
          if (param_4 == 0) {
            return 1;
          }
          uVar6 = 0x5c0;
        }
        else {
          if (param_4 == 0) {
            return 1;
          }
          uVar6 = 0x4b4;
        }
      }
      else {
        if (param_4 == 0) {
          return 1;
        }
        uVar6 = 0x322;
      }
    }
    else {
      if (param_4 == 0) {
        return 1;
      }
      uVar6 = 0x30e;
    }
  }
  else {
    if (param_4 == 0) {
      return 1;
    }
    uVar6 = 0x302;
  }
LAB_009045f0:
  FUN_009c7ca0(param_4,2,uVar6);
  uVar1 = FUN_008e0a00(param_2);
  FUN_009c7cd0(param_4,uVar1);
LAB_00904618:
  FUN_009c7cd0(param_4,param_3);
  return 1;
}


