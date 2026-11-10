/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00882480; name: FUN_00882480
 */


uint FUN_00882480(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 2;
    if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
        != '\0') {
      uVar3 = (ulong)*(uint *)(param_1 + 8);
    }
  }
  piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar3 * 0x110 + 8) + 400) +
                  (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar3 * 0x110 + 8) + 400));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar3 == 0)) {
    return 0;
  }
  iVar2 = (int)*(char *)((long)piVar1 + uVar3);
  return -iVar2 & iVar2 >> 0x1f;
}


