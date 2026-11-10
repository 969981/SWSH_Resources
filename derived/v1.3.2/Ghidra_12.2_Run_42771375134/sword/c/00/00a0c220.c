/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0c220; name: FUN_00a0c220
 */


uint FUN_00a0c220(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  code *pcVar11;
  int iVar12;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x100000000;
  local_50 = 0;
  local_48 = 0;
  switch(*param_3) {
  case 1:
    uVar4 = 0;
    if (*(char *)((long)param_2 + 0x19) != *(char *)(param_3 + 2)) goto joined_r0x00a0c404;
    if (param_3[1] == 4) {
      plVar6 = (long *)*param_2;
      pcVar11 = *(code **)(*plVar6 + 0x788);
LAB_00a0c3ac:
      local_38 = 0;
      (*pcVar11)(plVar6,(long)&local_38 + 4,&local_38);
      local_68 = *(undefined8 *)(param_3 + 4);
      local_60 = *(undefined8 *)(param_3 + 6);
      uVar10 = param_3[1];
      if ((int)local_38 == 0 && local_38._4_4_ == 0) {
        uVar10 = 1;
      }
      local_58 = CONCAT44(uVar10,*param_3);
      local_50 = CONCAT44((int)local_38,local_38._4_4_);
      goto LAB_00a0c560;
    }
LAB_00a0c508:
    uVar5 = 0;
    uVar4 = 0;
joined_r0x00a0c374:
    if (param_1 == (undefined8 *)0x0) goto LAB_00a0c568;
    goto LAB_00a0c310;
  case 2:
    uVar4 = 0;
    if (*(char *)(param_2 + 3) == *(char *)(param_3 + 2)) {
      if (param_3[1] == 4) {
        plVar6 = (long *)*param_2;
        pcVar11 = *(code **)(*plVar6 + 0x790);
        goto LAB_00a0c3ac;
      }
      goto LAB_00a0c508;
    }
    goto joined_r0x00a0c404;
  case 3:
    uVar10 = param_3[2];
    uVar9 = FUN_00932ae0(param_2[4],uVar10);
    if ((uVar9 & 1) == 0) break;
    if (param_3[1] == 1) {
      uVar1 = 0;
      uVar2 = 0;
      uVar10 = 1;
    }
    else {
      uVar4 = 0;
      if (param_3[1] != 4) goto LAB_00a0c568;
      uVar1 = FUN_00932e30(param_2[4],uVar10);
      uVar2 = FUN_00932e90(param_2[4],uVar10);
      uVar10 = param_3[1];
    }
    local_68 = *(undefined8 *)(param_3 + 4);
    local_60 = *(undefined8 *)(param_3 + 6);
    local_58 = CONCAT44(uVar10,*param_3);
    local_50 = CONCAT44(uVar2,uVar1);
LAB_00a0c560:
    uVar4 = 1;
    goto joined_r0x00a0c404;
  case 4:
    uVar4 = FUN_00a0c590(&local_68,param_2,param_3);
    goto joined_r0x00a0c404;
  case 5:
    uVar9 = FUN_008e28f0(param_2[2],param_3[2]);
    if ((uVar9 & 1) != 0) {
      iVar12 = param_3[1];
joined_r0x00a0c4a4:
      if (iVar12 == 1) {
        local_68 = *(undefined8 *)(param_3 + 4);
        local_60 = *(undefined8 *)(param_3 + 6);
        uVar5 = 1;
        uVar4 = 1;
        local_58 = CONCAT44(1,*param_3);
        goto joined_r0x00a0c374;
      }
    }
    break;
  case 6:
    uVar4 = FUN_00a0c6a0(&local_68,param_2,param_3);
joined_r0x00a0c404:
    uVar5 = uVar4;
    if (param_1 != (undefined8 *)0x0) {
LAB_00a0c310:
      uVar4 = uVar5;
      if ((uVar4 & 1) != 0) {
        *param_1 = local_68;
        uVar4 = 1;
        *(undefined4 *)(param_1 + 4) = local_48;
        param_1[1] = local_60;
        param_1[2] = local_58;
        param_1[3] = local_50;
      }
    }
    goto LAB_00a0c568;
  case 7:
    uVar7 = (**(code **)(*(long *)*param_2 + 0x860))
                      ((long *)*param_2,*(undefined1 *)(param_2 + 5),param_3[2]);
    uVar9 = FUN_00934630();
    if ((uVar9 & 1) != 0) {
      if (param_3[1] == 1) {
        iVar12 = 0;
        uVar4 = 0;
        uVar10 = 1;
      }
      else {
        uVar4 = 0;
        if (param_3[1] != 4) goto LAB_00a0c568;
        puVar8 = (uint *)FUN_00934660(uVar7);
        uVar4 = *puVar8 >> 0x10 & 0xf;
        iVar12 = (1 - (*puVar8 >> 0x14 & 0xf)) + uVar4;
        uVar10 = param_3[1];
      }
      local_68 = *(undefined8 *)(param_3 + 4);
      local_60 = *(undefined8 *)(param_3 + 6);
      local_58 = CONCAT44(uVar10,*param_3);
      local_50 = CONCAT44(uVar4,iVar12);
      goto LAB_00a0c560;
    }
    break;
  case 8:
    iVar12 = param_3[2];
    uVar9 = FUN_008e1600(param_2[2]);
    if ((((uVar9 & 1) == 0) && (uVar9 = FUN_008e4a80(param_2[2]), (uVar9 & 1) != 0)) &&
       (iVar3 = FUN_008e4a90(param_2[2]), iVar3 == iVar12)) {
      iVar12 = param_3[1];
      goto joined_r0x00a0c4a4;
    }
    break;
  case 9:
    uVar10 = param_3[2];
    uVar9 = FUN_008e1600(param_2[2]);
    if ((((uVar9 & 1) == 0) && (uVar4 = FUN_008e2ef0(param_2[2],uVar10), (uVar4 & 0xff) != 0)) &&
       (param_3[1] == 2)) {
      local_68 = *(undefined8 *)(param_3 + 4);
      local_60 = *(undefined8 *)(param_3 + 6);
      local_58 = CONCAT44(2,*param_3);
      local_50 = CONCAT44(local_50._4_4_,uVar4) & 0xffffffff000000ff;
      goto LAB_00a0c560;
    }
  }
  uVar4 = 0;
LAB_00a0c568:
  return uVar4 & 1;
}


