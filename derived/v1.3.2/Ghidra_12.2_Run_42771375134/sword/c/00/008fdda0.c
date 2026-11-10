/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fdda0; name: FUN_008fdda0
 */


undefined2 FUN_008fdda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  bVar1 = FUN_009141d0(param_3);
  uVar10 = FUN_008e1810(param_2,0x13);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  if (6 < bVar1) {
    return 0;
  }
  if (*(short *)(param_1 + 0x530) == 0) {
LAB_008fde50:
    uVar4 = 0xff;
LAB_008fde54:
    uVar5 = 0xff;
joined_r0x008fdef4:
    if (4 < bVar1) goto LAB_008fde64;
LAB_008fdef8:
    if (*(short *)(param_1 + 0x532) == 0) {
      uVar6 = 0xff;
      if (2 < bVar1) goto LAB_008fe034;
LAB_008fdf20:
      if (*(short *)(param_1 + 0x534) == 0) {
        uVar7 = 0xff;
        uVar8 = 0xff;
        if (bVar1 < 2) goto LAB_008fe094;
LAB_008fe0ac:
        cVar2 = (char)uVar5;
        goto joined_r0x008fe0b4;
      }
      uVar10 = FUN_008ec410();
      if ((uVar10 & 1) == 0) {
        uVar11 = FUN_008ec3f0(*(undefined2 *)(param_1 + 0x534),0x31);
        if ((int)uVar11 == 0) {
          uVar10 = FUN_008fe160(uVar11,*(undefined2 *)(param_1 + 0x534),param_2);
          uVar3 = *(undefined2 *)(param_1 + 0x534);
          if ((uVar10 & 1) != 0) goto LAB_008fe074;
          uVar10 = FUN_008fe2c0(uVar3,uVar3,param_2);
          if ((uVar10 & 1) != 0) goto LAB_008fe070;
        }
        else {
          uVar7 = FUN_008e12a0(param_2,0xd);
          uVar8 = FUN_008ec2a0(param_2,4,0);
          if (uVar7 <= uVar8) {
LAB_008fe070:
            uVar3 = *(undefined2 *)(param_1 + 0x534);
LAB_008fe074:
            uVar7 = FUN_008dd4b0(uVar3);
            goto LAB_008fe07c;
          }
        }
        uVar7 = 0xff;
      }
      else {
        uVar7 = 0;
      }
LAB_008fe07c:
      uVar8 = uVar7;
      if ((char)uVar7 <= (char)uVar5) {
        uVar8 = uVar5;
      }
      uVar5 = uVar8;
      uVar8 = uVar7;
      if (1 < bVar1) goto LAB_008fe0ac;
LAB_008fe094:
      uVar7 = uVar8;
      if (*(short *)(param_1 + 0x536) == 0) goto LAB_008fe0ac;
      uVar10 = FUN_008ec410();
      if ((uVar10 & 1) == 0) {
        uVar11 = FUN_008ec3f0(*(undefined2 *)(param_1 + 0x536),0x31);
        if ((int)uVar11 == 0) {
          uVar10 = FUN_008fe160(uVar11,*(undefined2 *)(param_1 + 0x536),param_2);
          uVar3 = *(undefined2 *)(param_1 + 0x536);
          if ((uVar10 & 1) != 0) goto LAB_008fe128;
          uVar10 = FUN_008fe2c0(uVar3,uVar3,param_2);
          if ((uVar10 & 1) != 0) goto LAB_008fe124;
        }
        else {
          uVar8 = FUN_008e12a0(param_2,0xd);
          uVar9 = FUN_008ec2a0(param_2,4,0);
          if (uVar8 <= uVar9) {
LAB_008fe124:
            uVar3 = *(undefined2 *)(param_1 + 0x536);
LAB_008fe128:
            uVar8 = FUN_008dd4b0(uVar3);
            goto LAB_008fe12c;
          }
        }
        uVar8 = 0xff;
      }
      else {
        uVar8 = 0;
      }
LAB_008fe12c:
      uVar9 = uVar8;
      if ((char)uVar8 <= (char)uVar5) {
        uVar9 = uVar5;
      }
      cVar2 = (char)uVar9;
      uVar5 = uVar9;
    }
    else {
      uVar10 = FUN_008ec410();
      if ((uVar10 & 1) == 0) {
        uVar11 = FUN_008ec3f0(*(undefined2 *)(param_1 + 0x532),0x31);
        if ((int)uVar11 == 0) {
          uVar10 = FUN_008fe160(uVar11,*(undefined2 *)(param_1 + 0x532),param_2);
          uVar3 = *(undefined2 *)(param_1 + 0x532);
          if ((uVar10 & 1) != 0) goto LAB_008fe014;
          uVar10 = FUN_008fe2c0(uVar3,uVar3,param_2);
          if ((uVar10 & 1) != 0) goto LAB_008fe010;
        }
        else {
          uVar6 = FUN_008e12a0(param_2,0xd);
          uVar7 = FUN_008ec2a0(param_2,4,0);
          if (uVar6 <= uVar7) {
LAB_008fe010:
            uVar3 = *(undefined2 *)(param_1 + 0x532);
LAB_008fe014:
            uVar6 = FUN_008dd4b0(uVar3);
            goto LAB_008fe01c;
          }
        }
        uVar6 = 0xff;
      }
      else {
        uVar6 = 0;
      }
LAB_008fe01c:
      uVar7 = uVar6;
      if ((char)uVar6 <= (char)uVar5) {
        uVar7 = uVar5;
      }
      uVar5 = uVar7;
      if (bVar1 < 3) goto LAB_008fdf20;
LAB_008fe034:
      uVar7 = 0xff;
      cVar2 = (char)uVar5;
joined_r0x008fe0b4:
      uVar8 = 0xff;
    }
  }
  else {
    uVar10 = FUN_008ec410();
    if ((uVar10 & 1) == 0) {
      uVar11 = FUN_008ec3f0(*(undefined2 *)(param_1 + 0x530),0x31);
      if ((int)uVar11 == 0) {
        uVar10 = FUN_008fe160(uVar11,*(undefined2 *)(param_1 + 0x530),param_2);
        uVar3 = *(undefined2 *)(param_1 + 0x530);
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_008fe2c0(uVar3,uVar3,param_2);
          if ((uVar10 & 1) == 0) goto LAB_008fde50;
          goto LAB_008fded8;
        }
      }
      else {
        uVar4 = FUN_008e12a0(param_2,0xd);
        uVar5 = FUN_008ec2a0(param_2,4,0);
        if (uVar5 < uVar4) goto LAB_008fde50;
LAB_008fded8:
        uVar3 = *(undefined2 *)(param_1 + 0x530);
      }
      cVar2 = FUN_008dd4b0(uVar3);
      uVar4 = (uint)cVar2;
      uVar5 = uVar4;
      if ((int)uVar4 < 0) goto LAB_008fde54;
      goto joined_r0x008fdef4;
    }
    uVar4 = 0;
    uVar5 = 0;
    if (bVar1 < 5) goto LAB_008fdef8;
LAB_008fde64:
    uVar8 = 0xff;
    uVar7 = 0xff;
    uVar6 = 0xff;
    cVar2 = (char)uVar5;
  }
  if (cVar2 < '\0') {
LAB_008fe140:
    uVar3 = 0;
  }
  else {
    if ((uVar5 & 0xff) == (uVar4 & 0xff)) {
      lVar12 = 0;
    }
    else if ((uVar5 & 0xff) == (uVar6 & 0xff)) {
      lVar12 = 1;
    }
    else if ((uVar5 & 0xff) == (uVar7 & 0xff)) {
      lVar12 = 2;
    }
    else {
      if ((uVar5 & 0xff) != (uVar8 & 0xff)) goto LAB_008fe140;
      lVar12 = 3;
    }
    param_1 = param_1 + lVar12 * 2;
    uVar3 = *(undefined2 *)(param_1 + 0x530);
    *(undefined2 *)(param_1 + 0x530) = 0;
  }
  return uVar3;
}


