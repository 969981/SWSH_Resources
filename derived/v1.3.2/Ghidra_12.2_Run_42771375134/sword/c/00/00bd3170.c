/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3170; name: FUN_00bd3170
 */


undefined8 FUN_00bd3170(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 1) {
    lVar2 = 0x2dc2;
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    lVar2 = 0x2d68;
  }
  lVar2 = param_1 + lVar2;
  uVar3 = (ulong)param_4;
  uVar1 = FUN_0167bc20(*(undefined8 *)(param_1 + 0x58),
                       param_1 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78 + 0xd8);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x58),
               param_1 + 0x68 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78 + 0x68);
  FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),
               param_1 + 0x68 + (ulong)*(byte *)(lVar2 + uVar3) * 0x78,0);
  return 1;
}


