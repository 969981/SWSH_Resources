/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082d730; name: FUN_0082d730
 */


void FUN_0082d730(long *param_1,int param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
      switch((char)param_1[1]) {
      case '\x01':
        FUN_00815340(*param_1,param_2,param_3);
        return;
      case '\x02':
        FUN_00815290((int)*param_1,param_2,param_3);
        return;
      case '\x03':
        FUN_00814c00(param_2,*param_1,param_3);
        return;
      case '\x04':
        FUN_00814db0(param_2,*param_1,param_3);
        return;
      case '\x05':
        FUN_00814ad0(param_2,(int)*param_1,param_3);
        return;
      case '\x06':
        FUN_008150b0(param_2,*param_1,param_3);
        return;
      case '\a':
        FUN_00815010(param_2,(int)*param_1,param_3);
        return;
      case '\b':
        FUN_008153f0(param_2,(char)*param_1,param_3);
        return;
      case '\t':
        FUN_00815600(param_2,*param_1,param_3);
        return;
      case '\n':
        FUN_00815cc0(param_2,*param_1,param_3);
        return;
      case '\v':
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          FUN_00815e00(param_2,*param_1,param_3);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0082e5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,param_2,param_3);
        return;
      case '\f':
        FUN_00815960(param_2,*param_1,param_3);
        return;
      case '\r':
        FUN_00814ca0(param_2,(int)*param_1,param_3);
        return;
      case '\x0e':
        FUN_008154d0(param_2,(int)*param_1,param_3);
        return;
      case '\x0f':
        FUN_00815150(param_2,(int)*param_1,param_3);
        return;
      case '\x10':
        FUN_008151f0(param_2,*param_1,param_3);
        return;
      case '\x11':
        FUN_00814e50(param_2,(int)*param_1,param_3);
        return;
      case '\x12':
        FUN_00814f70(param_2,*param_1,param_3);
        return;
      }
    }
  }
  else if (*(char *)((long)param_1 + 0xb) == '\0') {
    switch((char)param_1[1]) {
    case '\x01':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00815340(*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_2,param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x02':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00815290(*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_2,param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x03':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814c00(param_2,*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x04':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814db0(param_2,*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x05':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814ad0(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x06':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_008150b0(param_2,*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\a':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00815010(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\b':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 8;
        do {
          FUN_008153f0(param_2,*(undefined1 *)(*(long *)(piVar8 + 2) + lVar14),param_3);
          piVar8 = (int *)*param_1;
          lVar13 = lVar14 + -7;
          lVar14 = lVar14 + 1;
        } while (lVar13 < *piVar8);
      }
      break;
    case '\t':
      lVar14 = *param_1;
      if (0 < *(int *)(lVar14 + 8)) {
        lVar13 = 0;
        do {
          FUN_00815600(param_2,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar13 * 8 + 8),param_3);
          lVar14 = *param_1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar14 + 8));
      }
      break;
    case '\n':
      lVar14 = *param_1;
      if (0 < *(int *)(lVar14 + 8)) {
        lVar13 = 0;
        do {
          FUN_00815cc0(param_2,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar13 * 8 + 8),param_3);
          lVar14 = *param_1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar14 + 8));
      }
      break;
    case '\v':
      lVar14 = *param_1;
      if (0 < *(int *)(lVar14 + 8)) {
        lVar13 = 0;
        do {
          FUN_00815e00(param_2,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar13 * 8 + 8),param_3);
          lVar14 = *param_1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar14 + 8));
      }
      break;
    case '\f':
      lVar14 = *param_1;
      if (0 < *(int *)(lVar14 + 8)) {
        lVar13 = 0;
        do {
          FUN_00815960(param_2,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar13 * 8 + 8),param_3);
          lVar14 = *param_1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar14 + 8));
      }
      break;
    case '\r':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814ca0(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x0e':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_008154d0(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x0f':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00815150(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x10':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_008151f0(param_2,*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x11':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814e50(param_2,*(undefined4 *)(*(long *)(piVar8 + 2) + lVar14 * 4 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
      break;
    case '\x12':
      piVar8 = (int *)*param_1;
      if (0 < *piVar8) {
        lVar14 = 0;
        do {
          FUN_00814f70(param_2,*(undefined8 *)(*(long *)(piVar8 + 2) + lVar14 * 8 + 8),param_3);
          piVar8 = (int *)*param_1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *piVar8);
      }
    }
  }
  else if (*(int *)((long)param_1 + 0xc) != 0) {
    uVar4 = param_2 << 3 | 2;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3);
      iVar6 = *(int *)(param_3 + 0x10);
      uVar4 = *(uint *)((long)param_1 + 0xc);
    }
    else {
      pbVar7 = *(byte **)(param_3 + 8);
      if (uVar4 < 0x80) {
        pbVar9 = pbVar7;
      }
      else {
        pbVar10 = pbVar7;
        uVar11 = uVar4;
        do {
          uVar4 = uVar11 >> 7;
          uVar2 = uVar11 >> 0xe;
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar11 | 0x80;
          pbVar10 = pbVar9;
          uVar11 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar9 = (byte)uVar4;
      iVar6 = ((int)pbVar9 + 1) - (int)pbVar7;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar6;
      iVar6 = *(int *)(param_3 + 0x10) - iVar6;
      *(int *)(param_3 + 0x10) = iVar6;
      uVar4 = *(uint *)((long)param_1 + 0xc);
    }
    if (iVar6 < 5) {
      FUN_0080dfa0(param_3);
      bVar1 = *(byte *)(param_1 + 1);
    }
    else {
      uVar5 = (ulong)uVar4;
      pbVar7 = *(byte **)(param_3 + 8);
      if (uVar4 < 0x80) {
        pbVar9 = pbVar7;
      }
      else {
        pbVar10 = pbVar7;
        uVar12 = uVar5;
        do {
          uVar5 = uVar12 >> 7;
          uVar3 = uVar12 >> 0xe;
          pbVar9 = pbVar10 + 1;
          *pbVar10 = (byte)uVar12 | 0x80;
          pbVar10 = pbVar9;
          uVar12 = uVar5;
        } while (uVar3 != 0);
      }
      *pbVar9 = (byte)uVar5;
      iVar6 = ((int)pbVar9 + 1) - (int)pbVar7;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar6;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
      bVar1 = *(byte *)(param_1 + 1);
    }
    if (bVar1 - 1 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x0082d940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_021418f0 + *(int *)(&DAT_021418f0 + (ulong)(bVar1 - 1) * 4)))();
      return;
    }
  }
  return;
}


