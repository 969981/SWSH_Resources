/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed900; name: FUN_005ed900
 */


undefined8 FUN_005ed900(undefined4 param_1,float *param_2,float *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_30;
  float local_28;
  float local_14;
  
  fVar8 = DAT_01d4c154;
  uVar2 = 0;
  switch(param_1) {
  case 2:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    break;
  case 3:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    param_2[2] = (float)(int)param_3[2];
    param_2[3] = (float)(int)param_3[3];
    break;
  case 4:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    param_2[2] = (float)(int)param_3[2];
    param_2[3] = (float)(int)param_3[3];
    break;
  default:
    goto switchD_005ed938_caseD_5;
  case 6:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    break;
  case 7:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    param_2[2] = (float)(int)param_3[2];
    break;
  case 8:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    param_2[2] = (float)(int)param_3[2];
    break;
  case 10:
    FUN_00694f30(&local_30,param_3);
    *(undefined8 *)param_2 = local_30;
    break;
  case 0xb:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c178;
    goto LAB_005edb5c;
  case 0xc:
  case 0xe:
    *(ushort *)param_2 = (ushort)(int)*param_3;
    *(ushort *)((long)param_2 + 2) = (ushort)(int)param_3[1];
    *(ushort *)(param_2 + 1) = (ushort)(int)param_3[2];
    *(ushort *)((long)param_2 + 6) = (ushort)(int)param_3[3];
    break;
  case 0xd:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c174;
LAB_005edb5c:
    *(ushort *)param_2 = (ushort)(int)(fVar7 * fVar8);
    *(ushort *)((long)param_2 + 2) = (ushort)(int)(param_3[1] * fVar8);
    *(ushort *)(param_2 + 1) = (ushort)(int)(param_3[2] * fVar8);
    *(ushort *)((long)param_2 + 6) = (ushort)(int)(param_3[3] * fVar8);
    break;
  case 0x10:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    break;
  case 0x11:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    break;
  case 0x12:
    *param_2 = (float)(int)*param_3;
    param_2[1] = (float)(int)param_3[1];
    break;
  case 0x18:
    fVar7 = *param_3 / DAT_01d4c390;
    fVar10 = param_3[1] / DAT_01d4c390;
    fVar9 = param_3[2] / DAT_01d4c390;
    fVar8 = param_3[3] / 3.0;
    goto LAB_005edc38;
  case 0x19:
    fVar7 = *param_3;
    fVar10 = param_3[1];
    fVar9 = param_3[2];
    fVar8 = param_3[3];
LAB_005edc38:
    *param_2 = (float)((int)fVar7 + (int)fVar10 * 0x400 + (int)fVar9 * 0x100000 +
                      (int)fVar8 * 0x40000000);
    break;
  case 0x1a:
    local_30 = *(undefined8 *)param_3;
    local_28 = param_3[2];
    FUN_00694de0(&local_14,&local_30);
    *param_2 = local_14;
    break;
  case 0x1c:
  case 0x1d:
    fVar7 = *param_3;
    goto LAB_005edc80;
  case 0x1e:
  case 0x20:
    *(char *)param_2 = (char)(int)*param_3;
    *(char *)((long)param_2 + 1) = (char)(int)param_3[1];
    *(char *)((long)param_2 + 2) = (char)(int)param_3[2];
    *(char *)((long)param_2 + 3) = (char)(int)param_3[3];
    break;
  case 0x1f:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c2a8;
LAB_005edc80:
    *(char *)param_2 = (char)(int)(fVar7 * fVar8);
    *(char *)((long)param_2 + 1) = (char)(int)(param_3[1] * fVar8);
    *(char *)((long)param_2 + 2) = (char)(int)(param_3[2] * fVar8);
    *(char *)((long)param_2 + 3) = (char)(int)(param_3[3] * fVar8);
    break;
  case 0x22:
    fVar8 = *param_3;
    uVar1 = (uint)fVar8 >> 0x17 & 0xff;
    uVar4 = (ushort)((uint)fVar8 >> 0x10) & 0x8000;
    if (uVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
LAB_005ede18:
      uVar4 = uVar6 | uVar4 | (ushort)((uVar5 & 0x1f) << 10);
    }
    else {
      uVar5 = uVar1 - 0x70;
      if (0x6f < uVar1) {
        if (uVar1 < 0xf0) {
          uVar6 = (ushort)((uint)fVar8 >> 0xd) & 0x3ff;
          goto LAB_005ede18;
        }
        uVar4 = 0x7c00;
      }
    }
    *(ushort *)param_2 = uVar4;
    fVar8 = param_3[1];
    uVar1 = (uint)fVar8 >> 0x17 & 0xff;
    uVar4 = (ushort)((uint)fVar8 >> 0x10) & 0x8000;
    if (uVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
LAB_005ede68:
      uVar4 = uVar6 | uVar4 | (ushort)((uVar5 & 0x1f) << 10);
    }
    else {
      uVar5 = uVar1 - 0x70;
      if (0x6f < uVar1) {
        if (0xef < uVar1) {
          *(ushort *)((long)param_2 + 2) = 0x7c00;
          break;
        }
        uVar6 = (ushort)((uint)fVar8 >> 0xd) & 0x3ff;
        goto LAB_005ede68;
      }
    }
    *(ushort *)((long)param_2 + 2) = uVar4;
    break;
  case 0x23:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c178;
    goto LAB_005edd08;
  case 0x24:
  case 0x26:
    *(ushort *)param_2 = (ushort)(int)*param_3;
    *(ushort *)((long)param_2 + 2) = (ushort)(int)param_3[1];
    break;
  case 0x25:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c174;
LAB_005edd08:
    *(ushort *)param_2 = (ushort)(int)(fVar7 * fVar8);
    *(ushort *)((long)param_2 + 2) = (ushort)(int)(param_3[1] * fVar8);
    break;
  case 0x28:
  case 0x29:
    *param_2 = *param_3;
    break;
  case 0x2a:
    *param_2 = (float)(int)*param_3;
    break;
  case 0x2b:
    *param_2 = (float)(int)*param_3;
    break;
  case 0x31:
    *(char *)param_2 = (char)(int)(*param_3 * DAT_01d4c154);
    *(char *)((long)param_2 + 1) = (char)(int)(param_3[1] * fVar8);
    break;
  case 0x32:
  case 0x34:
    *(char *)param_2 = (char)(int)*param_3;
    *(char *)((long)param_2 + 1) = (char)(int)param_3[1];
    break;
  case 0x33:
    *(char *)param_2 = (char)(int)(*param_3 * 128.0);
    *(char *)((long)param_2 + 1) = (char)(int)(param_3[1] * 128.0);
    break;
  case 0x36:
    fVar8 = *param_3;
    uVar1 = (uint)fVar8 >> 0x17 & 0xff;
    uVar4 = (ushort)((uint)fVar8 >> 0x10) & 0x8000;
    if (uVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
LAB_005ede80:
      uVar4 = uVar6 | uVar4 | (ushort)((uVar5 & 0x1f) << 10);
    }
    else {
      uVar5 = uVar1 - 0x70;
      if (0x6f < uVar1) {
        if (0xef < uVar1) {
          *(ushort *)param_2 = 0x7c00;
          break;
        }
        uVar6 = (ushort)((uint)fVar8 >> 0xd) & 0x3ff;
        goto LAB_005ede80;
      }
    }
    *(ushort *)param_2 = uVar4;
    break;
  case 0x37:
  case 0x38:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c178;
    goto LAB_005eddcc;
  case 0x39:
  case 0x3b:
    fVar7 = *param_3;
    goto LAB_005eddd0;
  case 0x3a:
    fVar7 = *param_3;
    fVar8 = DAT_01d4c174;
LAB_005eddcc:
    fVar7 = fVar7 * fVar8;
LAB_005eddd0:
    *(ushort *)param_2 = (ushort)(int)fVar7;
    break;
  case 0x3d:
  case 0x41:
    fVar8 = *param_3 * DAT_01d4c154;
    goto LAB_005eda28;
  case 0x3e:
  case 0x40:
    fVar8 = *param_3;
LAB_005eda28:
    uVar3 = (undefined1)(int)fVar8;
LAB_005edde4:
    *(undefined1 *)param_2 = uVar3;
    break;
  case 0x3f:
    uVar3 = (undefined1)(int)(*param_3 * 128.0);
    goto LAB_005edde4;
  }
  uVar2 = 1;
switchD_005ed938_caseD_5:
  return uVar2;
}


