/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8c00; name: FUN_005c8c00
 */


void FUN_005c8c00(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x140);
  plVar1 = (long *)(param_1 + 0x120);
  *(long **)(param_1 + 8) = param_2;
  if (*(long *)(param_1 + 0x128) == 0) {
    if ((uVar3 & 1) == 0) {
      if (*plVar1 != 0) {
        plVar2 = *(long **)(param_1 + 0x118);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x48))
                    (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
          uVar3 = *(ulong *)(param_1 + 0x140);
        }
        *plVar1 = 0;
      }
      goto LAB_005c8c68;
    }
  }
  else {
    if (((uVar3 & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    uVar3 = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
LAB_005c8c68:
    *plVar1 = 0;
  }
  *(long **)(param_1 + 0x118) = param_2;
  if (((uVar3 & 1) == 0) && (*plVar1 != 0)) {
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x48))
                (param_2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x80;
  uVar3 = *(ulong *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x150);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x140) = 1;
  *(long *)(param_1 + 0x120) = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (*(long *)(param_1 + 0x158) == 0) {
    if ((uVar3 & 1) != 0) goto LAB_005c8d0c;
    if (*plVar1 != 0) {
      plVar2 = *(long **)(param_1 + 0x148);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
        uVar3 = *(ulong *)(param_1 + 0x170);
      }
      *plVar1 = 0;
    }
  }
  else {
    if (((uVar3 & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = *(long **)(param_1 + 0x148);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    uVar3 = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *plVar1 = 0;
LAB_005c8d0c:
  *(long **)(param_1 + 0x148) = param_2;
  if (((uVar3 & 1) == 0) && (*plVar1 != 0)) {
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x48))
                (param_2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0x80;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x170) = 1;
  *(long *)(param_1 + 0x150) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x158) = 0;
  return;
}


