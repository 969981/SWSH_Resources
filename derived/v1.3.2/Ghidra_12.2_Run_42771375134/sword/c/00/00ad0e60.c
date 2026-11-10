/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad0e60; name: FUN_00ad0e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad0e60(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_78;
  char *pcStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x590) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_1 + 0x598);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x58);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_40 = lVar6;
  FUN_00c7a130(lVar4,&local_38,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_50 = *(long *)(param_1 + 0x598);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_00c7a1d0(&local_78,lVar4,&local_50);
  FUN_00ad2020(&local_48,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_58 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_01066f60(lVar4,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar7 = _DAT_01d4a130;
  if (*(int *)(param_1 + 0x4d0) == 1) {
    *(undefined8 *)(param_1 + 0x588) = _UNK_01d4a138;
    *(undefined8 *)(param_1 + 0x580) = uVar7;
    goto joined_r0x00ad11a8;
  }
  cVar2 = *(char *)(param_1 + 0x4d4);
  if (cVar2 == '\0') {
    uVar7 = _DAT_01d4b050;
    uVar8 = _UNK_01d4b058;
LAB_00ad10b4:
    *(undefined8 *)(param_1 + 0x588) = uVar8;
    *(undefined8 *)(param_1 + 0x580) = uVar7;
  }
  else {
    if (cVar2 == '\x02') {
      uVar7 = _DAT_01d4b700;
      uVar8 = _UNK_01d4b708;
      goto LAB_00ad10b4;
    }
    if (cVar2 == '\x01') {
      uVar8 = _UNK_01d4a138;
      goto LAB_00ad10b4;
    }
  }
  if (local_48 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c4);
  local_78 = 0x6b290a73a18df307;
  pcStack_70 = "ob0046_00_xshadowmSkin_vis";
  local_68 = 0x1a;
  local_60 = 0;
  iVar3 = FUN_0072e390(*(undefined8 *)(local_48 + 0x360),&local_78);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (-1 < iVar3) {
    FUN_0072e410(*(undefined8 *)(local_48 + 0x360),iVar3,iVar1 != 2,0);
  }
  local_78 = 0x68907ab03eadb4b2;
  pcStack_70 = "ob0046_00_xshadowfSkin_vis";
  local_68 = 0x1a;
  local_60 = 0;
  iVar3 = FUN_0072e390(*(undefined8 *)(local_48 + 0x360),&local_78);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (-1 < iVar3) {
    FUN_0072e410(*(undefined8 *)(local_48 + 0x360),iVar3,iVar1 == 2,0);
  }
joined_r0x00ad11a8:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


