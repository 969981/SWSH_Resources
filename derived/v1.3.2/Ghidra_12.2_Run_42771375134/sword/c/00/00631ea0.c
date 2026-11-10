/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00631ea0; name: FUN_00631ea0
 */


undefined8 FUN_00631ea0(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 == 1) {
    plVar6 = *(long **)(param_1 + 0x88);
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 == (long *)0x0) {
LAB_006320a0:
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        return 0;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x40))
                                 (plVar6,8,1,0x10,"../../../../Include\\SiCore/SiCore_Array.h",0x5d1
                                 );
      if (plVar6 == (long *)0x0) goto LAB_006320a0;
      plVar1 = (long *)(param_1 + 0x88);
      if (lVar7 != 0) {
        *plVar6 = *(long *)*plVar1;
      }
      if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*plVar1 != 0)) {
        plVar4 = *(long **)(param_1 + 0x68);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x48))
                    (plVar4,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar1 = 0;
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(long **)(param_1 + 0x88) = plVar6;
      *(ulong *)(param_1 + 0x70) = (ulong)(lVar7 != 0);
      *(undefined8 *)(param_1 + 0x78) = 1;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x88);
    }
    *(undefined8 *)(param_1 + 0x70) = 1;
    *(long **)(param_1 + 0x90) = plVar6;
    *(long **)(param_1 + 0x98) = plVar6 + 1;
  }
  *(ulong *)(param_1 + 0x110) = param_2;
  *(ulong *)(param_1 + 0x118) = param_2;
  *plVar6 = param_1 + 0xb0;
  lVar7 = **(long **)(param_1 + 0x88);
  if (*(ulong *)(lVar7 + 0x20) != param_2) {
    if ((param_2 < *(ulong *)(lVar7 + 0x28)) ||
       (uVar3 = FUN_00632a90(lVar7 + 0x10,param_2,1), (uVar3 & 1) != 0)) {
      *(ulong *)(lVar7 + 0x20) = param_2;
      if (param_2 == 0) {
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        return 1;
      }
      *(long *)(lVar7 + 0x40) = *(long *)(lVar7 + 0x38);
      *(ulong *)(lVar7 + 0x48) = *(long *)(lVar7 + 0x38) + param_2 * 0x58;
    }
    else {
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
    }
  }
  if (0 < (long)param_2) {
    lVar7 = 0;
    uVar3 = 0;
    do {
      while( true ) {
        lVar5 = *(long *)(**(long **)(param_1 + 0x88) + 0x38);
        lVar2 = lVar5 + lVar7;
        *(ulong *)(lVar2 + 0x10) = uVar3;
        if ((lVar7 == 0) && (*(char *)(param_1 + 0x120) != '\0')) break;
        if (*(long *)(param_1 + 0x20) == 0) {
          *(long *)(param_1 + 0x20) = lVar2;
        }
        else {
          *(long *)(*(long *)(param_1 + 0x28) + 8) = lVar2;
          *(undefined8 *)(lVar5 + lVar7) = *(undefined8 *)(param_1 + 0x28);
        }
        *(long *)(param_1 + 0x28) = lVar2;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
        uVar3 = uVar3 + 1;
        lVar7 = lVar7 + 0x58;
        if (param_2 == uVar3) {
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      lVar7 = 0x58;
    } while (param_2 != uVar3);
  }
  return 1;
}


