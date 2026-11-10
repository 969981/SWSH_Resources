/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e2ec0; name: FUN_006e2ec0
 */


undefined4 FUN_006e2ec0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(uint *)(lVar2 + 0x10) == 0) {
    return 0;
  }
  uVar3 = 0;
  lVar4 = 4;
  do {
    if (*(long *)(*(long *)(lVar2 + 0x20) + uVar3 * 8) == param_2) {
      return *(undefined4 *)(*(long *)(lVar2 + 0x18) + lVar4);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
    lVar4 = lVar4 + 0x18;
  } while (uVar1 < *(uint *)(lVar2 + 0x10));
  return 0;
}


