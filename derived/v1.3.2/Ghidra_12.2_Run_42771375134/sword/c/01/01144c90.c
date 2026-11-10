/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01144c90; name: FUN_01144c90
 */


void FUN_01144c90(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long local_48;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_01524b90(lVar6,*(undefined8 *)(param_1 + 0x160));
  uVar2 = FUN_01524bf0(lVar6);
  *(undefined1 *)(param_1 + 0x188) = uVar2;
  uVar2 = FUN_01524c00(lVar6);
  *(undefined1 *)(param_1 + 0x189) = uVar2;
  uVar4 = FUN_01524de0(lVar6);
  *(undefined2 *)(param_1 + 0x168) = uVar4;
  if (*param_2 == 0) {
    lVar7 = 0;
  }
  else {
    FUN_011303e0(&local_48);
    lVar7 = local_48;
    if (local_48 == 0) goto LAB_01144d38;
    (**(code **)(*(long *)(local_48 + 0x50) + 0x18))();
  }
  local_48 = 0;
LAB_01144d38:
  FUN_008664b0(*(undefined8 *)(param_1 + 0x220),lVar7 + 0xb8);
  uVar5 = FUN_008783b0(*(undefined8 *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x16c) = uVar5;
  uVar4 = FUN_008783c0(*(undefined8 *)(param_1 + 0x220));
  *(undefined2 *)(param_1 + 0x170) = uVar4;
  uVar5 = FUN_0087ccf0(*(undefined8 *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  bVar3 = FUN_0087ea90(*(undefined8 *)(param_1 + 0x220));
  *(byte *)(param_1 + 0x178) = bVar3 & 1;
  bVar3 = FUN_0087d610(*(undefined8 *)(param_1 + 0x220),2);
  *(byte *)(param_1 + 0x179) = bVar3 & 1;
  uVar5 = FUN_0087ec90(*(undefined8 *)(param_1 + 0x220));
  lVar7 = *(long *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x17c) = uVar5;
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined1 *)(param_1 + 0x188);
  uVar1 = *(undefined1 *)(param_1 + 0x189);
  uVar4 = *(undefined2 *)(param_1 + 0x168);
  local_48 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_01143070(param_1 + 0x90,&local_48,uVar2,uVar1,uVar4,param_1 + 0x16c);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


