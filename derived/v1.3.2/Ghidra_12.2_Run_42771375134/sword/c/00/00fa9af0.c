/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9af0; name: FUN_00fa9af0
 */


void FUN_00fa9af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar2 = FUN_01538ec0(*param_4);
  puVar1 = PTR_DAT_02710798;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  lVar3 = *(long *)(*(long *)puVar1 + 0x1e8);
  if (lVar3 == 0) {
    uVar2 = FUN_01524e00(0);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar2 = FUN_01524e00(lVar3);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined8 *)(param_1 + 0x70) = param_6;
  *(undefined8 *)(param_1 + 0x78) = param_7;
  *(undefined4 *)(param_1 + 0x8c) = param_5;
  lVar3 = FUN_009e3950(auStack_60,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar3;
  local_78 = 0xf6b0b4b489f86246;
  local_70 = "script/common_scr.dat";
  local_68 = 0x15;
  FUN_006cf0a0(auStack_60,&local_78);
  FUN_014bc440(lVar3,auStack_60,1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


