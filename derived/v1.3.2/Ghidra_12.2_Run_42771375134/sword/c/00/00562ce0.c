/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00562ce0; name: FUN_00562ce0
 */


/* WARNING: Removing unreachable block (ram,0x00562fe0) */
/* WARNING: Removing unreachable block (ram,0x00562e6c) */

ulong FUN_00562ce0(ulong param_1,float param_2,float param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_01d4bcb8;
  fVar5 = (float)param_1;
  uVar2 = param_4;
  if (param_4 < 0x10) {
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar1 & 0xb828) != 0) {
      if ((param_4 | 1) == 0xd) {
        uVar2 = 2;
        if ((param_4 & 0xfffffffe) != 0xc) {
          uVar2 = param_4;
        }
        goto joined_r0x00562d3c;
      }
      switch(param_4) {
      case 3:
      case 5:
        goto switchD_00562e98_caseD_2;
      case 4:
      case 6:
      case 8:
      case 10:
      case 0xe:
        goto switchD_00562d6c_caseD_4;
      case 7:
      case 9:
        goto switchD_00562d6c_caseD_7;
      case 0xb:
      case 0xd:
        goto switchD_00562e98_caseD_a;
      case 0xc:
        goto switchD_00562e98_caseD_c;
      case 0xf:
        goto switchD_00562e98_caseD_e;
      default:
        goto joined_r0x00562d3c;
      }
    }
    if ((uVar1 & 0x280) == 0) goto LAB_00562d9c;
    if ((param_4 | 1) == 0xd) {
      uVar2 = 2;
      if ((param_4 & 0xfffffffe) != 0xc) {
        uVar2 = param_4;
      }
    }
    else if (param_4 == 7) {
      uVar2 = 6;
    }
    else if (param_4 == 9) {
      uVar2 = 8;
    }
LAB_00562e14:
    fVar4 = param_2 / param_3;
    if ((DAT_01d4be58 <= fVar4) && (fVar4 <= DAT_01d4bbec)) goto switchD_00562d6c_caseD_4;
    param_3 = DAT_01d4be58;
    if (DAT_01d4be58 <= fVar4) {
      param_3 = fVar4;
    }
    param_3 = param_2 / param_3;
joined_r0x00562d3c:
    if ((uVar2 == 8) || (uVar2 == 6)) {
switchD_00562d6c_caseD_7:
      fVar4 = param_2 / param_3;
      if ((fVar4 < DAT_01d4be58) || (DAT_01d4bbec < fVar4)) {
        param_3 = DAT_01d4be58;
        if (DAT_01d4be58 <= fVar4) {
          param_3 = fVar4;
        }
        param_3 = param_2 / param_3;
      }
    }
    switch(param_4) {
    case 2:
    case 3:
    case 4:
    case 5:
      goto switchD_00562e98_caseD_2;
    case 6:
    case 7:
    case 8:
    case 9:
      fVar4 = fVar5;
      if (1.0 < fVar5) {
        fVar4 = 1.0;
      }
      param_3 = param_2 / param_3;
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar4;
      }
      fVar5 = 0.0;
      if (1.0 < param_3) {
        if (10.0 <= param_3) {
          iVar3 = 5;
        }
        else if (DAT_01d4beec <= param_3) {
          iVar3 = 10;
        }
        else if (1.5 <= param_3) {
          iVar3 = 0x14;
        }
        else {
          if (param_3 < DAT_01d4bcb8) {
            fVar5 = 1.0;
            iVar3 = 100;
            do {
              fVar5 = logf(fVar5 * fVar6 + 1.0);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            fVar5 = (param_3 + -1.0) * fVar5 + 0.0;
            goto LAB_00563044;
          }
          iVar3 = 100;
        }
        fVar5 = 1.0;
        do {
          fVar5 = logf(param_3 * fVar5 + 1.0);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
LAB_00563044:
      fVar6 = expf(fVar7 * fVar5);
      fVar5 = expf(fVar5);
      fVar6 = ((fVar6 + -1.0) * param_2) / (fVar5 + -1.0);
      goto LAB_00563068;
    case 10:
    case 0xb:
    case 0xd:
switchD_00562e98_caseD_a:
      fVar6 = fVar5;
      if (1.0 < fVar5) {
        fVar6 = 1.0;
      }
      fVar4 = 1.0;
      if (0.0 <= fVar5) {
        fVar4 = 1.0 - fVar6;
      }
      fVar6 = logf(fVar4);
      param_1 = (ulong)(uint)-fVar6;
      if (DAT_01d4bc1c <= fVar6) {
        param_1 = 0;
      }
    case 0xe:
    case 0xf:
switchD_00562e98_caseD_e:
      param_1 = (ulong)(uint)(param_3 * (float)param_1);
      break;
    default:
      break;
    }
  }
  else {
LAB_00562d9c:
    if ((param_4 | 1) == 0xd) {
      uVar2 = 2;
      if ((param_4 & 0xfffffffe) != 0xc) {
        uVar2 = param_4;
      }
LAB_00562db8:
      if ((param_4 == 8) || (param_4 == 6)) goto LAB_00562e14;
switchD_00562d6c_caseD_4:
      goto joined_r0x00562d3c;
    }
    uVar1 = param_4 - 3 >> 1 | (param_4 - 3) * -0x80000000;
    if (1 < uVar1) {
      if (1 < uVar1 - 2) {
        if (uVar1 == 6) goto switchD_00562e98_caseD_e;
        goto LAB_00562db8;
      }
      goto switchD_00562d6c_caseD_7;
    }
switchD_00562e98_caseD_2:
    fVar6 = fVar5;
    if (1.0 < fVar5) {
      fVar6 = 1.0;
    }
    fVar7 = (param_2 / param_3) * (param_2 / param_3);
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar6;
    }
    fVar5 = fVar4 * (fVar4 + 4.0 / fVar7 + -2.0) + 1.0;
    fVar6 = SQRT(fVar5);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar5);
    }
    fVar6 = fVar7 * param_3 * (fVar4 + fVar6 + -1.0) * 0.5;
LAB_00563068:
    param_1 = (ulong)(uint)fVar6;
    if (fVar6 <= 0.0) {
      param_1 = 0;
    }
  }
switchD_00562e98_caseD_c:
  return param_1;
}


