/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064dbe0; name: FUN_0064dbe0
 */


void FUN_0064dbe0(long param_1)

{
  void *__s;
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0x20a8) == '\0') {
    return;
  }
  __s = (void *)(param_1 + 0x50);
  (**(code **)PTR_DAT_02714a18)(__s);
  puVar3 = PTR_DAT_027144a8;
  puVar2 = PTR_DAT_02714488;
  plVar1 = (long *)(param_1 + 0x2078);
  if (*(long *)(param_1 + 0x2060) != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      (**(code **)puVar2)(*plVar1 + lVar4,0xffffffffffffffff);
      (**(code **)puVar3)(*plVar1 + lVar4);
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x40;
    } while (uVar6 < *(ulong *)(param_1 + 0x2060));
  }
  if (((*(byte *)(param_1 + 0x2098) & 1) == 0) && (lVar4 = *plVar1, lVar4 != 0)) {
    plVar5 = *(long **)(param_1 + 0x2058);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x50))(plVar5,lVar4);
      (**(code **)(*plVar5 + 0x48))(plVar5,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  *(ulong *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x2068) = 0;
  *(undefined8 *)(param_1 + 0x2098) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x2080) = 0;
  *(undefined8 *)(param_1 + 0x2088) = 0;
  (**(code **)PTR_DAT_02714a20)(__s);
                    /* WARNING: Subroutine does not return */
  memset(__s,0,0x2000);
}


