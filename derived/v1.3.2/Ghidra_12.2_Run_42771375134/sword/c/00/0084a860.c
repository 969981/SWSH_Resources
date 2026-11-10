/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084a860; name: FUN_0084a860
 */


void FUN_0084a860(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00814ad0(1,*(undefined4 *)(param_1 + 0x18),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    FUN_00814ad0(2,*(undefined4 *)(param_1 + 0x1c),param_2);
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_00810910(uVar2 & 0xfffffffffffffffe,param_2);
  return;
}


