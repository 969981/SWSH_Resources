/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff0e0; name: FUN_007ff0e0
 */


/* WARNING: Removing unreachable block (ram,0x007ff124) */
/* WARNING: Type propagation algorithm not settling */

int FUN_007ff0e0(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    for (; (bVar3 = *param_1, pbVar4 = param_1, bVar3 != 0 && (bVar3 != 0x5c));
        param_1 = param_1 + 1) {
    }
  }
  else {
    bVar3 = *param_1;
    pbVar4 = param_2;
  }
joined_r0x007ff3a8:
  if (bVar3 == 0) {
switchD_007ff190_caseD_0:
    *pbVar4 = 0;
    return (int)pbVar4 - (int)param_2;
  }
  pbVar7 = param_1 + 1;
  if (bVar3 != 0x5c) goto LAB_007ff1f0;
  pbVar5 = pbVar4;
  switch(*pbVar7) {
  case 0:
    goto switchD_007ff190_caseD_0;
  default:
    goto switchD_007ff190_caseD_1;
  case 0x22:
    *pbVar4 = 0x22;
    bVar3 = param_1[2];
    param_1 = param_1 + 2;
    pbVar4 = pbVar4 + 1;
    goto joined_r0x007ff3a8;
  case 0x27:
    *pbVar4 = 0x27;
    bVar3 = param_1[2];
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    bVar2 = *pbVar7 - 0x30;
    pbVar7 = param_1 + 2;
    bVar3 = (*pbVar7 + bVar2 * '\b') - 0x30;
    if ((*pbVar7 & 0xf8) != 0x30) {
      pbVar7 = param_1 + 1;
      bVar3 = bVar2;
    }
    bVar2 = pbVar7[1];
    if ((bVar2 & 0xf8) == 0x30) {
      bVar3 = (bVar2 + bVar3 * '\b') - 0x30;
      pbVar7 = pbVar7 + 1;
    }
    pbVar5 = pbVar4 + 1;
    *pbVar4 = bVar3;
    goto switchD_007ff190_caseD_1;
  case 0x3f:
    *pbVar4 = 0x3f;
    bVar3 = param_1[2];
    break;
  case 0x58:
  case 0x78:
    if ((param_1[2] - 0x30 < 10) ||
       ((uVar6 = param_1[2] - 0x41, uVar6 < 0x26 &&
        ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)))) {
      uVar6 = 0;
      param_1 = param_1 + 2;
      uVar8 = (uint)*param_1;
      if (9 < *param_1 - 0x30) goto LAB_007ff26c;
      do {
        do {
          pbVar7 = param_1;
          uVar1 = uVar8 + 9;
          if (uVar8 < 0x3a) {
            uVar1 = uVar8;
          }
          uVar6 = uVar1 & 0xf | uVar6 << 4;
          param_1 = pbVar7 + 1;
          uVar8 = (uint)*param_1;
        } while (uVar8 - 0x30 < 10);
LAB_007ff26c:
      } while ((uVar8 - 0x41 < 0x26) &&
              ((1L << ((ulong)(uVar8 - 0x41) & 0x3f) & 0x3f0000003fU) != 0));
      *pbVar4 = (byte)uVar6;
      param_1 = pbVar7 + 1;
      bVar3 = *param_1;
      goto joined_r0x007ff33c;
    }
switchD_007ff190_caseD_1:
    param_1 = pbVar7 + 1;
    bVar3 = *param_1;
    pbVar4 = pbVar5;
    goto joined_r0x007ff3a8;
  case 0x5c:
    *pbVar4 = 0x5c;
    bVar3 = param_1[2];
    break;
  case 0x61:
    *pbVar4 = 7;
    bVar3 = param_1[2];
    break;
  case 0x62:
    *pbVar4 = 8;
    bVar3 = param_1[2];
    goto joined_r0x007ff33c;
  case 0x66:
    *pbVar4 = 0xc;
    bVar3 = param_1[2];
joined_r0x007ff33c:
    param_1 = param_1 + 2;
    goto joined_r0x007ff33c;
  case 0x6e:
    *pbVar4 = 10;
    bVar3 = param_1[2];
    goto joined_r0x007ff36c;
  case 0x72:
    *pbVar4 = 0xd;
    bVar3 = param_1[2];
joined_r0x007ff36c:
    param_1 = param_1 + 2;
    pbVar4 = pbVar4 + 1;
    goto joined_r0x007ff3a8;
  case 0x74:
    *pbVar4 = 9;
    param_1 = param_1 + 2;
    bVar3 = *param_1;
    goto joined_r0x007ff33c;
  case 0x76:
    *pbVar4 = 0xb;
    param_1 = param_1 + 2;
    bVar3 = *param_1;
    pbVar4 = pbVar4 + 1;
    goto joined_r0x007ff3a8;
  }
  param_1 = param_1 + 2;
joined_r0x007ff33c:
  pbVar4 = pbVar4 + 1;
  goto joined_r0x007ff3a8;
LAB_007ff1f0:
  *pbVar4 = bVar3;
  bVar3 = *pbVar7;
  param_1 = pbVar7;
  pbVar4 = pbVar4 + 1;
  goto joined_r0x007ff3a8;
}


