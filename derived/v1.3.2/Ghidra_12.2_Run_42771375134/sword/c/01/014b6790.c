/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b6790; name: FUN_014b6790
 */


int FUN_014b6790(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint local_64;
  
  iVar5 = FUN_00888630(param_2,0x11);
  if (iVar5 != 1) goto LAB_014b72c8;
  uVar6 = FUN_0087b560(param_1);
  switch(uVar6) {
  case 1:
    iVar5 = FUN_00888630(param_2,0x1e);
    uVar9 = (uint)(iVar5 == 0);
    uVar14 = uVar9;
    goto joined_r0x014b68c8;
  case 2:
    iVar5 = FUN_00888630(param_2,0x1a);
    uVar9 = (uint)(iVar5 == 0);
    uVar14 = uVar9 * 2;
    break;
  case 3:
    iVar5 = FUN_00888630(param_2,0x1d);
    uVar14 = 3;
    goto LAB_014b68b8;
  case 4:
    iVar5 = FUN_00888630(param_2,0x1c);
    uVar9 = (uint)(iVar5 == 0);
    uVar14 = uVar9 * 4;
    break;
  case 5:
    iVar5 = FUN_00888630(param_2,0x1b);
    uVar14 = 5;
LAB_014b68b8:
    if (iVar5 != 0) {
      uVar14 = 0;
    }
    uVar9 = (uint)(iVar5 == 0);
joined_r0x014b68c8:
    uVar9 = uVar9 ^ 1;
    if (uVar6 != uVar14) goto LAB_014b6894;
    goto LAB_014b68cc;
  default:
    uVar9 = 0;
    iVar5 = 0;
    goto LAB_014b68d0;
  }
  uVar9 = uVar9 ^ 1;
  if (uVar6 == uVar14) {
LAB_014b68cc:
    iVar5 = 0;
  }
  else {
LAB_014b6894:
    FUN_0087b580(param_1);
    iVar5 = 1;
  }
LAB_014b68d0:
  iVar7 = FUN_0087afd0(param_1);
  uVar6 = FUN_0087ac70(param_1);
  iVar8 = FUN_00888630(param_2,0x22);
  if (((iVar8 == 0) && (iVar8 = FUN_00888630(param_2,0x23), iVar8 == 0)) ||
     (iVar8 = FUN_00888630(param_2,0x24), iVar8 != 0)) {
    iVar8 = FUN_00888630(param_2,0x31);
    if (((iVar8 != 0) && (uVar9 = 1, iVar7 != 0)) && (iVar7 < (int)uVar6)) {
      uVar9 = FUN_00888630(param_2,0x42);
      if (uVar6 != 1) {
        if (uVar9 == 0xfd) goto LAB_014b69a4;
        if (uVar9 != 0xff) {
          if (uVar9 == 0xfe) goto LAB_014b6964;
LAB_014b699c:
          uVar6 = uVar9;
        }
      }
      goto LAB_014b69a8;
    }
  }
  else {
    if (iVar7 == 0) {
      uVar9 = FUN_00888630(param_2,0x42);
      if (uVar6 != 1) {
        if (uVar9 == 0xfd) {
LAB_014b69a4:
          uVar6 = uVar6 >> 2;
        }
        else if (uVar9 != 0xff) {
          if (uVar9 != 0xfe) goto LAB_014b699c;
LAB_014b6964:
          uVar6 = uVar6 >> 1;
        }
      }
LAB_014b69a8:
      FUN_0087b0a0(param_1,uVar6);
      iVar5 = 1;
    }
    uVar9 = 1;
  }
  iVar7 = FUN_0087a5f0(param_1);
  iVar8 = FUN_00888630(param_2,0x24);
  if (iVar8 != 0) {
    if (iVar7 < 100) {
      iVar5 = 1;
      FUN_0087b1d0(param_1,1);
    }
    uVar9 = 1;
  }
  iVar7 = FUN_00888630(param_2,0x25);
  iVar8 = FUN_00888630(param_2,0x2d);
  if (iVar8 == 0) {
    iVar8 = FUN_00888630(param_2,0x2e);
    if (iVar8 != 0) {
      uVar6 = FUN_0087b840(param_1,param_3);
      if ((uVar6 != 3) && (uVar9 = FUN_0087b620(param_1,param_3), 4 < uVar9)) {
        iVar5 = uVar6 + 3;
        if (uVar6 < 0xfffffffd) {
          iVar5 = 3;
        }
        goto LAB_014b6aac;
      }
      goto LAB_014b6ad8;
    }
    uVar9 = uVar9 | iVar7 != 0;
    iVar7 = FUN_00888630(param_2,0x2f);
    if (iVar7 == 0) goto LAB_014b6b58;
LAB_014b6aec:
    uVar10 = FUN_00888630(param_2,0x43);
    uVar6 = FUN_0087b890(param_1);
    if ((param_3 & 0xffff) < (uVar6 & 0xff)) {
      uVar6 = FUN_0087b590(param_1,param_3);
      uVar9 = FUN_0087b620(param_1,param_3);
      if (uVar6 < uVar9) {
LAB_014b6ccc:
        FUN_0087b770(param_1,param_3,uVar10);
        iVar5 = 1;
      }
    }
LAB_014b6cd4:
    uVar9 = 1;
  }
  else {
    iVar7 = FUN_0087b840(param_1,param_3);
    if ((iVar7 != 3) && (uVar9 = FUN_0087b620(param_1,param_3), 4 < uVar9)) {
      iVar5 = 3;
      if (iVar7 + 1U < 3) {
        iVar5 = iVar7 + 1;
      }
LAB_014b6aac:
      FUN_0087b860(param_1,param_3,iVar5);
      iVar5 = FUN_0087b620(param_1,param_3);
      FUN_0087b770(param_1,param_3,iVar5 - uVar9);
      iVar5 = 1;
    }
LAB_014b6ad8:
    uVar9 = 1;
    iVar7 = FUN_00888630(param_2,0x2f);
    if (iVar7 != 0) goto LAB_014b6aec;
LAB_014b6b58:
    iVar7 = FUN_00888630(param_2,0x30);
    if (iVar7 != 0) {
      uVar10 = FUN_00888630(param_2,0x43);
      cVar3 = FUN_0087b890(param_1);
      if (cVar3 != '\0') {
        uVar6 = FUN_0087b590(param_1,0);
        uVar9 = FUN_0087b620(param_1,0);
        if (uVar6 < uVar9) {
          FUN_0087b770(param_1,0,uVar10);
          iVar5 = 1;
        }
      }
      uVar10 = FUN_00888630(param_2,0x43);
      bVar4 = FUN_0087b890(param_1);
      if (1 < bVar4) {
        uVar6 = FUN_0087b590(param_1,1);
        uVar9 = FUN_0087b620(param_1,1);
        if (uVar6 < uVar9) {
          iVar5 = 1;
          FUN_0087b770(param_1,1,uVar10);
        }
      }
      uVar10 = FUN_00888630(param_2,0x43);
      bVar4 = FUN_0087b890(param_1);
      if (2 < bVar4) {
        uVar6 = FUN_0087b590(param_1,2);
        uVar9 = FUN_0087b620(param_1,2);
        if (uVar6 < uVar9) {
          FUN_0087b770(param_1,2,uVar10);
          iVar5 = 1;
        }
      }
      uVar10 = FUN_00888630(param_2,0x43);
      bVar4 = FUN_0087b890(param_1);
      if (3 < bVar4) {
        uVar6 = FUN_0087b590(param_1,3);
        uVar9 = FUN_0087b620(param_1,3);
        if (uVar9 <= uVar6) goto LAB_014b6cd4;
        param_3 = 3;
        goto LAB_014b6ccc;
      }
      goto LAB_014b6cd4;
    }
  }
  local_64 = FUN_0087a6e0(param_1,0);
  uVar11 = FUN_0087a6e0(param_1,1);
  uVar12 = FUN_0087a6e0(param_1,2);
  uVar13 = FUN_0087a6e0(param_1,5);
  uVar14 = FUN_0087a6e0(param_1,3);
  uVar6 = FUN_0087a6e0(param_1,4);
  iVar7 = FUN_00888630(param_2,0x38);
  iVar8 = FUN_00888630(param_2,0x32);
  if ((iVar8 != 0) &&
     ((iVar8 = FUN_00888630(param_2,0x3c), iVar8 < 1 ||
      (iVar15 = FUN_008783b0(param_1), iVar15 != 0x124)))) {
    if ((local_64 == 0) && (iVar8 < 0)) {
      local_64 = 0;
    }
    else if ((local_64 == 0xfc) && (0 < iVar8)) {
      local_64 = 0xfc;
    }
    else if ((((local_64 < 0xfc) || (iVar7 != 0)) || (iVar8 < 1)) &&
            ((iVar15 = uVar6 + uVar14 + uVar11 + uVar12 + uVar13, iVar15 + local_64 < 0x1fe ||
             (iVar8 < 1)))) {
      uVar1 = iVar8 + local_64;
      uVar2 = 0xfc;
      if ((uVar1 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      }
      uVar1 = 0x1fe - iVar15;
      if (uVar2 + iVar15 < 0x1ff) {
        uVar1 = uVar2;
      }
      if (uVar1 != 0xffffffff) {
        FUN_0087a8a0(param_1,0,uVar1);
        iVar5 = 1;
        local_64 = uVar1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  iVar8 = FUN_00888630(param_2,0x33);
  if (iVar8 != 0) {
    iVar8 = FUN_00888630(param_2,0x3d);
    if ((uVar11 == 0) && (iVar8 < 0)) {
      uVar11 = 0;
    }
    else if ((uVar11 == 0xfc) && (0 < iVar8)) {
      uVar11 = 0xfc;
    }
    else if ((((uVar11 < 0xfc) || (iVar7 != 0)) || (iVar8 < 1)) &&
            ((iVar15 = uVar6 + uVar14 + uVar12 + uVar13 + local_64, iVar15 + uVar11 < 0x1fe ||
             (iVar8 < 1)))) {
      uVar1 = iVar8 + uVar11;
      uVar2 = 0xfc;
      if ((uVar1 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      }
      uVar1 = 0x1fe - iVar15;
      if (uVar2 + iVar15 < 0x1ff) {
        uVar1 = uVar2;
      }
      if (uVar1 != 0xffffffff) {
        iVar5 = 1;
        FUN_0087a8a0(param_1,1,uVar1);
        uVar11 = uVar1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  iVar8 = FUN_00888630(param_2,0x34);
  if (iVar8 != 0) {
    iVar8 = FUN_00888630(param_2,0x3e);
    if ((uVar12 == 0) && (iVar8 < 0)) {
      uVar12 = 0;
    }
    else if ((uVar12 == 0xfc) && (0 < iVar8)) {
      uVar12 = 0xfc;
    }
    else if ((((uVar12 < 0xfc) || (iVar7 != 0)) || (iVar8 < 1)) &&
            ((iVar15 = uVar6 + uVar14 + uVar13 + local_64 + uVar11, iVar15 + uVar12 < 0x1fe ||
             (iVar8 < 1)))) {
      uVar1 = iVar8 + uVar12;
      uVar2 = 0xfc;
      if ((uVar1 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      }
      uVar1 = 0x1fe - iVar15;
      if (uVar2 + iVar15 < 0x1ff) {
        uVar1 = uVar2;
      }
      if (uVar1 != 0xffffffff) {
        FUN_0087a8a0(param_1,2,uVar1);
        iVar5 = 1;
        uVar12 = uVar1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  iVar8 = FUN_00888630(param_2,0x35);
  if (iVar8 != 0) {
    iVar8 = FUN_00888630(param_2,0x3f);
    if ((uVar13 == 0) && (iVar8 < 0)) {
      uVar13 = 0;
    }
    else if ((uVar13 == 0xfc) && (0 < iVar8)) {
      uVar13 = 0xfc;
    }
    else if ((((uVar13 < 0xfc) || (iVar7 != 0)) || (iVar8 < 1)) &&
            ((iVar15 = uVar6 + uVar14 + local_64 + uVar11 + uVar12, iVar15 + uVar13 < 0x1fe ||
             (iVar8 < 1)))) {
      uVar1 = iVar8 + uVar13;
      uVar2 = 0xfc;
      if ((uVar1 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      }
      uVar1 = 0x1fe - iVar15;
      if (uVar2 + iVar15 < 0x1ff) {
        uVar1 = uVar2;
      }
      if (uVar1 != 0xffffffff) {
        FUN_0087a8a0(param_1,5,uVar1);
        iVar5 = 1;
        uVar13 = uVar1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  iVar8 = FUN_00888630(param_2,0x36);
  if (iVar8 != 0) {
    iVar8 = FUN_00888630(param_2,0x40);
    if ((uVar14 == 0) && (iVar8 < 0)) {
      uVar14 = 0;
    }
    else if ((uVar14 == 0xfc) && (0 < iVar8)) {
      uVar14 = 0xfc;
    }
    else if ((((uVar14 < 0xfc) || (iVar7 != 0)) || (iVar8 < 1)) &&
            ((iVar15 = local_64 + uVar6 + uVar11 + uVar12 + uVar13, iVar15 + uVar14 < 0x1fe ||
             (iVar8 < 1)))) {
      uVar1 = iVar8 + uVar14;
      uVar2 = 0xfc;
      if ((uVar1 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      }
      uVar1 = 0x1fe - iVar15;
      if (uVar2 + iVar15 < 0x1ff) {
        uVar1 = uVar2;
      }
      if (uVar1 != 0xffffffff) {
        FUN_0087a8a0(param_1,3,uVar1);
        iVar5 = 1;
        uVar14 = uVar1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  iVar8 = FUN_00888630(param_2,0x37);
  if (iVar8 != 0) {
    iVar8 = FUN_00888630(param_2,0x41);
    if ((((uVar6 != 0) || (-1 < iVar8)) && ((uVar6 != 0xfc || (iVar8 < 1)))) &&
       ((((uVar6 < 0xfc || (iVar7 != 0)) || (iVar8 < 1)) &&
        ((iVar15 = uVar11 + local_64 + uVar12 + uVar13 + uVar14, iVar15 + uVar6 < 0x1fe ||
         (iVar8 < 1)))))) {
      uVar6 = iVar8 + uVar6;
      uVar14 = 0xfc;
      if ((uVar6 < 0xfd || iVar8 < 1) || iVar7 != 0) {
        uVar14 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
      }
      uVar6 = 0x1fe - iVar15;
      if (uVar14 + iVar15 < 0x1ff) {
        uVar6 = uVar14;
      }
      if (uVar6 != 0xffffffff) {
        FUN_0087a8a0(param_1,4);
        iVar5 = 1;
      }
    }
    uVar9 = uVar9 | 0 < iVar8;
  }
  if ((iVar5 == 0) && (uVar9 != 0)) {
LAB_014b72c8:
    iVar5 = 0;
  }
  else {
    FUN_014a9d20(param_1,param_2);
  }
  return iVar5;
}


