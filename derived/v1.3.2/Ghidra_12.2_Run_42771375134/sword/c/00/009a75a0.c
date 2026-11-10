/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a75a0; name: FUN_009a75a0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_009a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                ushort param_5)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  
  if (0x1eb < param_5) {
    switch(param_5) {
    case 0x1ec:
      iVar7 = FUN_008e12a0(param_4,0x19);
      if (99 < iVar7) {
        return 0x4000;
      }
      break;
    case 0x1ed:
      uVar6 = FUN_008e12a0(param_3,0x11);
      uVar4 = FUN_008e12a0(param_4,0x11);
      if ((uVar4 & 0xff) <= (uVar6 >> 2 & 0x3f)) {
        return 0x8000;
      }
      if ((uVar4 & 0xff) <= (uVar6 & 0xff) >> 1) {
        return 0x4000;
      }
      iVar7 = 0x2000;
      if ((uVar6 & 0xff) <= (uVar4 & 0xff)) {
        iVar7 = 0x1000;
      }
      return iVar7;
    case 0x1ee:
      uVar8 = FUN_008f35c0(param_1,1);
joined_r0x009a78cc:
      if ((uVar8 & 1) != 0) {
        return 0x4000;
      }
      break;
    case 0x1ef:
    case 0x1f1:
      break;
    case 0x1f0:
      sVar3 = FUN_008e1290(param_3);
      iVar7 = FUN_008e12a0(param_3,0x14);
      sVar1 = FUN_008e1290(param_4);
      iVar5 = FUN_008e12a0(param_4,0x14);
      if ((sVar3 == sVar1) && (iVar7 != iVar5)) {
        return 0x8000;
      }
      break;
    case 0x1f2:
      uVar2 = FUN_008e1290(param_4);
      FUN_00864d20(uVar2,*(undefined1 *)(param_4 + 0x33d));
      uVar6 = FUN_00864d90();
      if ((uVar6 & 0xff) != 0) {
        uVar4 = 0;
        do {
          iVar7 = FUN_00864da0(uVar4);
          if ((iVar7 == 8) && (sVar3 = FUN_00864db0(uVar4), sVar3 == 0x51)) {
            return 0x4000;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xff) < (uVar6 & 0xff));
      }
      break;
    default:
      if (param_5 == 0x240) {
        uVar8 = FUN_008e1920(param_4,1);
        goto joined_r0x009a78cc;
      }
      if (param_5 == 0x353) {
        uVar8 = FUN_009a7970(param_4);
        iVar7 = 0x5000;
        if ((uVar8 & 1) == 0) {
          iVar7 = 0x19a;
        }
        return iVar7;
      }
    }
    goto switchD_009a75e8_caseD_4;
  }
  iVar7 = 0x1800;
  switch(param_5) {
  case 2:
    return 0x2000;
  case 3:
    goto switchD_009a75e8_caseD_3;
  case 6:
    uVar8 = FUN_008e29c0(param_4,10);
    if ((uVar8 & 1) != 0) {
      return 0x3800;
    }
    uVar8 = FUN_008e29c0(param_4,6);
    goto joined_r0x009a783c;
  case 7:
    uVar8 = FUN_008f35c0(param_1,1);
    if ((uVar8 & 1) != 0) {
      return 0x3800;
    }
    uVar8 = FUN_008f35c0(param_1,2);
    goto joined_r0x009a783c;
  case 8:
    uVar6 = FUN_008e12a0(param_4,0x11);
    if ((uVar6 & 0xfffe) < 0x1e) {
      uVar6 = 0x29 - uVar6;
      if (0x27 < (uVar6 & 0xffff)) {
        uVar6 = 0x28;
      }
      fVar12 = -0.5;
      if ((uVar6 & 0xffff) != 0) {
        fVar12 = 0.5;
      }
      return (int)(fVar12 + (float)((uVar6 & 0xffff) << 0xc)) / 10;
    }
    break;
  case 9:
    uVar8 = FUN_008f9000(param_1,param_4);
joined_r0x009a783c:
    if ((uVar8 & 1) != 0) {
      return 0x3800;
    }
    break;
  case 10:
    uVar10 = FUN_00931a90(param_2);
    iVar7 = FUN_00930550(uVar10,0);
    iVar7 = iVar7 * 0x4cd + 0x1000;
    if (0x3fff < iVar7) {
      iVar7 = 0x4000;
    }
    return iVar7;
  case 0xd:
    pcVar9 = (char *)FUN_008f8f60(param_1);
    iVar7 = FUN_0102ba70();
    if (*pcVar9 != '\0') {
      return 0x3000;
    }
    if (iVar7 - 2U < 3) {
      return 0x3000;
    }
    break;
  case 0xf:
    uVar10 = FUN_00931a90(param_2);
    lVar11 = FUN_00930550(uVar10,0);
    if (lVar11 == 0) {
      return 0x5000;
    }
  }
switchD_009a75e8_caseD_4:
  iVar7 = 0x1000;
switchD_009a75e8_caseD_3:
  return iVar7;
}


