/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00667650; name: FUN_00667650
 */


void FUN_00667650(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_2 + 0x10);
  lVar3 = *plVar5;
  if (0 < (int)lVar3) {
    if (param_1 == (long *)0x0) {
      lVar6 = 0;
      do {
        if (*(long *)(*(long *)(param_2 + 0x28) + lVar6 * 8) != 0) {
          *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar6 * 8) = 0;
          lVar3 = *plVar5;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)lVar3);
    }
    else {
      lVar6 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_2 + 0x28) + lVar6 * 8);
        if (lVar4 != 0) {
          *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar6 * 8) = 0;
          FUN_00666680(lVar4);
          (**(code **)(*param_1 + 0x48))
                    (param_1,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x695);
          lVar3 = *plVar5;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)lVar3);
    }
  }
  if ((param_3 & 1) == 0) {
    plVar1 = (long *)(param_2 + 0x28);
    if (((*(byte *)(param_2 + 0x48) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = *(long **)(param_2 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    *plVar5 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else if (lVar3 != 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}


