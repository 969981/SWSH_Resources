/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009354a0; name: FUN_009354a0
 */


undefined8 FUN_009354a0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x100000000;
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    return 1;
  }
  uVar2 = FUN_009356a0(*(undefined4 *)(param_1 + 8));
  if (uVar1 < uVar2) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return 1;
  }
  return 0;
}


