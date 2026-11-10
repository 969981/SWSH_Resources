/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082e6a0; name: FUN_0082e6a0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0082e6a0(ulong *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  if (*(char *)((long)param_1 + 9) != '\0') {
    bVar2 = (byte)param_1[1];
    if (*(char *)((long)param_1 + 0xb) == '\0') {
      if ((uint)(param_2 << 3) < 0x80) {
        iVar4 = 1;
        uVar8 = (uint)bVar2;
      }
      else {
        iVar4 = FUN_0080e440();
        uVar8 = (uint)(byte)param_1[1];
      }
      if (0x11 < uVar8 - 1) {
        return 0;
      }
      iVar4 = iVar4 << (bVar2 == 10);
      switch(uVar8) {
      default:
        iVar4 = iVar4 + 8;
        break;
      case 2:
      case 7:
      case 0xf:
        iVar4 = iVar4 + 4;
        break;
      case 3:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          iVar4 = FUN_0080e480(*(undefined8 *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8));
          piVar9 = (int *)*param_1;
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 4:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          iVar4 = FUN_0080e480(*(undefined8 *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8));
          piVar9 = (int *)*param_1;
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 5:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          uVar6 = *(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
          if ((int)uVar6 < 0) {
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            piVar9 = (int *)*param_1;
          }
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 8:
        iVar4 = iVar4 + 1;
        break;
      case 9:
        uVar11 = *param_1;
        uVar8 = *(int *)(uVar11 + 8) * iVar4;
        if (*(int *)(uVar11 + 8) < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          pbVar14 = *(byte **)(*(long *)(uVar11 + 0x10) + lVar13 * 8 + 8);
          bVar2 = *pbVar14;
          uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
          bVar3 = bVar2 >> 1;
          uVar6 = (uint)bVar3;
          if ((bVar2 & 1) != 0) {
            uVar6 = uVar12;
          }
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            bVar2 = *pbVar14;
            uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
            bVar3 = bVar2 >> 1;
            uVar11 = *param_1;
          }
          uVar6 = (uint)bVar3;
          if ((bVar2 & 1) != 0) {
            uVar6 = uVar12;
          }
          uVar8 = iVar4 + uVar8 + uVar6;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(uVar11 + 8));
        return uVar8;
      case 10:
        uVar11 = *param_1;
        uVar8 = *(int *)(uVar11 + 8) * iVar4;
        if (*(int *)(uVar11 + 8) < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          iVar4 = (**(code **)(**(long **)(*(long *)(uVar11 + 0x10) + lVar13 * 8 + 8) + 0x60))();
          uVar11 = *param_1;
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *(int *)(uVar11 + 8));
        return uVar8;
      case 0xb:
        uVar11 = *param_1;
        uVar8 = *(int *)(uVar11 + 8) * iVar4;
        if (*(int *)(uVar11 + 8) < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          uVar6 = (**(code **)(**(long **)(*(long *)(uVar11 + 0x10) + lVar13 * 8 + 8) + 0x60))();
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440(uVar6);
          }
          uVar8 = uVar6 + uVar8 + iVar4;
          uVar11 = *param_1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(uVar11 + 8));
        return uVar8;
      case 0xc:
        uVar11 = *param_1;
        uVar8 = *(int *)(uVar11 + 8) * iVar4;
        if (*(int *)(uVar11 + 8) < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          pbVar14 = *(byte **)(*(long *)(uVar11 + 0x10) + lVar13 * 8 + 8);
          bVar2 = *pbVar14;
          uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
          bVar3 = bVar2 >> 1;
          uVar6 = (uint)bVar3;
          if ((bVar2 & 1) != 0) {
            uVar6 = uVar12;
          }
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            bVar2 = *pbVar14;
            uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
            bVar3 = bVar2 >> 1;
            uVar11 = *param_1;
          }
          uVar6 = (uint)bVar3;
          if ((bVar2 & 1) != 0) {
            uVar6 = uVar12;
          }
          uVar8 = iVar4 + uVar8 + uVar6;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(uVar11 + 8));
        return uVar8;
      case 0xd:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          if (*(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8) < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            piVar9 = (int *)*param_1;
          }
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 0xe:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          uVar6 = *(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
          if ((int)uVar6 < 0) {
            iVar4 = 10;
          }
          else if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            piVar9 = (int *)*param_1;
          }
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 0x11:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          iVar4 = *(int *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
          if ((uint)(iVar4 << 1 ^ iVar4 >> 0x1f) < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440();
            piVar9 = (int *)*param_1;
          }
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      case 0x12:
        piVar9 = (int *)*param_1;
        uVar8 = *piVar9 * iVar4;
        if (*piVar9 < 1) {
          return uVar8;
        }
        lVar13 = 0;
        do {
          lVar10 = *(long *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8);
          iVar4 = FUN_0080e480(lVar10 << 1 ^ lVar10 >> 0x3f);
          piVar9 = (int *)*param_1;
          lVar13 = lVar13 + 1;
          uVar8 = iVar4 + uVar8;
        } while (lVar13 < *piVar9);
        return uVar8;
      }
      return *(int *)*param_1 * iVar4;
    }
    switch(bVar2) {
    case 1:
    case 6:
    case 0x10:
      uVar8 = *(int *)*param_1 * 8;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      goto joined_r0x0082e868;
    case 2:
    case 7:
    case 0xf:
      uVar8 = *(int *)*param_1 * 4;
      *(uint *)((long)param_1 + 0xc) = uVar8;
joined_r0x0082e868:
      if ((int)uVar8 < 1) {
        return uVar8;
      }
      goto LAB_0082e810;
    case 3:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        iVar4 = FUN_0080e480(*(undefined8 *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8));
        piVar9 = (int *)*param_1;
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 4:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        iVar4 = FUN_0080e480(*(undefined8 *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8));
        piVar9 = (int *)*param_1;
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 5:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        uVar6 = *(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
        if ((int)uVar6 < 0) {
          iVar4 = 10;
        }
        else if (uVar6 < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_0080e440();
          piVar9 = (int *)*param_1;
        }
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 8:
      uVar8 = *(uint *)*param_1;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      goto joined_r0x0082e97c;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_00801270(auStack_70,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
                   ,0x62d);
      uVar7 = FUN_00800f30(auStack_70,"Non-primitive types can\'t be packed.");
      FUN_00800fa0(auStack_38,uVar7);
      FUN_00801290(auStack_70);
    default:
switchD_0082e6f0_default:
      *(uint *)((long)param_1 + 0xc) = 0;
      return 0;
    case 0xd:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        if (*(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8) < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_0080e440();
          piVar9 = (int *)*param_1;
        }
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 0xe:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        uVar6 = *(uint *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
        if ((int)uVar6 < 0) {
          iVar4 = 10;
        }
        else if (uVar6 < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_0080e440();
          piVar9 = (int *)*param_1;
        }
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 0x11:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        iVar4 = *(int *)(*(long *)(piVar9 + 2) + lVar13 * 4 + 8);
        if ((uint)(iVar4 << 1 ^ iVar4 >> 0x1f) < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_0080e440();
          piVar9 = (int *)*param_1;
        }
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
      break;
    case 0x12:
      piVar9 = (int *)*param_1;
      if (*piVar9 < 1) goto switchD_0082e6f0_default;
      lVar13 = 0;
      uVar8 = 0;
      do {
        lVar10 = *(long *)(*(long *)(piVar9 + 2) + lVar13 * 8 + 8);
        iVar4 = FUN_0080e480(lVar10 << 1 ^ lVar10 >> 0x3f);
        piVar9 = (int *)*param_1;
        lVar13 = lVar13 + 1;
        uVar8 = iVar4 + uVar8;
      } while (lVar13 < *piVar9);
    }
    *(uint *)((long)param_1 + 0xc) = uVar8;
joined_r0x0082e97c:
    if ((int)uVar8 < 1) {
      return uVar8;
    }
LAB_0082e810:
    if (uVar8 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440(uVar8);
    }
    if ((param_2 << 3 | 2U) < 0x80) {
      return iVar4 + uVar8 + 1;
    }
    iVar5 = FUN_0080e440();
    return iVar4 + uVar8 + iVar5;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return 0;
  }
  uVar11 = param_1[1];
  if ((uint)(param_2 << 3) < 0x80) {
    iVar4 = 1;
    cVar1 = (char)uVar11;
  }
  else {
    iVar4 = FUN_0080e440();
    cVar1 = (char)param_1[1];
  }
  uVar8 = iVar4 << ((char)uVar11 == '\n');
  switch(cVar1) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar8 = uVar8 + 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    uVar8 = uVar8 + 4;
    break;
  case '\x03':
  case '\x04':
    uVar11 = *param_1;
    goto LAB_0082eff8;
  case '\x05':
    uVar6 = (uint)*param_1;
    if (-1 < (int)uVar6) goto joined_r0x0082ef5c;
LAB_0082f02c:
    iVar4 = 10;
    goto LAB_0082effc;
  case '\b':
    uVar8 = uVar8 + 1;
    break;
  case '\t':
  case '\f':
    pbVar14 = (byte *)*param_1;
    bVar2 = *pbVar14;
    uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
    bVar3 = bVar2 >> 1;
    uVar6 = (uint)bVar3;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar12;
    }
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
      bVar2 = *pbVar14;
      uVar12 = (uint)*(undefined8 *)(pbVar14 + 8);
      bVar3 = bVar2 >> 1;
    }
    uVar6 = (uint)bVar3;
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar12;
    }
    uVar8 = iVar4 + uVar8 + uVar6;
    break;
  case '\n':
    iVar4 = (**(code **)(*(long *)*param_1 + 0x60))();
    goto LAB_0082effc;
  case '\v':
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x60))();
      if (uVar6 < 0x80) goto LAB_0082efbc;
