/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5e00; name: FUN_005c5e00
 */


undefined8 FUN_005c5e00(long *param_1,long param_2,ulong param_3)

{
  size_t __n;
  long *plVar1;
  void *__dest;
  undefined8 uVar2;
  long *plVar3;
  
  if (param_2 == 0) {
    plVar1 = param_1 + 1;
    if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar1 != 0)) {
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_1[2] = 0;
    uVar2 = 1;
  }
  else {
    plVar1 = (long *)*param_1;
    if ((plVar1 != (long *)0x0) &&
       (__dest = (void *)(**(code **)(*plVar1 + 0x40))
                                   (plVar1,1,param_2,0xffffffff,
                                    "../../../../Include\\SiCore/SiCore_String.inl",0x12d),
       __dest != (void *)0x0)) {
      if ((param_3 & 1) != 0) {
        __n = param_1[2];
        if (param_2 - 1U <= (ulong)param_1[2]) {
          __n = param_2 - 1U;
        }
        if (__n != 0) {
          memcpy(__dest,(void *)param_1[1],__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
      }
      if (((*(byte *)(param_1 + 5) & 1) == 0) && (param_1[1] != 0)) {
        plVar1 = (long *)*param_1;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x48))
                    (plVar1,param_1[1],"../../../../Include\\SiCore/SiCore_String.inl",0x13f);
        }
        param_1[1] = 0;
      }
      uVar2 = 1;
      param_1[1] = (long)__dest;
      param_1[4] = param_2;
      goto LAB_005c5f4c;
    }
    plVar1 = param_1 + 1;
    if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar1 != 0)) {
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    uVar2 = 0;
    *plVar1 = 0;
    param_1[2] = 0;
  }
  param_1[4] = 0;
LAB_005c5f4c:
  param_1[5] = 0;
  return uVar2;
}


