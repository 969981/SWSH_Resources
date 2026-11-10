/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005466d0; name: FUN_005466d0
 */


undefined8 FUN_005466d0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *param_2 = (long)puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    return 0xfffffffd;
  }
  (**(code **)*puVar1)();
  return 0;
}


