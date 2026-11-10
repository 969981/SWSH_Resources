/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147b420; name: FUN_0147b420
 */


void FUN_0147b420(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  
  if (*(int *)(*(long *)(param_1 + 0xa0) + 0x6a0) == -1) {
    return;
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar9)(puVar9);
    plVar3 = (long *)FUN_0146e370();
    puVar11 = (undefined8 *)0x0;
    if (plVar2 != (long *)0x0) {
      do {
        if (plVar2 == plVar3) {
          puVar11 = puVar9 + -10;
          goto LAB_0147b48c;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_0147b48c:
  lVar4 = *(long *)(param_1 + 0xa0);
  switch(*(undefined4 *)(param_1 + (ulong)*(uint *)(lVar4 + 0x6a0) * 4 + 0x84)) {
  case 0:
    piVar12 = (int *)puVar11[0xc];
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
    if (*piVar12 == 2) {
      uVar7 = piVar12[4];
      if ((uint)piVar12[0x42] <= uVar7) {
        uVar7 = (piVar12[0x42] + uVar7) - 3;
      }
    }
    else {
      uVar7 = piVar12[4];
    }
    uVar5 = (**(code **)(**(long **)(piVar12 + 2) + 0x50))(*(long **)(piVar12 + 2),uVar7);
    FUN_014c7bf0(uVar10,0,uVar5);
    if (*piVar12 == 2) {
      uVar7 = piVar12[4];
      if ((uint)piVar12[0x42] <= uVar7) {
        uVar7 = (piVar12[0x42] + uVar7) - 3;
      }
    }
    else {
      uVar7 = piVar12[4];
    }
    uVar10 = (**(code **)(**(long **)(piVar12 + 2) + 0x50))(*(long **)(piVar12 + 2),uVar7);
    uVar6 = FUN_0087d610(uVar10,2);
    if ((uVar6 & 1) == 0) {
      iVar1 = *piVar12;
      uVar7 = piVar12[4];
      if (iVar1 == 2) {
        if ((uint)piVar12[0x42] <= uVar7) goto LAB_0147b600;
      }
      else if ((uVar7 != 0) && (iVar1 == 3)) {
LAB_0147b600:
        uVar10 = 0xb413806c9fbbfdbd;
        goto LAB_0147b640;
      }
      if ((piVar12[0x38] == uVar7) || (piVar12[0x39] == uVar7)) {
        uVar10 = 0xb4137b6c9fbbf53e;
      }
      else {
        if ((iVar1 == 2) && ((uint)piVar12[0x42] <= uVar7)) {
          uVar7 = (uVar7 + piVar12[0x42]) - 3;
        }
        (**(code **)(**(long **)(piVar12 + 2) + 0x50))(*(long **)(piVar12 + 2),uVar7);
        iVar1 = FUN_0087afd0();
        if (iVar1 == 0) {
          uVar10 = 0xb4137e6c9fbbfa57;
        }
        else {
          iVar1 = piVar12[4];
          uVar10 = 0xb4137f6c9fbbfc0a;
          if ((piVar12[6] != iVar1) && (piVar12[7] != iVar1)) {
            if (piVar12[0x18] == 3) {
              uVar10 = 0xb4137d6c9fbbf8a4;
            }
            else {
              uVar10 = 0xb4137b6c9fbbf53e;
              if (piVar12[0x41] != iVar1) {
                if (piVar12[0x18] == 2) {
                  piVar8 = piVar12 + 0x38;
                  if ((*piVar8 == -1) || (piVar8 = piVar12 + 0x39, *piVar8 == -1)) {
                    *piVar8 = piVar12[4];
                  }
                }
                *(undefined4 *)(puVar11[0xc] + 0x14) = 1;
                *(undefined4 *)(param_1 + 0x80) = 4;
                FUN_00ffa160(*(undefined8 *)(param_1 + 0xa0),0,1);
                break;
              }
            }
          }
        }
      }
    }
    else {
      uVar10 = 0x6661bba3f954c76;
    }
LAB_0147b640:
    FUN_01476500(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_0147c280(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_0147c320(param_1,uVar10,1);
    *(undefined4 *)(param_1 + 0x80) = 6;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x80) = 4;
    FUN_00ffa160(lVar4,0,1);
    *(undefined4 *)(puVar11[0xc] + 0x14) = 5;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x80) = 4;
    FUN_00ffa160(lVar4,0,1);
    *(undefined4 *)(puVar11[0xc] + 0x14) = 4;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(byte *)(*(long *)(lVar4 + 0x610) + 0x58) = *(byte *)(*(long *)(lVar4 + 0x610) + 0x58) | 1;
  }
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x6a0) = 0xffffffff;
  return;
}


