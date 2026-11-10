/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00423240; name: FUN_00423240
 */


void FUN_00423240(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x90) != 0)) &&
     ((*(int *)(lVar1 + 0x90) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    FUN_00422be0(uVar2,*(undefined4 *)(lVar1 + 0x34),*(undefined4 *)(lVar1 + 0x30),
                 *(undefined4 *)(lVar1 + 0x38),
                 *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xc0,
                 *(undefined4 *)(lVar1 + 0x94));
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xc0 + 0xb0) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x90);
    lVar1 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x90) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      FUN_00422be0(uVar2,*(undefined4 *)(lVar1 + 0x34),*(undefined4 *)(lVar1 + 0x30),
                   *(undefined4 *)(lVar1 + 0x38),
                   *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xc0 + 0xc0,
                   *(undefined4 *)(lVar1 + 0x94));
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xc0 + 0x170)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x90);
    }
  }
  return;
}


