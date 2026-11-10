/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3f780; name: FUN_00a3f780
 */


void FUN_00a3f780(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auStack_90 [24];
  long local_78;
  undefined8 local_70;
  long local_68;
  
  memcpy((void *)(param_1 + 0x5d8),param_2,400);
  local_70 = 0xc6645542a0b2f84b;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_70 = 0xc6645642a0b2f9fe;
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_006cf0a0(auStack_90,&DAT_0262e530);
  uVar3 = FUN_00ff93c0(param_1);
  FUN_00ff8620(&local_68,uVar3,auStack_90,10);
  lVar5 = *(long *)(local_68 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar8 = *(long *)(param_1 + 0x2b0);
  lVar1 = param_1 + 0x100;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar8 + 0x2e8);
  plVar2 = (long *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  uVar3 = FUN_008e1680(*param_2);
  FUN_014c84c0(lVar4,0,uVar3);
  FUN_0077eb10(lVar5,&local_70,lVar7);
  FUN_014c62d0(lVar4,*(undefined8 *)(param_1 + 0x770),lVar7);
  uVar3 = FUN_0077d470(*(undefined8 *)(param_1 + 0x770));
  FUN_00ffd700(lVar1,param_1 + 0x778,uVar3,10);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))(plVar2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar5 = param_1 + 0x7c0;
  FUN_00ffd510(0x3f800000,lVar1,lVar5);
  FUN_00ffd510(0x3f800000,lVar1,param_1 + 0x7c8);
  FUN_00ffd510(0x3f800000,lVar1,param_1 + 2000);
  FUN_00ffd510(0x3f800000,lVar1,param_1 + 0x7d8);
  FUN_00ffd510(0x3f800000,lVar1,param_1 + 0x7e0);
  if (*(int *)(param_1 + 0x5e0) != 0) {
    uVar6 = 0;
    do {
      FUN_00ffd510(0,lVar1,lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < *(uint *)(param_1 + 0x5e0));
  }
  FUN_00a405b0(*(undefined8 *)(param_1 + 0x7a0),(void *)(param_1 + 0x5d8));
  uVar9 = NEON_ucvtf((uint)*(byte *)((long)param_2 + 0xd));
  FUN_00ffd510(uVar9,lVar1,&DAT_02154928);
  return;
}


