/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13c20; name: FUN_00e13c20
 */


undefined1 FUN_00e13c20(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_027194e0 + 0x108);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)PTR_DAT_027194e0 + 0x100);
    lVar3 = lVar3 << 3;
    uVar1 = 1;
    do {
      uVar2 = (**(code **)(*(long *)*puVar4 + 0x40))();
      if (((uVar2 & 1) == 0) && (uVar2 = FUN_00dcbe30(*puVar4), (uVar2 & 1) == 0)) {
        uVar1 = 0;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return uVar1;
}


