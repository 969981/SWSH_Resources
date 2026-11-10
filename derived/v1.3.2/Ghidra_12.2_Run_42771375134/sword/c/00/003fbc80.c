/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fbc80; name: FUN_003fbc80
 */


void FUN_003fbc80(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
    uVar1 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x28));
    if (((((param_2 & 1) != 0) && ((*(uint *)(param_1 + 0x40) & 0x18000) == 0)) &&
        (lVar2 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x30)), lVar2 != 0)) &&
       ((*(byte *)(param_1 + 0x42) >> 2 & 1) == 0)) {
      FUN_003e24d0(uVar3,uVar1,lVar2);
      return;
    }
  }
  return;
}


