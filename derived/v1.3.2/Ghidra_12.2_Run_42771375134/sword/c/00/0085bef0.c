/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085bef0; name: FUN_0085bef0
 */


void FUN_0085bef0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00815f30(2,*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar4 * 8 + 8),param_2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_008157a0(3,*(undefined8 *)(param_1 + 0x30),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    FUN_00814db0(4,*(undefined8 *)(param_1 + 0x38),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_00814c00(5,*(undefined8 *)(param_1 + 0x40),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    FUN_00815340(*(undefined8 *)(param_1 + 0x48),6,param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    FUN_00815b00(7,*(undefined8 *)(param_1 + 0x50),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 6 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    FUN_008157a0(8,*(undefined8 *)(param_1 + 0x58),param_2);
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_00810910(uVar3 & 0xfffffffffffffffe,param_2);
  return;
}


