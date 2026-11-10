/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007279a0; name: FUN_007279a0
 */


void FUN_007279a0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x88) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),lVar1,*(long *)(param_1 + 0x90) - lVar1,0x10);
  }
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x58) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar1,*(long *)(param_1 + 0x60) - lVar1,4);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x30) << 3,1
              );
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


