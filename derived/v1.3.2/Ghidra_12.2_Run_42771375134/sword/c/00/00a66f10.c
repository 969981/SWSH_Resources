/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a66f10; name: FUN_00a66f10
 */


bool FUN_00a66f10(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x548) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x550) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x560) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x568) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x570) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x578) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x580) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x588) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x590) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x598) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x5a0) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x5a8) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x5b0) + 0x60))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if ((*(long **)(param_1 + 0xbd0) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0xbd0) + 0x60))(), (uVar1 & 1) == 0)) {
    return false;
  }
  if ((*(long **)(param_1 + 0xbd8) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0xbd8) + 0x60))(), (uVar1 & 1) == 0)) {
    return false;
  }
  if (*(long *)(param_1 + 0x818) == 0) {
    return false;
  }
  if (*(char *)(*(long *)(param_1 + 0x818) + 0x170) == '\0') {
    return false;
  }
  if (*(long *)(param_1 + 0x6f8) == 0) {
    return false;
  }
  if (*(char *)(*(long *)(param_1 + 0x6f8) + 0x170) == '\0') {
    return false;
  }
  return *(long *)(param_1 + 0x14d8) == 0;
}


