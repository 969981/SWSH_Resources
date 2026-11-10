/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef5900; name: FUN_00ef5900
 */


undefined8 FUN_00ef5900(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  long local_38;
  
  puVar3 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x1d8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  local_38 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_48 = FUN_00e7e2e0();
  iVar4 = FUN_015c4020(lVar8,&local_38,&local_48);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar1 = 2;
  if (iVar4 != 1) {
    uVar1 = uVar2;
  }
  uVar9 = 8;
  switch(uVar1) {
  case 1:
    uVar9 = *(undefined8 *)PTR_DAT_02710868;
    uVar5 = 8;
    break;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
    goto joined_r0x00ef5aa0;
  case 3:
    FUN_00ef5d00(param_1);
    uVar9 = 7;
joined_r0x00ef5aa0:
    if (lVar8 == 0) goto LAB_00ef5a50;
    goto LAB_00ef5a40;
  default:
    uVar9 = *(undefined8 *)PTR_DAT_02710868;
    uVar5 = 2;
    break;
  case 9:
    FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,1,1);
    goto joined_r0x00ef5af0;
  }
  FUN_00d939e0(uVar9,0,0,uVar5);
joined_r0x00ef5af0:
  uVar9 = 7;
  if (lVar8 != 0) {
LAB_00ef5a40:
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
LAB_00ef5a50:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return uVar9;
}


