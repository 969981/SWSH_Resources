/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00674ad0; name: FUN_00674ad0
 */


void FUN_00674ad0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x70);
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar3 = (long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (((*(byte *)(param_1 + 0xc0) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = *(long **)(param_1 + 0x98);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar3 = 0;
  }
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  plVar1 = (long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (((*(byte *)(param_1 + 0x118) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = *(long **)(param_1 + 0xd8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar3 = (long *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (((*(byte *)(param_1 + 0x148) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = *(long **)(param_1 + 0x120);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar3 = 0;
  }
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}


