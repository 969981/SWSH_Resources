/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d7a00; name: FUN_012d7a00
 */


void FUN_012d7a00(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  
  plVar2 = (long *)FUN_006b92e0(param_2);
  lVar4 = *plVar2;
  if ((((*(long *)(param_1 + 0x280) == lVar4) || (*(long *)(param_1 + 0x288) == lVar4)) ||
      (*(long *)(param_1 + 0x290) == lVar4)) ||
     (((*(long *)(param_1 + 0x298) == lVar4 || (*(long *)(param_1 + 0x2a0) == lVar4)) ||
      ((*(long *)(param_1 + 0x2a8) == lVar4 ||
       ((*(long *)(param_1 + 0x2b0) == lVar4 || (*(long *)(param_1 + 0x2b8) == lVar4)))))))) {
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xc0) + 0x78);
    FUN_006cf0a0(&local_50,param_1 + 0x2c0);
    FUN_00895ec0(uVar10,param_1 + 0x138,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0xcbf29ce484222645;
    *(undefined1 **)(param_1 + 0x2c8) = &DAT_01d38550;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    return;
  }
  puVar3 = (ulong *)FUN_006b92e0(param_2);
  uVar8 = *(ulong *)(param_1 + 0x180);
  if (uVar8 == 0) {
LAB_012d7bec:
    plVar2 = (long *)0x0;
    goto LAB_012d7bf0;
  }
  uVar6 = *puVar3;
  uVar9 = uVar8 - 1;
  if ((uVar9 & uVar8) == 0) {
    uVar7 = uVar9 & uVar6;
LAB_012d7b60:
    plVar5 = *(long **)(*(long *)(param_1 + 0x178) + uVar7 * 8);
    plVar2 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_012d7bf0;
  }
  else {
    uVar7 = uVar6;
    if (uVar6 < uVar8) goto LAB_012d7b60;
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = uVar6 / uVar8;
    }
    uVar7 = uVar6 - uVar7 * uVar8;
    plVar5 = *(long **)(*(long *)(param_1 + 0x178) + uVar7 * 8);
    if (plVar5 == (long *)0x0) {
      plVar2 = (long *)0x0;
      goto LAB_012d7bf0;
    }
  }
  plVar2 = (long *)*plVar5;
  if (plVar2 != (long *)0x0) {
    if ((uVar9 & uVar8) == 0) {
      do {
        uVar8 = plVar2[1];
        if (uVar8 != uVar6 && (uVar8 & uVar9) != uVar7) goto LAB_012d7bec;
      } while (((uVar8 != uVar6) || (plVar2[2] != uVar6)) &&
              (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0));
    }
    else {
      do {
        uVar9 = plVar2[1];
        if (uVar9 == uVar6) {
          if (plVar2[2] == uVar6) break;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar1 * uVar8;
          }
          if (uVar9 != uVar7) goto LAB_012d7bec;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
LAB_012d7bf0:
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xc0) + 0x78);
  if (plVar2 == (long *)0x0) {
    local_50 = 0x90bbc6b0190bf053;
    local_48 = &DAT_01cfa430;
    local_40 = 4;
    local_38 = 0;
  }
  else {
    FUN_006cf0a0(&local_50,plVar2 + 3);
  }
  FUN_00895ec0(uVar10,param_1 + 0x138,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


