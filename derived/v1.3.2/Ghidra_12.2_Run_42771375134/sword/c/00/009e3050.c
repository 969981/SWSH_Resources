/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3050; name: FUN_009e3050
 */


void FUN_009e3050(undefined8 param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long local_48;
  
  uVar1 = param_3[1];
  iVar4 = FUN_009e31b0(*param_3);
  switch(iVar4) {
  case 0:
    sVar3 = FUN_009e31b0(uVar1);
    param_2 = sVar3 + param_2;
    goto LAB_009e30d4;
  case 1:
    param_2 = param_2 + 4;
    break;
  case 2:
    param_2 = param_2 + 6;
    break;
  case 3:
    param_2 = param_2 + 8;
  }
  iVar5 = FUN_009e31b0(uVar1);
  if (iVar5 == iVar4) {
    param_2 = param_2 + 1;
  }
LAB_009e30d4:
  puVar2 = PTR_DAT_02718ad8;
  lVar6 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x30) + 0x60);
  if (lVar6 == 0) {
    FUN_0077e740(0,param_2,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
    local_48 = *(long *)(puVar2 + 0x18);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077e740(lVar6,param_2,*(undefined8 *)(puVar2 + 0x18));
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_48 = *(long *)(puVar2 + 0x18);
  }
  if (local_48 == 0) {
    FUN_009e1d60(&local_48,param_3);
  }
  else {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_009e1d60(&local_48,param_3);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_48 = 0;
  }
  FUN_014c62d0(*(undefined8 *)(puVar2 + 0x10),param_1,*(undefined8 *)(puVar2 + 0x18));
  return;
}


