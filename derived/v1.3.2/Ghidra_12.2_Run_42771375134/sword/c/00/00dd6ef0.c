/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd6ef0; name: FUN_00dd6ef0
 */


uint FUN_00dd6ef0(int param_1,int param_2,undefined8 *param_3,uint param_4,int param_5,
                 undefined8 *param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (param_1 != 3) {
    if (param_1 == 2) {
      uVar3 = FUN_01510f00(lVar5,*param_6);
      uVar3 = uVar3 ^ param_7 ^ 1;
      goto joined_r0x00dd7184;
    }
    if (param_1 != 1) {
      uVar3 = 1;
      goto joined_r0x00dd7184;
    }
    lVar7 = *(long *)(*(long *)puVar2 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)puVar1 + 0x1b8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar3 = FUN_015114c0(lVar6,*param_3);
    if (param_5 == 2) {
      if (param_4 <= uVar3) goto LAB_00dd7130;
LAB_00dd70d4:
      uVar3 = 0;
    }
    else {
      if (param_5 == 1) {
        if (uVar3 == param_4) goto LAB_00dd7130;
        goto LAB_00dd70d4;
      }
      if ((param_5 != 0) || (uVar3 <= param_4)) goto LAB_00dd70d4;
LAB_00dd7130:
      uVar3 = 1;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    goto joined_r0x00dd7184;
  }
  lVar7 = *(long *)(*(long *)puVar2 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  uVar3 = FUN_015114c0(lVar6,*param_3);
  if (param_5 == 2) {
    if (param_4 <= uVar3) goto LAB_00dd7094;
LAB_00dd7148:
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    if (param_5 == 1) {
      if (uVar3 == param_4) goto LAB_00dd7094;
      goto LAB_00dd7148;
    }
    if ((param_5 != 0) || (uVar3 <= param_4)) goto LAB_00dd7148;
LAB_00dd7094:
    uVar4 = 1;
    uVar3 = 1;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    uVar3 = uVar4;
  }
  uVar4 = FUN_01510f00(lVar5,*param_6);
  uVar4 = uVar4 ^ param_7 ^ 1;
  if (param_2 == 1) {
    uVar3 = uVar3 & uVar4;
  }
  else if (param_2 == 0) {
    uVar3 = uVar3 | uVar4;
  }
  else {
    uVar3 = 0;
  }
joined_r0x00dd7184:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar3 & 1;
}


