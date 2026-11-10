/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dcac0; name: FUN_005dcac0
 */


void FUN_005dcac0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 0x58);
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar1 = (long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (((*(byte *)(param_1 + 0xb0) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x88);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


