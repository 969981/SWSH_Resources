/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005385c0; name: FUN_005385c0
 */


uint FUN_005385c0(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x1168) == *(long *)(param_1 + 0x20)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x40))
              (*(long **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x160))(*(long **)(param_1 + 0x18),0);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x148))(*(long **)(param_1 + 0x18),0xffffffff,1);
  FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),0,*(undefined8 *)(param_1 + 0x1168),0);
  }
  uVar1 = FUN_0053fce0(*(undefined8 *)(param_1 + 0x18));
  return uVar1 & (int)uVar1 >> 0x1f;
}


