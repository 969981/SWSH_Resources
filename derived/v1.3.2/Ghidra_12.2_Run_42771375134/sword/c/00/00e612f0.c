/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e612f0; name: FUN_00e612f0
 */


undefined8 FUN_00e612f0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x7d8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = FUN_00e331a0(lVar2,param_1 + 0xb80);
  if (lVar4 == 0) {
    uVar3 = 4;
  }
  else {
    uVar1 = FUN_00e33320(lVar2,lVar4);
    if (uVar1 < 6) {
      uVar3 = (ulong)(0x256d1U >> (ulong)(uVar1 * 3 & 0x1f) & 7 ^ 4);
    }
    else {
      uVar3 = 2;
    }
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return *(undefined8 *)(&DAT_02160cf0 + uVar3 * 8);
}


