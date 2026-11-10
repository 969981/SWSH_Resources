/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048beb0; name: FUN_0048beb0
 */


void FUN_0048beb0(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_004a7b10(*(undefined8 *)(param_1 + 0x160));
  *(undefined2 *)(param_1 + 0x268) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x26b);
  if ((uVar1 >> 0xf & 1) == 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *(uint *)(param_1 + 0x26b) = uVar1 | 0x8000;
    FUN_0044f530(param_1 + 0x18);
    return;
  }
  return;
}


