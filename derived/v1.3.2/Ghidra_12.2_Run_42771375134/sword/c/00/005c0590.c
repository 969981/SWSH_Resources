/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0590; name: FUN_005c0590
 */


void FUN_005c0590(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((int)param_1[3] != 0) && (*(int *)(param_1 + 3) = (int)param_1[3] + -1, (int)param_1[3] == 0)
     ) {
    plVar1 = param_1 + 0x8b;
    if (((*(byte *)(param_1 + 0x8f) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = (long *)param_1[0x8a];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_1[0x8c] = 0;
    uVar3 = param_1[0x1e6];
    plVar1 = param_1 + 0x1e9;
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        plVar2 = *(long **)(*plVar1 + uVar4 * 8);
        if (plVar2 != (long *)0x0) {
          *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
          (**(code **)(*plVar2 + 0x18))();
          uVar3 = param_1[0x1e6];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    if (((*(byte *)(param_1 + 0x1ed) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = (long *)param_1[0x1e5];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0x1e6] = 0;
    param_1[0x1e7] = 0;
    param_1[0x1ed] = 0;
    *plVar1 = 0;
    param_1[0x1ea] = 0;
    param_1[0x1eb] = 0;
    (**(code **)(*param_1 + 0x118))(param_1);
    plVar1 = param_1 + 0x1df;
    if (((*(byte *)(param_1 + 0x1e3) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = (long *)param_1[0x1db];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0x1dd] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1e3] = 0;
    *plVar1 = 0;
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 0;
    (**(code **)(*param_1 + 0xd8))(param_1,param_1[0x1d9]);
    if ((long *)param_1[0x1d9] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1d9] + 0x18))();
      param_1[0x1d9] = 0;
    }
    (**(code **)(*param_1 + 0xe0))(param_1);
    plVar1 = param_1 + 0xd4;
    if (((*(byte *)(param_1 + 0xd8) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = (long *)param_1[0xd0];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd8] = 0;
    *plVar1 = 0;
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
    nn::time::Finalize();
    FUN_005c07a0(param_1);
    if ((long *)param_1[0x91] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x91] + 0x18))();
      param_1[0x91] = 0;
    }
  }
  return;
}


