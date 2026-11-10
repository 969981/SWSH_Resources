/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b6180; name: FUN_014b6180
 */


undefined8 FUN_014b6180(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  iVar3 = FUN_00888630(param_2,0x11);
  if (iVar3 != 1) {
    return 0;
  }
  iVar3 = FUN_0087b560(param_1);
  iVar4 = FUN_00888630(param_2,0x1a);
  if ((((iVar3 != 2) || (iVar4 == 0)) &&
      ((iVar4 = FUN_00888630(param_2,0x1b), iVar3 != 5 || (iVar4 == 0)))) &&
     ((((iVar4 = FUN_00888630(param_2,0x1c), iVar3 != 4 || (iVar4 == 0)) &&
       ((iVar4 = FUN_00888630(param_2,0x1d), iVar3 != 3 || (iVar4 == 0)))) &&
      ((iVar4 = FUN_00888630(param_2,0x1e), iVar3 != 1 || (iVar4 == 0)))))) {
    uVar5 = FUN_0087afd0(param_1);
    iVar3 = FUN_00888630(param_2,0x22);
    if (((iVar3 == 0) && (iVar3 = FUN_00888630(param_2,0x23), iVar3 == 0)) ||
       (iVar3 = FUN_00888630(param_2,0x24), iVar3 != 0)) {
      iVar3 = FUN_00888630(param_2,0x31);
      if (((uVar5 != 0) && (iVar3 != 0)) && (uVar6 = FUN_0087ac70(param_1), uVar5 < uVar6)) {
        return 1;
      }
    }
    else if (uVar5 == 0) {
      return 1;
    }
    iVar3 = FUN_00888630(param_2,0x24);
    if (((iVar3 == 0) || (uVar5 = FUN_0087a5f0(param_1), 99 < uVar5)) &&
       (((iVar3 = FUN_00888630(param_2,0x2d), iVar3 == 0 &&
         (iVar3 = FUN_00888630(param_2,0x2e), iVar3 == 0)) ||
        ((uVar5 = FUN_0087b840(param_1,param_3), 2 < uVar5 ||
         (uVar5 = FUN_0087b620(param_1,param_3), uVar5 < 5)))))) {
      iVar3 = FUN_00888630(param_2,0x2f);
      if ((iVar3 != 0) && (uVar5 = FUN_0087b890(param_1), (param_3 & 0xff) < (uVar5 & 0xff))) {
        uVar5 = FUN_0087b590(param_1,param_3);
        uVar6 = FUN_0087b620(param_1,param_3);
        if (uVar5 < uVar6) {
          return 1;
        }
      }
      iVar3 = FUN_00888630(param_2,0x30);
      if (iVar3 != 0) {
        cVar1 = FUN_0087b890(param_1);
        if (cVar1 != '\0') {
          uVar5 = FUN_0087b590(param_1,0);
          uVar6 = FUN_0087b620(param_1,0);
          if (uVar5 < uVar6) {
            return 1;
          }
        }
        bVar2 = FUN_0087b890(param_1);
        if (1 < bVar2) {
          uVar5 = FUN_0087b590(param_1,1);
          uVar6 = FUN_0087b620(param_1,1);
          if (uVar5 < uVar6) {
            return 1;
          }
        }
        bVar2 = FUN_0087b890(param_1);
        if (2 < bVar2) {
          uVar5 = FUN_0087b590(param_1,2);
          uVar6 = FUN_0087b620(param_1,2);
          if (uVar5 < uVar6) {
            return 1;
          }
        }
        bVar2 = FUN_0087b890(param_1);
        if (3 < bVar2) {
          uVar5 = FUN_0087b590(param_1,3);
          uVar6 = FUN_0087b620(param_1,3);
          if (uVar5 < uVar6) {
            return 1;
          }
        }
      }
      uVar6 = FUN_0087a6e0(param_1,0);
      uVar7 = FUN_0087a6e0(param_1,1);
      uVar8 = FUN_0087a6e0(param_1,2);
      uVar9 = FUN_0087a6e0(param_1,5);
      uVar10 = FUN_0087a6e0(param_1,3);
      uVar11 = FUN_0087a6e0(param_1,4);
      FUN_00888630(param_2,0x38);
      uVar5 = uVar7 + uVar6 + uVar8 + uVar9 + uVar10 + uVar11;
      iVar3 = FUN_00888630(param_2,0x32);
      if (iVar3 != 0) {
        iVar3 = FUN_00888630(param_2,0x3c);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            if (0 < (int)uVar6) {
              return 1;
            }
            uVar12 = FUN_014b7370(param_1,param_2);
            if ((uVar12 & 1) != 0) {
              return 1;
            }
          }
        }
        else {
          iVar3 = FUN_008783b0(param_1);
          if (((iVar3 != 0x124) && (uVar6 < 0xfc)) && (uVar5 < 0x1fe)) {
            return 1;
          }
        }
      }
      iVar3 = FUN_00888630(param_2,0x33);
      if (iVar3 != 0) {
        iVar3 = FUN_00888630(param_2,0x3d);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            if (0 < (int)uVar7) {
              return 1;
            }
            uVar12 = FUN_014b7370(param_1,param_2);
            if ((uVar12 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar7 < 0xfc) && (uVar5 < 0x1fe)) {
          return 1;
        }
      }
      iVar3 = FUN_00888630(param_2,0x34);
      if (iVar3 != 0) {
        iVar3 = FUN_00888630(param_2,0x3e);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            if (0 < (int)uVar8) {
              return 1;
            }
            uVar12 = FUN_014b7370(param_1,param_2);
            if ((uVar12 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar8 < 0xfc) && (uVar5 < 0x1fe)) {
          return 1;
        }
      }
      iVar3 = FUN_00888630(param_2,0x35);
      if (iVar3 != 0) {
        iVar3 = FUN_00888630(param_2,0x3f);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            if (0 < (int)uVar9) {
              return 1;
            }
            uVar12 = FUN_014b7370(param_1,param_2);
            if ((uVar12 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar9 < 0xfc) && (uVar5 < 0x1fe)) {
          return 1;
        }
      }
      iVar3 = FUN_00888630(param_2,0x36);
      if (iVar3 != 0) {
        iVar3 = FUN_00888630(param_2,0x40);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            if (0 < (int)uVar10) {
              return 1;
            }
            uVar12 = FUN_014b7370(param_1,param_2);
            if ((uVar12 & 1) != 0) {
              return 1;
            }
          }
        }
        else if ((uVar10 < 0xfc) && (uVar5 < 0x1fe)) {
          return 1;
        }
      }
      iVar3 = FUN_00888630(param_2,0x37);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00888630(param_2,0x41);
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          return 0;
        }
        if (((int)uVar11 < 1) && (uVar12 = FUN_014b7370(param_1,param_2), (uVar12 & 1) == 0)) {
          return 0;
        }
      }
      else {
        if (0xfb < uVar11) {
          return 0;
        }
        if (0x1fd < uVar5) {
          return 0;
        }
      }
    }
  }
  return 1;
}


