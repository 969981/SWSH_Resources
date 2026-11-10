/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948570; name: FUN_00948570
 */


undefined8
FUN_00948570(int param_1,undefined8 param_2,undefined8 param_3,short param_4,undefined8 param_5)

{
  ushort *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  
  uVar2 = param_1 - 1;
  if ((0x20 < uVar2) || ((0x140465cffU >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
    return 0;
  }
  puVar1 = (ushort *)(&DAT_0214aed6 + *(long *)(&DAT_0214af60 + (long)(int)uVar2 * 8) * 8);
  if (param_4 == 0) {
    puVar1 = (ushort *)(&DAT_0214aed4 + *(long *)(&DAT_0214af60 + (long)(int)uVar2 * 8) * 8);
  }
  uVar5 = (ulong)(short)*puVar1;
  if ((short)*puVar1 < 0) {
    uVar5 = (ulong)*(ushort *)(&DAT_0214aed4 + *(long *)(&DAT_0214af60 + (long)(int)uVar2 * 8) * 8);
  }
  FUN_00943f20(param_5,2,uVar5);
  uVar3 = FUN_008e0a00(param_3);
  FUN_00943f60(param_5,uVar3);
  if (param_4 != 0) {
    FUN_00943f60(param_5,param_4);
  }
  if (param_1 == 0x12) {
    uVar4 = 0x49;
  }
  else {
    if (param_1 != 8) {
      return 1;
    }
    uVar4 = FUN_008ed2f0(param_2);
  }
  FUN_00943f60(param_5,uVar4);
  return 1;
}


