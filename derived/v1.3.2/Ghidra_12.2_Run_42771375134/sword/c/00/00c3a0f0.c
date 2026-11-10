/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3a0f0; name: FUN_00c3a0f0
 */


undefined8 FUN_00c3a0f0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00c38a10();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_00bda9a0();
  if (lVar3 != 0) {
    uVar4 = FUN_00bdb190(lVar2);
    if ((uVar4 & 0xff) == 0) {
      return 0;
    }
    iVar1 = *(int *)(lVar3 + 0xae8);
    if ((iVar1 == 3) || (iVar1 == 0)) {
      FUN_00bdb230(lVar2,uVar4 + 0x100000000 & 0xffffffff00000000 | 1);
      iVar1 = *(int *)(lVar3 + 0xae8);
    }
    if ((iVar1 == 4) || (iVar1 == 1)) {
      FUN_00bdb230(lVar2,1);
    }
  }
  uVar5 = FUN_00bdb190(lVar2);
  return uVar5;
}


