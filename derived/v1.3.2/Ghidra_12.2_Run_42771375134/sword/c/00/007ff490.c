/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff490; name: FUN_007ff490
 */


/* WARNING: Removing unreachable block (ram,0x007ff4cc) */

void FUN_007ff490(byte *param_1,ulong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((long)param_2 < 1) {
    uVar3 = 0;
    if (param_2 == 0) goto LAB_007ff53c;
    goto LAB_007ff55c;
  }
  if (param_2 == 1) {
    lVar4 = 0;
    uVar3 = 0;
LAB_007ff520:
    uVar3 = uVar3 + (byte)(&DAT_021405d0)[param_1[lVar4]];
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      pbVar1 = param_1 + lVar4;
      lVar4 = lVar4 + 2;
      uVar3 = uVar3 + (byte)(&DAT_021405d0)[*pbVar1] + (ulong)(byte)(&DAT_021405d0)[pbVar1[1]];
    } while (param_2 - (param_2 & 1) != lVar4);
    if ((param_2 & 1) != 0) goto LAB_007ff520;
  }
  if (uVar3 == param_2) {
LAB_007ff53c:
    std::string::append((char *)param_3,(ulong)param_1);
    return;
  }
LAB_007ff55c:
  if ((*param_3 & 1) == 0) {
    uVar5 = (ulong)(*param_3 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  std::string::resize((ulong)param_3,(char)uVar5 + (char)uVar3);
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  if (0 < (long)param_2) {
    param_3 = param_3 + uVar5;
    do {
      bVar2 = *param_1;
      switch(bVar2) {
      case 9:
        param_3[0] = 0x5c;
        param_3[1] = 0x74;
        param_3 = param_3 + 2;
        break;
      case 10:
        param_3[0] = 0x5c;
        param_3[1] = 0x6e;
        param_3 = param_3 + 2;
        break;
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
switchD_007ff5e4_caseD_b:
        if (bVar2 - 0x20 < 0x5f) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
        }
        else {
          param_3[1] = bVar2 >> 6 | 0x30;
          param_3[2] = bVar2 >> 3 & 7 | 0x30;
          *param_3 = 0x5c;
          param_3[3] = bVar2 & 7 | 0x30;
          param_3 = param_3 + 4;
        }
        break;
      case 0xd:
        param_3[0] = 0x5c;
        param_3[1] = 0x72;
        goto joined_r0x007ff66c;
      case 0x22:
        param_3[0] = 0x5c;
        param_3[1] = 0x22;
joined_r0x007ff66c:
        param_3 = param_3 + 2;
        break;
      case 0x27:
        param_3[0] = 0x5c;
        param_3[1] = 0x27;
        param_3 = param_3 + 2;
        break;
      default:
        if (bVar2 != 0x5c) goto switchD_007ff5e4_caseD_b;
        param_3[0] = 0x5c;
        param_3[1] = 0x5c;
        param_3 = param_3 + 2;
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


