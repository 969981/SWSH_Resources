/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa79e0; name: FUN_00fa79e0
 */


void FUN_00fa79e0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_011b80e0(&local_28,param_1 + 0x90);
  if (local_28 == 0) {
    local_30 = 0;
    lVar6 = local_48;
    lVar1 = local_60;
    lVar2 = local_58;
    lVar3 = local_50;
    lVar4 = local_40;
    lVar5 = local_38;
    goto joined_r0x00fa7d94;
  }
  FUN_01029800(&local_30);
  lVar6 = local_48;
  lVar1 = local_60;
  lVar2 = local_58;
  lVar3 = local_50;
  lVar4 = local_40;
  lVar5 = local_38;
  if ((local_30 == 0) ||
     ((**(code **)(*(long *)(local_30 + 0x48) + 0x18))(), lVar6 = local_48, lVar1 = local_60,
     lVar2 = local_58, lVar3 = local_50, lVar4 = local_40, lVar5 = local_38, 5 < param_2))
  goto joined_r0x00fa7d94;
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 200);
  switch(param_2) {
  case 0:
    lVar6 = FUN_00fa7fc0(&local_30,uVar7);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(long *)(param_1 + 0x60) = lVar6;
    local_38 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_38);
    lVar6 = local_48;
    lVar1 = local_60;
    lVar2 = local_58;
    lVar3 = local_50;
    lVar4 = local_40;
    lVar5 = 0;
    if (local_38 == 0) break;
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
joined_r0x00fa7d10:
    if (local_28 == 0) {
      return;
    }
    goto LAB_00fa7ae8;
  case 1:
    lVar6 = FUN_00fa80a0(&local_30);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(long *)(param_1 + 0x78) = lVar6;
    local_50 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_50);
    lVar6 = local_48;
    lVar1 = local_60;
    lVar2 = local_58;
    lVar3 = 0;
    lVar4 = local_40;
    lVar5 = local_38;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      goto joined_r0x00fa7d10;
    }
    break;
  case 2:
    lVar6 = FUN_00fa8180(&local_30);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    *(long *)(param_1 + 0x80) = lVar6;
    local_58 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_58);
    lVar6 = local_48;
    lVar1 = local_60;
    lVar2 = 0;
    lVar3 = local_50;
    lVar4 = local_40;
    lVar5 = local_38;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
      goto joined_r0x00fa7d10;
    }
    break;
  case 3:
    lVar6 = FUN_00fa8260(&local_30);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    *(long *)(param_1 + 0x88) = lVar6;
    local_60 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_60);
    lVar6 = local_48;
    lVar1 = 0;
    lVar2 = local_58;
    lVar3 = local_50;
    lVar4 = local_40;
    lVar5 = local_38;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
      goto joined_r0x00fa7d10;
    }
    break;
  case 4:
    lVar6 = FUN_00fa7fc0(&local_30,uVar7);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(long *)(param_1 + 0x68) = lVar6;
    local_40 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_40);
    lVar6 = local_48;
    lVar1 = local_60;
    lVar2 = local_58;
    lVar3 = local_50;
    lVar4 = 0;
    lVar5 = local_38;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
      goto joined_r0x00fa7d10;
    }
    break;
  case 5:
    lVar6 = FUN_00fa7fc0(&local_30,uVar7);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(long *)(param_1 + 0x70) = lVar6;
    local_48 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_010294e0(lVar6,&local_48);
    lVar6 = 0;
    lVar1 = local_60;
    lVar2 = local_58;
    lVar3 = local_50;
    lVar4 = local_40;
    lVar5 = local_38;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
      lVar6 = local_48;
      lVar1 = local_60;
      lVar2 = local_58;
      lVar3 = local_50;
      lVar4 = local_40;
      lVar5 = local_38;
    }
  }
joined_r0x00fa7d94:
  local_38 = lVar5;
  local_40 = lVar4;
  local_50 = lVar3;
  local_58 = lVar2;
  local_60 = lVar1;
  local_48 = lVar6;
  if (local_28 != 0) {
LAB_00fa7ae8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


