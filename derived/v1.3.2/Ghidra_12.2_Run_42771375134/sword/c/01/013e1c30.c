/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e1c30; name: FUN_013e1c30
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_013e1c30(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x58);
  puVar5 = (undefined8 *)(lVar4 + 0x50);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_027275a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027275a0), iVar1 != 0))
  {
    if (((*PTR_DAT_027275b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027275b8), iVar1 != 0)) {
      if (((*PTR_DAT_02717528 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
        uVar3 = FUN_00b8c810();
        *(undefined8 *)PTR_DAT_02717530 = uVar3;
        __cxa_guard_release(PTR_DAT_02717528);
      }
      *(undefined **)PTR_DAT_027275a8 = PTR_DAT_02717530;
      __cxa_guard_release(PTR_DAT_027275b8);
    }
    *(undefined **)PTR_DAT_027275b0 = PTR_DAT_027275a8;
    __cxa_guard_release(PTR_DAT_027275a0);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_027275b0) break;
    plVar2 = (long *)*plVar2;
  }
  return lVar4;
}


