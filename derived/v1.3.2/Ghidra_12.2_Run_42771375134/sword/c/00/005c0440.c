/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0440; name: FUN_005c0440
 */


undefined8 FUN_005c0440(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0xff8) == 0) {
    if ((*(ulong *)(param_1 + 0x1010) & 1) == 0) {
      if (*(long *)(param_1 + 0xff0) != 0) {
        plVar2 = *(long **)(param_1 + 0xfe8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x48))
                    (plVar2,*(long *)(param_1 + 0xff0),
                     "../../../../Include\\SiCore/SiCore_String.inl",0xfa);
        }
        *(undefined8 *)(param_1 + 0xff0) = 0;
      }
      goto LAB_005c04a4;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 0xff0);
    if (((*(ulong *)(param_1 + 0x1010) & 1) == 0) && (*plVar2 != 0)) {
      plVar1 = *(long **)(param_1 + 0xfe8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar2 = 0;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(undefined8 *)(param_1 + 0x1010) = 0;
    *(undefined8 *)(param_1 + 0x1008) = 0;
LAB_005c04a4:
    *(undefined8 *)(param_1 + 0xff0) = 0;
  }
  *(undefined8 *)(param_1 + 0xfe8) = param_2;
  if (*(long *)(param_1 + 0x1028) == 0) {
    if ((*(ulong *)(param_1 + 0x1040) & 1) != 0) goto LAB_005c0500;
    if (*(long *)(param_1 + 0x1020) != 0) {
      plVar2 = *(long **)(param_1 + 0x1018);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*(long *)(param_1 + 0x1020),
                   "../../../../Include\\SiCore/SiCore_String.inl",0xfa);
      }
      *(undefined8 *)(param_1 + 0x1020) = 0;
    }
  }
  else {
    plVar2 = (long *)(param_1 + 0x1020);
    if (((*(ulong *)(param_1 + 0x1040) & 1) == 0) && (*plVar2 != 0)) {
      plVar1 = *(long **)(param_1 + 0x1018);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar2 = 0;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x1028) = 0;
    *(undefined8 *)(param_1 + 0x1040) = 0;
    *(undefined8 *)(param_1 + 0x1038) = 0;
  }
  *(undefined8 *)(param_1 + 0x1020) = 0;
LAB_005c0500:
  *(undefined8 *)(param_1 + 0x1018) = param_2;
  return 1;
}


