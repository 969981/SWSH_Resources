/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc6b50; name: FUN_00bc6b50
 */


void FUN_00bc6b50(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *__format;
  long *plVar5;
  long lVar6;
  char acStack_80 [64];
  long local_38;
  
  param_2 = param_2 & 0xffffffff;
  if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
    plVar5 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  puVar1 = PTR_DAT_02710798;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar6 == 0) {
    uVar3 = FUN_01509eb0(0);
    lVar6 = *(long *)(*(long *)puVar1 + 0x220);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_01509eb0(lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)puVar1 + 0x220);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_00bccb00(&local_38,*(undefined8 *)(param_1 + 0x5e8));
  iVar2 = FUN_015073c0(lVar6,param_2,&local_38,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  uVar4 = FUN_00bc8500(param_1,0,param_2,0);
  if ((((uVar4 & 1) == 0) && (uVar4 = FUN_00bc8500(param_1,0,param_2,1), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_00bc8500(param_1,0,param_2,2), (uVar4 & 1) == 0)) {
    uVar4 = FUN_00bc8500(param_1,0,param_2,3);
    if (((((((uVar4 & 1) == 0) && (uVar4 = FUN_00bc8500(param_1,0,param_2,4), (uVar4 & 1) == 0)) &&
          ((uVar4 = FUN_00bc8500(param_1,0,param_2,5), (uVar4 & 1) == 0 &&
           ((uVar4 = FUN_00bc8500(param_1,0,param_2,6), (uVar4 & 1) == 0 &&
            (uVar4 = FUN_00bc8500(param_1,0,param_2,7), (uVar4 & 1) == 0)))))) &&
         (((uVar4 = FUN_00bc8500(param_1,0,param_2,8), (uVar4 & 1) == 0 &&
           ((((uVar4 = FUN_00bc8500(param_1,0,param_2,9), (uVar4 & 1) == 0 &&
              (uVar4 = FUN_00bc8500(param_1,0,param_2,10), (uVar4 & 1) == 0)) &&
             (uVar4 = FUN_00bc8500(param_1,0,param_2,0xb), (uVar4 & 1) == 0)) &&
            ((uVar4 = FUN_00bc8500(param_1,0,param_2,0xc), (uVar4 & 1) == 0 &&
             (uVar4 = FUN_00bc8500(param_1,0,param_2,0xd), (uVar4 & 1) == 0)))))) &&
          (((uVar4 = FUN_00bc8500(param_1,0,param_2,0xe), (uVar4 & 1) == 0 &&
            ((uVar4 = FUN_00bc8500(param_1,0,param_2,0xf), (uVar4 & 1) == 0 &&
             (uVar4 = FUN_00bc8500(param_1,0,param_2,0x10), (uVar4 & 1) == 0)))) &&
           (uVar4 = FUN_00bc8500(param_1,0,param_2,0x11), (uVar4 & 1) == 0)))))) &&
        ((((uVar4 = FUN_00bc8500(param_1,0,param_2,0x12), (uVar4 & 1) == 0 &&
           (uVar4 = FUN_00bc8500(param_1,0,param_2,0x13), (uVar4 & 1) == 0)) &&
          (uVar4 = FUN_00bc8500(param_1,0,param_2,0x14), (uVar4 & 1) == 0)) &&
         ((uVar4 = FUN_00bc8500(param_1,0,param_2,0x15), (uVar4 & 1) == 0 &&
          (uVar4 = FUN_00bc8500(param_1,0,param_2,0x16), (uVar4 & 1) == 0)))))) &&
       ((((uVar4 = FUN_00bc8500(param_1,0,param_2,0x17), (uVar4 & 1) == 0 &&
          ((uVar4 = FUN_00bc8500(param_1,0,param_2,0x18), (uVar4 & 1) == 0 &&
           (uVar4 = FUN_00bc8500(param_1,0,param_2,0x19), (uVar4 & 1) == 0)))) &&
         (uVar4 = FUN_00bc8500(param_1,0,param_2,0x1a), (uVar4 & 1) == 0)) &&
        ((uVar4 = FUN_00bc8500(param_1,0,param_2,0x1b), (uVar4 & 1) == 0 &&
         (uVar4 = FUN_00bc8500(param_1,0,param_2,0x1c), (uVar4 & 1) == 0)))))) {
      uVar4 = FUN_00bc8500(param_1,0,param_2,0x1d);
      uVar4 = uVar4 & 0xffffffff;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  if (iVar2 == 0x1e) {
    if ((uVar4 & 1) == 0) {
      __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_gray_max";
    }
    else {
      __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_default_max";
    }
  }
  else if (iVar2 == 0) {
    if ((uVar4 & 1) == 0) {
      __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_gray_empty";
    }
    else {
      __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_default_empty";
    }
  }
  else if ((uVar4 & 1) == 0) {
    __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_gray_containing";
  }
  else {
    __format = "anime_L_box_change_00_L_icon_box_%02d_%02d_default_containing";
  }
  snprintf(acStack_80,0x40,__format,uVar3 & 0xffffffff,param_2);
  FUN_00ffcf80(param_1 + 0x100,acStack_80);
  return;
}


