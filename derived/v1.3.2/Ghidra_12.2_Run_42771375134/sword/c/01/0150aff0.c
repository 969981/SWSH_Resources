/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150aff0; name: FUN_0150aff0
 */


long FUN_0150aff0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  
  if (5 < param_2) {
    return 6;
  }
  if (5 < param_3) {
    return 6;
  }
  if (0x1f < param_4) {
    return 6;
  }
  if (0x1d < param_5) {
    return 6;
  }
  uVar1 = *(ushort *)(param_1 + (ulong)param_2 * 0xc + 0x524);
  uVar3 = (ulong)param_2;
  if (((byte)(uVar1 >> 8) == param_4) && ((uVar1 & 0xff) == param_5)) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x526);
    if (((byte)(uVar1 >> 8) == param_4) && ((uVar1 & 0xff) == param_5)) {
      lVar2 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x528);
      if (((byte)(uVar1 >> 8) == param_4) && ((uVar1 & 0xff) == param_5)) {
        lVar2 = 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52a);
        if (((byte)(uVar1 >> 8) == param_4) && ((uVar1 & 0xff) == param_5)) {
          lVar2 = 3;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52c);
          if (((byte)(uVar1 >> 8) == param_4) && ((uVar1 & 0xff) == param_5)) {
            lVar2 = 4;
          }
          else {
            uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52e);
            lVar2 = 6;
            if (((byte)(uVar1 >> 8) != param_4) || ((uVar1 & 0xff) != param_5)) goto LAB_0150b134;
            lVar2 = 5;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_1 + uVar3 * 0xc + lVar2 * 2 + 0x524) = 0xffff;
LAB_0150b134:
  *(short *)(param_1 + uVar3 * 0xc + (ulong)param_3 * 2 + 0x524) =
       (short)param_5 + (short)param_4 * 0x100;
  return lVar2;
}


