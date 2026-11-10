/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dcaa0; name: FUN_012dcaa0
 */


undefined8 * FUN_012dcaa0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)&DAT_000000b0;
    }
    puVar2 = (undefined8 *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar3 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar3;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)&DAT_000000b0;
    }
    do {
      if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
        return puVar4 + 0xc;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return (undefined8 *)&DAT_000000b0;
}