LAB_0082f050:
      iVar4 = FUN_0080e440(uVar6);
    }
    else {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x50))();
      if (0x7f < uVar6) goto LAB_0082f050;
LAB_0082efbc:
      iVar4 = 1;
    }
    uVar8 = uVar6 + uVar8 + iVar4;
    break;
  case '\r':
    uVar6 = (uint)*param_1;
    goto joined_r0x0082efe4;
  case '\x0e':
    uVar6 = (uint)*param_1;
    if ((int)uVar6 < 0) goto LAB_0082f02c;
joined_r0x0082efe4:
    if (uVar6 < 0x80) {
LAB_0082ef60:
      iVar4 = 1;
    }
    else {
LAB_0082efd0:
      iVar4 = FUN_0080e440();
    }
    goto LAB_0082effc;
  case '\x11':
    uVar6 = (uint)*param_1 << 1 ^ (int)(uint)*param_1 >> 0x1f;
joined_r0x0082ef5c:
    if (uVar6 < 0x80) goto LAB_0082ef60;
    goto LAB_0082efd0;
  case '\x12':
    uVar11 = *param_1 << 1 ^ (long)*param_1 >> 0x3f;
LAB_0082eff8:
    iVar4 = FUN_0080e480(uVar11);
LAB_0082effc:
    uVar8 = iVar4 + uVar8;
  }
  return uVar8;
}


