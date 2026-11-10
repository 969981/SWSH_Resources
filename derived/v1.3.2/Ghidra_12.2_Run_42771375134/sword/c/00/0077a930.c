/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077a930; name: FUN_0077a930
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0077a930(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,undefined4 param_5
                ,long *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long local_60;
  undefined1 auStack_58 [4];
  uint local_54;
  
  uVar4 = *(uint *)(param_3 + 1);
  uVar10 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
    uVar10 = (ulong)uVar4;
    *(uint *)(param_3 + 1) = uVar4;
    uVar4 = uVar4 << 1;
    if (uVar4 < 9) goto LAB_0077a9c4;
LAB_0077a978:
    if ((int)uVar10 == 0) {
      uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar10 = (ulong)uVar3;
      uVar4 = uVar3 << 1;
      *(uint *)(param_3 + 1) = uVar3;
    }
    uVar11 = (ulong)uVar4;
  }
  else {
    uVar4 = uVar4 << 1;
    if (8 < uVar4) goto LAB_0077a978;
LAB_0077a9c4:
    uVar11 = 8;
  }
  piVar14 = (int *)(auStack_58 + (-8 - (uVar11 + 0xf & 0x1fffffff0)));
  uVar4 = (uint)uVar10;
  if (uVar4 == 0) {
    uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
    uVar10 = (ulong)uVar3;
    *(uint *)(param_3 + 1) = uVar3;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 8 / uVar3;
    }
    if (uVar4 * uVar3 == 8) goto LAB_0077aa54;
LAB_0077a9f0:
    if ((int)uVar10 == 0) {
      uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar4;
      if (uVar4 == 0) {
        uVar10 = (**(code **)(*(long *)*param_3 + 0x30))();
        uVar13 = uVar10 & 0xffffffff;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)piVar14 / uVar13;
        }
        *(int *)(param_3 + 1) = (int)uVar10;
        piVar14 = (int *)(uVar11 * uVar13);
        if ((int)uVar10 == 0) {
          uVar11 = (**(code **)(*(long *)*param_3 + 0x30))();
          uVar10 = uVar11 & 0xffffffff;
          *(int *)(param_3 + 1) = (int)uVar11;
        }
        else {
          uVar10 = uVar10 & 0xffffffff;
        }
        goto LAB_0077aa58;
      }
      uVar10 = (ulong)uVar4;
    }
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = (ulong)piVar14 / uVar10;
    }
    piVar14 = (int *)(uVar10 + uVar11 * uVar10);
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = 8 / uVar4;
    }
    if (uVar3 * uVar4 != 8) goto LAB_0077a9f0;
LAB_0077aa54:
    uVar10 = 8;
  }
LAB_0077aa58:
  iVar5 = (**(code **)(*(long *)*param_3 + 0x38))
                    (0,(long *)*param_3,piVar14,uVar10,1,param_4,&local_54);
  if ((((iVar5 == 1) && (7 < local_54)) && (*piVar14 == 0x4b504b41)) &&
     (iVar5 = piVar14[1], iVar5 != 0)) {
    iVar6 = (int)param_3[1];
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(int *)(param_3 + 1) = iVar6;
    }
    lVar8 = FUN_0077ad90(param_2,param_5,iVar5 + 8,iVar6,auStack_58,&local_60);
    if (lVar8 != 0) {
      lVar12 = *param_3;
      *(int *)(lVar8 + 0x68) = (int)param_3[1];
      *(long *)(lVar8 + 0x60) = lVar12;
      lVar12 = (**(code **)(*(long *)*param_3 + 0x20))();
      *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar12 + 0x18);
      *param_6 = lVar8;
      uVar4 = piVar14[1];
      if (local_54 < 9) {
        uVar10 = 8;
      }
      else {
        uVar1 = local_54 - 8;
        memcpy((void *)(local_60 + 8),piVar14 + 2,(ulong)uVar1);
        uVar7 = *(uint *)(param_3 + 1);
        uVar3 = uVar4;
        if (uVar1 <= uVar4) {
          uVar3 = uVar1;
        }
        uVar1 = uVar3 + 8;
        if (uVar7 == 0) {
          uVar7 = (**(code **)(*(long *)*param_3 + 0x30))();
          uVar3 = ((uVar4 - uVar3) + uVar7) - 1;
          *(uint *)(param_3 + 1) = uVar7;
          if (uVar7 == 0) {
            uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
            uVar7 = 0;
            if (uVar4 != 0) {
              uVar7 = uVar3 / uVar4;
            }
            *(uint *)(param_3 + 1) = uVar4;
            if (uVar4 == 0) {
              uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
              *(uint *)(param_3 + 1) = uVar4;
            }
            uVar4 = uVar4 * uVar7;
            uVar10 = (ulong)uVar1;
          }
          else {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar3 / uVar7;
            }
            uVar4 = uVar7 * uVar4;
            uVar10 = (ulong)uVar1;
          }
        }
        else {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = (((uVar4 - uVar3) + uVar7) - 1) / uVar7;
          }
          uVar4 = uVar7 * uVar2;
          uVar10 = (ulong)uVar1;
        }
      }
      if ((uVar4 != 0) &&
         ((iVar5 = (**(code **)(*(long *)*param_3 + 0x38))
                             (0,(long *)*param_3,local_60 + uVar10,uVar4,1,param_4,&local_54),
          iVar5 != 1 || (local_54 < uVar4)))) {
LAB_0077ad24:
        (*(code *)**(undefined8 **)*param_6)();
        return 2;
      }
      iVar5 = FUN_0077bd30(*param_6 + 0x10,local_60,piVar14[1] + 8);
      if (iVar5 != 1) {
        (*(code *)**(undefined8 **)*param_6)();
        return iVar5;
      }
      if (*(char *)(param_1 + 0x348) == '\0') {
        iVar5 = FUN_004f8470(PTR_FUN_027161b0,param_1);
        if (iVar5 != 1) goto LAB_0077ad24;
        *(undefined1 *)(param_1 + 0x348) = 1;
      }
      lVar8 = *param_6;
      uVar9 = FUN_004f8460();
      iVar5 = FUN_0077bfa0(lVar8 + 0x10,uVar9);
      return iVar5;
    }
    *param_6 = 0;
  }
  if ((long *)*param_3 != (long *)0x0) {
    (**(code **)(*(long *)*param_3 + 0x10))();
  }
  *param_3 = 0;
  return 2;
}


