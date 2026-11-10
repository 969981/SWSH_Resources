/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00992a20; name: FUN_00992a20
 */


ulong FUN_00992a20(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int local_24;
  
  iVar2 = FUN_00880c30();
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = FUN_00880b40(param_1);
  if (iVar2 == 7) {
    bVar1 = FUN_00880de0(param_1);
    if (bVar1 == 0) {
      return 1;
    }
    uVar4 = 0;
    do {
      FUN_00880e50(param_1,uVar4,&local_24);
      if (local_24 < 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar1);
    return 1;
  }
  if (iVar2 == 6) {
    return 1;
  }
  if (iVar2 == 4) {
    iVar2 = FUN_00880d20(param_1);
    return (ulong)(iVar2 != 8);
  }
  uVar3 = FUN_008de040(param_1);
  return uVar3;
}


