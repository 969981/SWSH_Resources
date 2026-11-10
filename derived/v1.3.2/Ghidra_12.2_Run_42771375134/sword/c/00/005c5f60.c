/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5f60; name: FUN_005c5f60
 */


undefined8 FUN_005c5f60(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    plVar2 = param_1 + 1;
    if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar2 != 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar2 = 0;
    }
    *plVar2 = 0;
    param_1[2] = 0;
    uVar3 = 1;
  }
  else {
    plVar2 = (long *)*param_1;
    if ((plVar2 != (long *)0x0) &&
       (__dest = (void *)(**(code **)(*plVar2 + 0x40))
                                   (plVar2,4,param_2,0xffffffff,
                                    "../../../../Include\\SiCore/SiCore_String.inl",0x12d),
       __dest != (void *)0x0)) {
      if ((param_3 & 1) != 0) {
        uVar1 = param_1[2];
        if (param_2 - 1U <= (ulong)param_1[2]) {
          uVar1 = param_2 - 1U;
        }
        if (uVar1 != 0) {
          memcpy(__dest,(void *)param_1[1],uVar1 << 2);
        }
        *(undefined4 *)((long)__dest + uVar1 * 4) = 0;
      }
      if (((*(byte *)(param_1 + 5) & 1) == 0) && (param_1[1] != 0)) {
        plVar2 = (long *)*param_1;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x48))
                    (plVar2,param_1[1],"../../../../Include\\SiCore/SiCore_String.inl",0x13f);
        }
        param_1[1] = 0;
      }
      uVar3 = 1;
      param_1[1] = (long)__dest;
      param_1[4] = param_2;
      goto LAB_005c60ac;
    }
    plVar2 = param_1 + 1;
    if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar2 != 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar2 = 0;
    }
    uVar3 = 0;
    *plVar2 = 0;
    param_1[2] = 0;
  }
  param_1[4] = 0;
LAB_005c60ac:
  param_1[5] = 0;
  return uVar3;
}


