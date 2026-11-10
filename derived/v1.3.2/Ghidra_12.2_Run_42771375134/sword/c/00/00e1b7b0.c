/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1b7b0; name: FUN_00e1b7b0
 */


void FUN_00e1b7b0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_027194e0 + 0x108);
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(*(long *)PTR_DAT_027194e0 + 0x100);
    lVar3 = lVar3 << 3;
    do {
      uVar2 = (**(code **)(*(long *)*puVar4 + 0x40))();
      if ((uVar2 & 1) == 0) {
        FUN_00dcf6e0(*puVar4);
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  puVar1 = PTR_DAT_0271e770;
  FUN_00d9fc00(*(undefined8 *)PTR_DAT_0271e770,10);
  FUN_00d9fc00(*(undefined8 *)puVar1,9);
  FUN_00d9fc00(*(undefined8 *)puVar1,0xb);
  return;
}


