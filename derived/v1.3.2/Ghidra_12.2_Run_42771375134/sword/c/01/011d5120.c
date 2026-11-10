/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d5120; name: FUN_011d5120
 */


void FUN_011d5120(long param_1,undefined4 param_2,byte param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_68;
  int local_5c;
  long local_58;
  long local_50;
  long local_48;
  int local_38;
  int local_34;
  
  puVar1 = PTR_DAT_02716750;
  uVar5 = *(undefined8 *)PTR_DAT_02716750;
  *(byte *)(param_1 + 0x374) = param_3 & 1;
  local_34 = *(ushort *)(param_1 + 0x372) + 10000;
  plVar2 = (long *)FUN_011d7f90(&local_50,*(undefined8 *)(param_1 + 0x78),&local_34);
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  *(long **)(param_1 + 0x2a8) = plVar2;
  (**(code **)(*plVar2 + 0x10))(&local_50,plVar2);
  local_48 = local_50;
  local_50 = 0;
  FUN_007daeb0(uVar5,&local_48,1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_38 = *(ushort *)(param_1 + 0x372) + 20000;
  plVar2 = (long *)FUN_011d85c0(&local_50,*(undefined8 *)(param_1 + 0x78),&local_38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x2b0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  *(long **)(param_1 + 0x2b0) = plVar2;
  (**(code **)(*plVar2 + 0x10))(&local_50,plVar2);
  local_58 = local_50;
  local_50 = 0;
  FUN_007daeb0(uVar5,&local_58,0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_5c = *(ushort *)(param_1 + 0x372) + 30000;
  lVar3 = FUN_011d0950(&local_50,*(undefined8 *)(param_1 + 0x78),&local_5c);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x2b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  *(long *)(param_1 + 0x2b8) = lVar3;
  *(long *)(lVar3 + 0x168) = param_1 + 0x68;
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))(&local_50);
  local_68 = local_50;
  local_50 = 0;
  FUN_007daeb0(uVar5,&local_68,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  *(undefined1 *)(param_1 + 0x370) = 0;
  if (*(long *)puVar1 != 0) {
    FUN_007db470(*(long *)puVar1,0);
  }
  FUN_007a2220(*(undefined8 *)(param_1 + 0x2a0),param_1 + 0x60);
  lVar4 = FUN_007a2480(*(undefined8 *)(param_1 + 0x2a0));
  lVar3 = param_1 + 0xd0;
  if (*(long *)(lVar4 + 0x48) != 0) {
    lVar7 = *(long *)(lVar4 + 0x48) << 3;
    puVar6 = *(undefined8 **)(lVar4 + 0x40);
    do {
      FUN_007d5000(lVar3,*puVar6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  *(short *)(param_1 + 0x84) = (short)param_2;
  FUN_007d44e0(lVar3,param_2);
  FUN_007d4ff0(lVar3,param_1 + 0x70);
  if (*(int *)(param_1 + 0x80) != 0x10) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return;
}


