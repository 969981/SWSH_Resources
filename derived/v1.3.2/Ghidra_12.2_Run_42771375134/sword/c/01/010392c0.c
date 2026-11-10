/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010392c0; name: FUN_010392c0
 */


void FUN_010392c0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x5d0);
  *(undefined4 *)(param_1 + 0x6f4) = param_2;
  puVar2 = (undefined8 *)(lVar5 + 0x50);
  puVar2 = (undefined8 *)(**(code **)*puVar2)(puVar2);
  if (((*PTR_DAT_027238c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027238c0), iVar1 != 0))
  {
    uVar4 = FUN_015c39b0();
    *(undefined8 *)PTR_DAT_027238c8 = uVar4;
    __cxa_guard_release(PTR_DAT_027238c0);
  }
  lVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      if (puVar2 == (undefined8 *)PTR_DAT_027238c8) {
        lVar3 = lVar5;
        goto LAB_01039320;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    lVar3 = 0;
  }
LAB_01039320:
  FUN_016889a0(lVar3,param_2);
  return;
}


