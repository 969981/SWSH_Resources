/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d5c0; name: FUN_0077d5c0
 */


undefined1 FUN_0077d5c0(long param_1,short param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x7a);
    if (uVar1 + 1 < (uint)*(ushort *)(param_1 + 0x78)) {
      *(ushort *)(param_1 + 0x7a) = uVar1 + 1;
      *(short *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 2) = param_2;
      *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x7a) * 2) = 0;
    }
    else {
      if (param_2 != 0) {
        return 0;
      }
      if (uVar1 + 1 != (uint)*(ushort *)(param_1 + 0x78)) {
        return 0;
      }
      *(ushort *)(param_1 + 0x7a) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 2) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


