/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed970; name: FUN_008ed970
 */


void FUN_008ed970(undefined4 *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  switch(*param_1) {
  case 1:
  case 5:
    cVar5 = FUN_008ee8b0(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) {
LAB_008edd28:
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (*(char *)(param_2 + uVar7) == cVar5) {
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    break;
  case 2:
  case 7:
    cVar5 = FUN_008ee700(1,param_3,*(undefined1 *)(param_1 + 1),0);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (uVar6 < 5) {
      if (*(byte *)(param_2 + 5) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == cVar5) goto LAB_008edb44;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      *(char *)(param_2 + uVar6) = cVar5;
      *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
    }
LAB_008edb44:
    cVar5 = FUN_008ee700(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) goto LAB_008edd28;
    uVar7 = 0;
    do {
      if (*(char *)(param_2 + uVar7) == cVar5) {
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
    break;
  case 3:
    cVar5 = FUN_008ee700(1,param_3,*(undefined1 *)(param_1 + 1),0);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (uVar6 < 5) {
      if (*(byte *)(param_2 + 5) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == cVar5) goto LAB_008edbe8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      *(char *)(param_2 + uVar6) = cVar5;
      *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
    }
LAB_008edbe8:
    cVar5 = FUN_008ee700(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (uVar6 < 5) {
      if (*(byte *)(param_2 + 5) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == cVar5) goto LAB_008edc40;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      *(char *)(param_2 + uVar6) = cVar5;
      *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
    }
LAB_008edc40:
    cVar5 = FUN_008ee8b0(1,param_3,*(undefined1 *)(param_1 + 1),1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) goto LAB_008edd28;
    uVar7 = 0;
    do {
      if (*(char *)(param_2 + uVar7) == cVar5) {
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
    break;
  case 4:
    bVar3 = *(byte *)(param_1 + 1);
    bVar4 = FUN_008ee8b0(1,param_3,bVar3,1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    bVar2 = bVar3;
    if (bVar3 <= bVar4) {
      bVar2 = bVar4;
      bVar4 = bVar3;
    }
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (*(byte *)(param_2 + uVar7) == bVar4) goto LAB_008edc98;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *(byte *)(param_2 + uVar6) = bVar4;
    uVar1 = *(byte *)(param_2 + 5) + 1;
    uVar6 = (ulong)uVar1;
    *(char *)(param_2 + 5) = (char)uVar1;
LAB_008edc98:
    if (4 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = uVar6 & 0xff;
      do {
        if (*(byte *)(param_2 + uVar7) == bVar2) {
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *(byte *)(param_2 + uVar6) = bVar2;
    goto LAB_008edd30;
  case 6:
  case 9:
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (*(char *)(param_2 + uVar7) == '\0') goto LAB_008edb9c;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *(undefined1 *)(param_2 + uVar6) = 0;
    uVar1 = *(byte *)(param_2 + 5) + 1;
    uVar6 = (ulong)uVar1;
    *(char *)(param_2 + 5) = (char)uVar1;
LAB_008edb9c:
    if (4 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      uVar7 = uVar6 & 0xff;
      do {
        if (*(char *)(param_2 + uVar8) == '\x01') goto LAB_008edd64;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    *(undefined1 *)(param_2 + uVar7) = 1;
    uVar1 = *(byte *)(param_2 + 5) + 1;
    uVar6 = (ulong)uVar1;
    *(char *)(param_2 + 5) = (char)uVar1;
LAB_008edd64:
    if (4 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      uVar7 = uVar6 & 0xff;
      do {
        if (*(char *)(param_2 + uVar8) == '\x02') goto LAB_008eddc0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    *(undefined1 *)(param_2 + uVar7) = 2;
    uVar1 = *(byte *)(param_2 + 5) + 1;
    uVar6 = (ulong)uVar1;
    *(char *)(param_2 + 5) = (char)uVar1;
LAB_008eddc0:
    if (4 < ((uint)uVar6 & 0xff)) {
      return;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = uVar6 & 0xff;
      do {
        if (*(char *)(param_2 + uVar7) == '\x03') {
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *(undefined1 *)(param_2 + uVar6) = 3;
    goto LAB_008edd30;
  case 8:
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    cVar5 = *(char *)(param_1 + 1);
    if (uVar6 < 5) {
      if (*(byte *)(param_2 + 5) == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(char *)(param_2 + uVar7) == cVar5) goto LAB_008edce8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      *(char *)(param_2 + uVar6) = cVar5;
      *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
      cVar5 = *(char *)(param_1 + 1);
    }
LAB_008edce8:
    cVar5 = FUN_008ee8b0(1,param_3,cVar5,1);
    uVar6 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar6) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) goto LAB_008edd28;
    uVar7 = 0;
    do {
      if (*(char *)(param_2 + uVar7) == cVar5) {
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
    break;
  default:
    goto switchD_008ed9ac_default;
  }
  *(char *)(param_2 + uVar6) = cVar5;
LAB_008edd30:
  *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
switchD_008ed9ac_default:
  return;
}


