/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147b7a0; name: FUN_0147b7a0
 */


void FUN_0147b7a0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  
  if (*(int *)(*(long *)(param_1 + 0xa0) + 0x6a0) == -1) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0147b800:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_0146e370();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          goto LAB_0147b804;
        }
      }
      goto LAB_0147b800;
    }
  }
LAB_0147b804:
  lVar3 = *(long *)(param_1 + 0xa0);
  piVar9 = (int *)puVar7[0xc];
  piVar10 = (int *)(param_1 + (ulong)*(uint *)(lVar3 + 0x6a0) * 4 + 0x84);
  iVar1 = *piVar10;
  if (1 < iVar1 - 4U) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x80) = 4;
      FUN_00ffa160(lVar3,0,1);
      *(undefined4 *)(puVar7[0xc] + 0x14) = 5;
    }
    else if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(byte *)(*(long *)(lVar3 + 0x610) + 0x58) = *(byte *)(*(long *)(lVar3 + 0x610) + 0x58) | 1;
    }
    goto LAB_0147ba14;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
  if (*piVar9 == 2) {
    uVar6 = piVar9[4];
    if ((uint)piVar9[0x42] <= uVar6) {
      uVar6 = (piVar9[0x42] + uVar6) - 3;
    }
  }
  else {
    uVar6 = piVar9[4];
  }
  uVar4 = (**(code **)(**(long **)(piVar9 + 2) + 0x50))(*(long **)(piVar9 + 2),uVar6);
  FUN_014c7bf0(uVar8,0,uVar4);
  if (*piVar9 == 2) {
    uVar6 = piVar9[4];
    if ((uint)piVar9[0x42] <= uVar6) {
      uVar6 = (piVar9[0x42] + uVar6) - 3;
    }
  }
  else {
    uVar6 = piVar9[4];
  }
  uVar8 = (**(code **)(**(long **)(piVar9 + 2) + 0x50))(*(long **)(piVar9 + 2),uVar6);
  uVar5 = FUN_0087d610(uVar8,2);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0xb413806c9fbbfdbd;
    if (*piVar9 == 2) {
      if ((uint)piVar9[4] < (uint)piVar9[0x42]) {
LAB_0147b968:
        (**(code **)(**(long **)(piVar9 + 2) + 0x50))();
        iVar1 = FUN_0087afd0();
        if (iVar1 == 0) {
          uVar5 = 0x7e6c9fbbfa57;
        }
        else {
          uVar5 = 0xb4137f6c9fbbfc0a;
          if ((piVar9[6] == piVar9[4]) || (piVar9[7] == piVar9[4])) goto LAB_0147b9d8;
          if (piVar9[0x18] != 3) {
            piVar9[(ulong)(*piVar10 == 5) + 0x38] = piVar9[4];
            FUN_01473e30(*(undefined8 *)(param_1 + 0xa0),1);
            *(undefined4 *)(param_1 + 0x80) = 1;
            lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 0x610);
            *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
            FUN_01476200(*(undefined8 *)(param_1 + 0xa0));
            goto LAB_0147ba14;
          }
          uVar5 = 0x7d6c9fbbf8a4;
        }
        uVar5 = uVar5 | 0xb413000000000000;
      }
    }
    else if ((piVar9[4] == 0) || (*piVar9 != 3)) goto LAB_0147b968;
  }
  else {
    uVar5 = 0x6661bba3f954c76;
  }
LAB_0147b9d8:
  FUN_01476500(*(undefined8 *)(param_1 + 0xa0),0);
  FUN_0147c280(*(undefined8 *)(param_1 + 0xa0),0);
  FUN_0147c320(param_1,uVar5,1);
  *(undefined4 *)(param_1 + 0x80) = 6;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
LAB_0147ba14:
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x6a0) = 0xffffffff;
  return;
}


