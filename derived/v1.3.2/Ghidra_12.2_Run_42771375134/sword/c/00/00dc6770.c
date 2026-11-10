/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc6770; name: FUN_00dc6770
 */


undefined8 FUN_00dc6770(long *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  long local_b0;
  long local_a8;
  long local_98;
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  long local_48;
  
  uVar3 = FUN_00db5e80(param_1,param_2,param_3 & 1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0x578) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0)) {
      lVar4 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_c8 = *(long **)PTR_DAT_02715560;
    if (local_c8 != (long *)0x0) {
      (**(code **)(local_c8[9] + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_c8,*(long *)(lVar6 + 0x578),param_1 + 0x75);
  }
  FUN_006cf0c0(auStack_70,&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(local_c8[9] + 0x18))();
    local_c8 = (long *)0x0;
  }
  if (*(long *)(lVar6 + 0x688) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0)) {
      lVar4 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_c8 = *(long **)PTR_DAT_02715560;
    if (local_c8 != (long *)0x0) {
      (**(code **)(local_c8[9] + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_c8,*(long *)(lVar6 + 0x688),param_1 + 0x74);
  }
  FUN_006cf0c0(auStack_90,&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(local_c8[9] + 0x18))();
    local_c8 = (long *)0x0;
  }
  FUN_00dc6c60(&local_98,"bin/field/model/",auStack_70,&DAT_01cdd9ff,auStack_90,"_zone.gfbcol");
  lVar4 = FUN_00da09e0(*(undefined8 *)PTR_DAT_0271e770,7);
  FUN_006cf0c0(&local_c8,&local_98);
  lVar5 = FUN_006e2ec0(lVar4 + 0x120,local_c8);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (0 < lVar5) {
    FUN_00a83620(&local_c8,&local_98);
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar5 = lVar4 + 0x120;
    }
    if ((param_3 & 1) == 0) {
      FUN_00dc8750(&local_48,*(undefined8 *)PTR_DAT_02710788,0,&local_c8,0,param_2,lVar5);
      if (param_1[0x7b] != 0) {
        (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
        param_1[0x7b] = 0;
      }
      param_1[0x7b] = local_48;
      if (local_48 != 0) {
        plVar7 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        if ((param_1[0x7c] != 0) || (param_1[0x8c] != 0)) {
          FUN_006e1e70(local_48,param_1 + 0x7a,1);
        }
        FUN_006e1be0(local_48);
        goto LAB_00dc6a3c;
      }
LAB_00dc6a74:
      bVar1 = true;
    }
    else {
      FUN_00dc8750(&local_48,*(undefined8 *)PTR_DAT_02710788,1,&local_c8,0,param_2,lVar5);
      if (param_1[0x7b] != 0) {
        (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
        param_1[0x7b] = 0;
      }
      param_1[0x7b] = local_48;
      if (local_48 == 0) goto LAB_00dc6a74;
      plVar7 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      if ((param_1[0x7c] != 0) || (param_1[0x8c] != 0)) {
        FUN_006e1e70(local_48,param_1 + 0x7a,1);
      }
LAB_00dc6a3c:
      (**(code **)(*plVar7 + 0x18))(plVar7);
      bVar1 = false;
    }
    if ((local_b0 != 0) && (local_c8 != (long *)0x0)) {
      (**(code **)(local_c8[9] + 0x18))();
    }
    local_c8 = (long *)0x0;
    uStack_c0 = 0xcbf29ce484222645;
    local_b8 = &DAT_01d38550;
    local_b0 = 0;
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if (bVar1) {
      bVar1 = true;
      goto joined_r0x00dc6ad4;
    }
  }
  bVar1 = false;
joined_r0x00dc6ad4:
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (!bVar1) {
    (**(code **)(*param_1 + 0x180))(&local_c8,param_1,param_2);
    if (param_1[0xc3] != 0) {
      (**(code **)(*(long *)(param_1[0xc3] + 0x48) + 0x18))();
      param_1[0xc3] = 0;
    }
    param_1[0xc3] = (long)local_c8;
    if ((local_c8 == (long *)0x0) ||
       (uVar3 = (**(code **)(*local_c8 + 0x38))(local_c8,param_2,param_3 & 1), (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


