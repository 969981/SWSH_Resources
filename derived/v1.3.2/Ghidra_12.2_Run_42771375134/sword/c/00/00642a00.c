/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00642a00; name: FUN_00642a00
 */


void FUN_00642a00(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_2 + 0x10);
  lVar2 = *plVar4;
  if (0 < (int)lVar2) {
    if (param_1 == (long *)0x0) {
      lVar5 = 0;
      do {
        if (*(long *)(*(long *)(param_2 + 0x28) + lVar5 * 8) != 0) {
          *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar5 * 8) = 0;
          lVar2 = *plVar4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)lVar2);
    }
    else {
      lVar5 = 0;
      do {
        plVar3 = *(long **)(*(long *)(param_2 + 0x28) + lVar5 * 8);
        if (plVar3 != (long *)0x0) {
          *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar5 * 8) = 0;
          if ((long *)*plVar3 != (long *)0x0) {
            (**(code **)(*(long *)*plVar3 + 0x18))();
            *plVar3 = 0;
          }
          if ((long *)plVar3[1] != (long *)0x0) {
            (**(code **)(*(long *)plVar3[1] + 0x18))();
            plVar3[1] = 0;
          }
          (**(code **)(*param_1 + 0x48))
                    (param_1,plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x695);
          lVar2 = *plVar4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)lVar2);
    }
  }
  if ((param_3 & 1) == 0) {
    plVar3 = (long *)(param_2 + 0x28);
    if (((*(byte *)(param_2 + 0x48) & 1) == 0) && (*plVar3 != 0)) {
      plVar1 = *(long **)(param_2 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar3 = 0;
    }
    *plVar4 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *plVar3 = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else if (lVar2 != 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}


