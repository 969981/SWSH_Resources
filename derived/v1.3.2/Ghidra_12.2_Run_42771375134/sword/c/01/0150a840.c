/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a840; name: FUN_0150a840
 */


undefined8 FUN_0150a840(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 6;
  if (((param_2 < 0x20) && (param_3 < 0x1e)) && (param_4 < 6)) {
    uVar1 = *(ushort *)(param_1 + (ulong)param_4 * 0xc + 0x524);
    if ((byte)(uVar1 >> 8) == param_2 && (uVar1 & 0xff) == param_3) {
      return 0;
    }
    uVar3 = (ulong)param_4;
    uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x526);
    if ((byte)(uVar1 >> 8) != param_2 || (uVar1 & 0xff) != param_3) {
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x528);
      if (((byte)(uVar1 >> 8) == param_2) && ((uVar1 & 0xff) == param_3)) {
        return 2;
      }
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52a);
      if (((byte)(uVar1 >> 8) == param_2) && ((uVar1 & 0xff) == param_3)) {
        return 3;
      }
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52c);
      if (((byte)(uVar1 >> 8) == param_2) && ((uVar1 & 0xff) == param_3)) {
        return 4;
      }
      uVar1 = *(ushort *)(param_1 + uVar3 * 0xc + 0x52e);
      if (((byte)(uVar1 >> 8) == param_2) && ((uVar1 & 0xff) == param_3)) {
        return 5;
      }
      return 6;
    }
    uVar2 = 1;
  }
  return uVar2;
}


