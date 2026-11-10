/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c4b0; name: FUN_0094c4b0
 */


uint FUN_0094c4b0(undefined8 param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if ((param_4 & 1) == 0) {
    do {
      uVar1 = (int)(uVar3 >> 3) + 1;
      if (((uVar1 & 0xff) < (uint)*param_3) &&
         ((1 << (ulong)((uint)uVar3 & 7) & (uint)param_3[(ulong)uVar1 & 0xff]) != 0)) {
        uVar2 = FUN_009423b0(param_1);
        uVar1 = FUN_0093a990(uVar2,param_2,uVar3);
        uVar4 = uVar4 | uVar1;
      }
      uVar1 = (uint)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0x18);
  }
  else {
    do {
      uVar1 = (int)(uVar3 >> 3) + 1;
      if (((uVar1 & 0xff) < (uint)*param_3) &&
         ((1 << (ulong)((uint)uVar3 & 7) & (uint)param_3[(ulong)uVar1 & 0xff]) != 0)) {
        uVar2 = FUN_009423b0(param_1);
        uVar1 = FUN_0093a9e0(uVar2,param_2,uVar3);
        uVar4 = uVar4 | uVar1;
      }
      uVar1 = (uint)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0x18);
  }
  return uVar4 & 1;
}


