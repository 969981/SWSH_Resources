/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009412d0; name: FUN_009412d0
 */


undefined8 FUN_009412d0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  
  iVar2 = FUN_00880b40();
  if (iVar2 == 2) {
    bVar1 = FUN_00880de0(param_1);
    if (bVar1 != 0) {
      uVar3 = 0;
      while (FUN_00880e50(param_1,uVar3,&local_24), -1 < local_24) {
        uVar3 = uVar3 + 1;
        if (bVar1 <= uVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}


