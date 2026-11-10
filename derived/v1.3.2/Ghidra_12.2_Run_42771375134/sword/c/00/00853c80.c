/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853c80; name: FUN_00853c80
 */


void FUN_00853c80(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_008157a0(1,*(undefined8 *)(param_1 + 0x18),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_008157a0(2,*(undefined8 *)(param_1 + 0x20),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_008157a0(3,*(undefined8 *)(param_1 + 0x28),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_00815f30(4,*(undefined8 *)(param_1 + 0x30),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_008153f0(5,*(undefined1 *)(param_1 + 0x38),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    FUN_008153f0(6,*(undefined1 *)(param_1 + 0x39),param_2);
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_00810910(uVar2 & 0xfffffffffffffffe,param_2);
  return;
}


