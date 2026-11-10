/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066e1f0; name: FUN_0066e1f0
 */


void FUN_0066e1f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (plVar7 = (long *)*puVar1, plVar7 != (long *)0x0)) {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar9 + 0x50))(plVar9,plVar7);
      if (lVar2 != 0) {
        plVar12 = plVar7;
        do {
          if ((*(byte *)(plVar12 + 5) & 1) == 0) {
            if (plVar12[1] != 0) {
              plVar3 = (long *)*plVar12;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x48))
                          (plVar3,plVar12[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar12[1] = 0;
            }
            plVar12[1] = 0;
          }
          plVar12 = plVar12 + 6;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar9 + 0x48))
                (plVar9,plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *puVar1 = 0;
  }
  puVar8 = (ulong *)(param_1 + 0x10);
  *puVar8 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar4 = 0;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    uVar4 = FUN_005d04d0(param_1,*(long *)(param_2 + 0x18),1);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar10 = *(ulong *)(param_1 + 0x18);
      uVar4 = *(ulong *)(param_1 + 0x10);
      if (uVar10 < *(ulong *)(param_1 + 0x10)) {
        *puVar8 = uVar10;
        uVar4 = uVar10;
      }
      if (uVar4 != 0) {
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar4 * 0x30;
        lVar2 = *(long *)(param_2 + 0x10);
        goto joined_r0x0066e350;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = *(long *)(param_2 + 0x10);
  }
joined_r0x0066e350:
  if (lVar2 != 0) {
    lVar2 = 0;
    uVar10 = 0;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      lVar11 = *(long *)(param_2 + 0x28);
      if (uVar4 < uVar5) {
LAB_0066e3bc:
        FUN_005c80d0(*(long *)(param_1 + 0x28) + uVar4 * 0x30,lVar11 + lVar2);
        uVar4 = *(long *)(param_1 + 0x10) + 1;
        *(ulong *)(param_1 + 0x10) = uVar4;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x28) + uVar4 * 0x30;
      }
      else {
        lVar6 = uVar5 * 2;
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar6 = *(long *)(param_1 + 0x40) + uVar5;
        }
        uVar4 = FUN_005d04d0(param_1,lVar6,1);
        if ((uVar4 & 1) != 0) {
          uVar4 = *puVar8;
          goto LAB_0066e3bc;
        }
        uVar4 = 0;
        *puVar8 = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      uVar10 = uVar10 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar10 < *(ulong *)(param_2 + 0x10));
  }
  return;
}


