/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de7330; name: FUN_00de7330
 */


void FUN_00de7330(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar1 != 0) {
    FUN_0075cc50(lVar1);
    (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
              (*(long **)(param_1 + 0x178),lVar1,*(undefined8 *)(param_1 + 0x180),
               *(undefined8 *)(param_1 + 0x188));
  }
  FUN_00de71f0(param_1);
  return;
}


