/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df8a0; name: FUN_007df8a0
 */


undefined8 FUN_007df8a0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2fa) & 1) == 0) {
      return 1;
    }
    FUN_006d0420(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  return 0;
}


