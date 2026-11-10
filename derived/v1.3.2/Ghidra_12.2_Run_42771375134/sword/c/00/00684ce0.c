/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00684ce0; name: FUN_00684ce0
 */


void FUN_00684ce0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x120);
  if (((*(byte *)(param_1 + 0x140) & 1) == 0) &&
     (puVar4 = (undefined8 *)*puVar1, puVar4 != (undefined8 *)0x0)) {
    plVar5 = *(long **)(param_1 + 0x100);
    if (plVar5 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar5 + 0x50))(plVar5,puVar4);
      if (lVar2 != 0) {
        puVar6 = puVar4;
        do {
          (**(code **)*puVar6)(puVar6);
          lVar2 = lVar2 + -1;
          puVar6 = puVar6 + 0x2e;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar5 + 0x48))
                (plVar5,puVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar5 = (long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (((*(byte *)(param_1 + 400) & 1) == 0) && (*plVar5 != 0)) {
    plVar3 = *(long **)(param_1 + 0x150);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}


