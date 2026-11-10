/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f4d0; name: FUN_00a0f4d0
 */


void FUN_00a0f4d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0 && lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  }
  return;
}


