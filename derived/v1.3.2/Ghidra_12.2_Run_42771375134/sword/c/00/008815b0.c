/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008815b0; name: FUN_008815b0
 */


undefined1 FUN_008815b0(long param_1)

{
  int *piVar1;
  ulong uVar2;
  
  if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 2;
    if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
        != '\0') {
      uVar2 = (ulong)*(uint *)(param_1 + 8);
    }
  }
  piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                  (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
    return 0;
  }
  uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
  if (uVar2 == 0) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar2);
}


