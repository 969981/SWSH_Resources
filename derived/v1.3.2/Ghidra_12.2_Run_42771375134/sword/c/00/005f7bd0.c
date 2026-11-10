/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f7bd0; name: FUN_005f7bd0
 */


void FUN_005f7bd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x700);
  plVar1 = (long *)(param_1 + 0x718);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x700);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x738) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x6f8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(ulong *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  uVar3 = *(ulong *)(param_1 + 0x6b0);
  plVar1 = (long *)(param_1 + 0x6c8);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x6b0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x6e8) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x6a8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(ulong *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  uVar3 = *(ulong *)(param_1 + 0x660);
  plVar1 = (long *)(param_1 + 0x678);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x660);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x698) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x658);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(ulong *)(param_1 + 0x660) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  return;
}


