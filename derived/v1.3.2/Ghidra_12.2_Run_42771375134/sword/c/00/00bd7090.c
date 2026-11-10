/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd7090; name: FUN_00bd7090
 */


ulong FUN_00bd7090(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long local_18;
  
  if (*(int *)(*(long *)(param_1 + 0x98) + 100) == 2) {
    iVar1 = FUN_00bdd1a0();
    if (iVar1 - 1U < 2) {
      uVar4 = 0;
      uVar5 = 1;
    }
    else {
      if ((iVar1 == 3) && (FUN_00bdd7c0(&local_18,*(undefined8 *)(param_1 + 0x98)), local_18 != 0))
      {
        puVar6 = *(undefined8 **)(local_18 + 0x60);
        if (puVar6 != (undefined8 *)0x0) {
          plVar2 = (long *)(**(code **)*puVar6)(puVar6);
          if (((*PTR_DAT_0271b788 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar1 != 0)) {
            uVar3 = FUN_00bd9700();
            *(undefined8 *)PTR_DAT_0271b790 = uVar3;
            __cxa_guard_release(PTR_DAT_0271b788);
          }
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)PTR_DAT_0271b790) {
              puVar6 = puVar6 + -10;
              goto joined_r0x00bd7154;
            }
          }
        }
        puVar6 = (undefined8 *)0x0;
joined_r0x00bd7154:
        if (local_18 != 0) {
          (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
          local_18 = 0;
        }
        if (puVar6 != (undefined8 *)0x0) {
          iVar1 = FUN_00bdc320(puVar6);
          if (iVar1 == 1) {
            uVar4 = 0x200000000;
            uVar5 = 1;
            goto LAB_00bd71ec;
          }
          if (iVar1 == 2) {
            uVar4 = 0x300000000;
            uVar5 = 1;
            goto LAB_00bd71ec;
          }
        }
      }
      uVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x400000000;
    uVar5 = 1;
  }
LAB_00bd71ec:
  return uVar4 | uVar5;
}


