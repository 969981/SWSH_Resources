/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396ea0; name: FUN_00396ea0
 */


void FUN_00396ea0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    uVar2 = 0;
    do {
      lVar4 = *(long *)(lVar3 + (uVar2 & 0xffffffff) * 8);
      if (lVar4 == param_2) {
        if ((*(ushort *)(param_2 + 8) & 0xfffe) == 6) {
          *(undefined8 *)(lVar4 + 0x48) = 0;
        }
        *(uint *)(param_1 + 0x40) = uVar1 - 1;
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
        *(undefined1 *)(param_1 + 0x50) = 0;
        return;
      }
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < uVar1);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}


