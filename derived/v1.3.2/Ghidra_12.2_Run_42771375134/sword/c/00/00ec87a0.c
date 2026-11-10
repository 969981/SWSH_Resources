/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec87a0; name: FUN_00ec87a0
 */


undefined8 FUN_00ec87a0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_28;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710880 + 0xc0);
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_01196e70(lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_01196cf0(lVar3);
  if (uVar1 < 2) {
    return 0;
  }
  if (uVar1 - 3 < 4) {
    uVar4 = *(undefined8 *)(&DAT_01d4da00 + (long)(int)(uVar1 - 3) * 8);
  }
  else {
    uVar4 = 0;
  }
  FUN_01196d10(lVar3);
  FUN_015ca100(&local_28,0x76b4e3ddac7e4325,uVar4,0,0,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return 1;
}


