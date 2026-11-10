/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7cb20; name: FUN_00e7cb20
 */


undefined8 FUN_00e7cb20(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_18;
  
  FUN_00deff50(&local_18);
  plVar2 = (long *)(*(code *)**(undefined8 **)(local_18 + 0x50))();
  if (((*PTR_DAT_0271ed68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed68), iVar1 != 0))
  {
    if (((*PTR_DAT_0271ed78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 != 0)) {
      if (((*PTR_DAT_0271ed88 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar1 != 0)) {
        uVar3 = FUN_0156b190();
        *(undefined8 *)PTR_DAT_0271ed90 = uVar3;
        __cxa_guard_release(PTR_DAT_0271ed88);
      }
      *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
      __cxa_guard_release(PTR_DAT_0271ed78);
    }
    *(undefined **)PTR_DAT_0271ed70 = PTR_DAT_0271ed80;
    __cxa_guard_release(PTR_DAT_0271ed68);
  }
  do {
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
joined_r0x00e7cba4:
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      }
      return uVar3;
    }
    if (plVar2 == (long *)PTR_DAT_0271ed70) {
      uVar3 = 1;
      goto joined_r0x00e7cba4;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}


