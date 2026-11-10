/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064fe70; name: FUN_0064fe70
 */


void FUN_0064fe70(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = (ulong *)(param_1 + 0x48);
  uVar3 = *puVar4;
  plVar1 = (long *)(param_1 + 0x60);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  puVar4 = (ulong *)(param_1 + 0xa0);
  uVar3 = *puVar4;
  plVar1 = (long *)(param_1 + 0xb8);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xd8) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x98);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  puVar4 = (ulong *)(param_1 + 0xf8);
  uVar3 = *puVar4;
  plVar1 = (long *)(param_1 + 0x110);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x130) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0xf0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  uVar3 = *(ulong *)(param_1 + 0x150);
  plVar1 = (long *)(param_1 + 0x168);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *(ulong *)(param_1 + 0x150);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x188) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x148);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(ulong *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}


