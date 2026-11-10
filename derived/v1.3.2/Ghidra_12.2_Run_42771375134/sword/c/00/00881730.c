/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00881730; name: FUN_00881730
 */


char FUN_00881730(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  
  if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 2;
    if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
        != '\0') {
      uVar4 = (ulong)*(uint *)(param_1 + 8);
    }
  }
  piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar4 * 0x110 + 8) + 400) +
                  (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar4 * 0x110 + 8) + 400));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar4 == 0)) {
    return '\0';
  }
  cVar3 = *(char *)((long)piVar1 + uVar4);
  cVar2 = 'd';
  if (cVar3 != 'e') {
    cVar2 = cVar3;
  }
  return cVar2;
}


