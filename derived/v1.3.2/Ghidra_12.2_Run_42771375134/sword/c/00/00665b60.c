/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00665b60; name: FUN_00665b60
 */


void FUN_00665b60(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 8);
  if (*(long *)(param_1 + 0x40) == 0) {
    if ((*(ulong *)(param_1 + 0x58) & 1) != 0) goto LAB_00665bd0;
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      plVar2 = *(long **)(param_1 + 0x30);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar3,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
      }
      *(long *)(param_1 + 0x38) = 0;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 0x38);
    if (((*(ulong *)(param_1 + 0x58) & 1) == 0) && (*plVar2 != 0)) {
      plVar1 = *(long **)(param_1 + 0x30);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar2 = 0;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
LAB_00665bd0:
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(long *)(param_1 + 0x20) = param_2;
  return;
}


