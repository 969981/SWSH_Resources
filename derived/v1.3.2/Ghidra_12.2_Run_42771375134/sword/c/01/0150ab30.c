/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150ab30; name: FUN_0150ab30
 */


void FUN_0150ab30(long param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (5 < param_2) {
    return;
  }
  lVar3 = param_1 + (ulong)param_2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x524);
  uVar2 = (ulong)param_2;
  if (uVar1 >> 0xd != 0 || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x526);
    if (uVar1 >> 0xd == 0 && (uVar1 & 0xfe) < 0x1e) {
      lVar4 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x528);
      if (uVar1 >> 0xd == 0 && (uVar1 & 0xfe) < 0x1e) {
        lVar4 = 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
        if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
          lVar4 = 3;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
          if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
            lVar4 = 4;
          }
          else {
            uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
            if ((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) goto LAB_0150abf0;
            lVar4 = 5;
          }
        }
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x524) = *(undefined2 *)(lVar4 + 0x524);
    *(undefined2 *)(lVar4 + 0x524) = 0xffff;
  }
LAB_0150abf0:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x526);
  if (uVar1 >> 0xd != 0 || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x528);
    if (uVar1 >> 0xd == 0 && (uVar1 & 0xfe) < 0x1e) {
      lVar4 = 2;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
      if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
        lVar4 = 3;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
        if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
          lVar4 = 4;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
          if ((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) goto LAB_0150ac7c;
          lVar4 = 5;
        }
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x526) = *(undefined2 *)(lVar4 + 0x524);
    *(undefined2 *)(lVar4 + 0x524) = 0xffff;
  }
LAB_0150ac7c:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x528);
  if (uVar1 >> 0xd != 0 || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
    if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
      lVar4 = 3;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
      if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
        lVar4 = 4;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
        if ((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) goto LAB_0150ad58;
        lVar4 = 5;
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x528) = *(undefined2 *)(lVar4 + 0x524);
    *(undefined2 *)(lVar4 + 0x524) = 0xffff;
  }
LAB_0150ad58:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x52a);
  if ((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
    if ((uVar1 >> 0xd == 0) && ((uVar1 & 0xfe) < 0x1e)) {
      lVar4 = 4;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
      if ((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) goto LAB_0150ade4;
      lVar4 = 5;
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x52a) = *(undefined2 *)(lVar4 + 0x524);
    *(undefined2 *)(lVar4 + 0x524) = 0xffff;
  }
LAB_0150ade4:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x52c);
  if ((((uVar1 >> 0xd != 0) || (0x1d < (uVar1 & 0xfe))) &&
      (uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e), uVar1 >> 0xd == 0)) &&
     ((uVar1 & 0xfe) < 0x1e)) {
    param_1 = param_1 + uVar2 * 0xc;
    *(undefined2 *)(lVar3 + 0x52c) = *(undefined2 *)(param_1 + 0x52e);
    *(undefined2 *)(param_1 + 0x52e) = 0xffff;
  }
  return;
}


