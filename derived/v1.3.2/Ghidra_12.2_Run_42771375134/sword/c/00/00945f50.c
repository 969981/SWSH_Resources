/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945f50; name: FUN_00945f50
 */


ulong FUN_00945f50(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xb48);
  if (uVar1 != 0) {
    uVar3 = 0;
    lVar2 = (param_2 - param_1) + 0x58;
    do {
      lVar2 = lVar2 + -0x60;
      if (lVar2 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return uVar1;
}


