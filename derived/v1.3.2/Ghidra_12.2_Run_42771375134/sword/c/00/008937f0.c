/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008937f0; name: FUN_008937f0
 */


void FUN_008937f0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  lVar6 = FUN_008948a0(&local_80);
  puVar5 = PTR_DAT_02717598;
  puVar8 = *(undefined8 **)PTR_DAT_02717598;
  *(long *)PTR_DAT_02717598 = lVar6;
  if (puVar8 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar8[1];
    uVar9 = puVar8[4];
    uVar7 = puVar8[2];
    uVar3 = puVar8[3];
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar7,uVar3,uVar9);
    lVar6 = *(long *)puVar5;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x48;
  }
  FUN_006cef90(lVar1);
  FUN_00895370(*(undefined8 *)puVar5,param_2,param_3,param_4);
  uVar7 = FUN_00893b80(*(undefined8 *)PTR_DAT_027107a8,param_1 + 0x108,1);
  local_80 = 0x1573e9b982bdd24f;
  local_78 = "SourceGlobal";
  local_70 = 0xc;
  local_68 = 0;
  FUN_00895670(*(undefined8 *)puVar5,uVar7,&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x8c5551922bb16e41;
  local_78 = "Stream.pck";
  local_70 = 10;
  local_68 = 0;
  FUN_00895630(*(undefined8 *)puVar5,&local_80,param_1 + 0x128);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x23d2494bda324f18;
  local_78 = "Init.bnk";
  local_70 = 8;
  local_68 = 0;
  FUN_00895650(*(undefined8 *)puVar5,&local_80,0,0,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xfe549a9035f6458f;
  local_78 = "Common.bnk";
  local_70 = 10;
  local_68 = 0;
  FUN_00895650(*(undefined8 *)puVar5,&local_80,0,0,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xc4cd89928f58baa4;
  local_78 = "Common_UI.bnk";
  local_70 = 0xd;
  local_68 = 0;
  FUN_00895650(*(undefined8 *)puVar5,&local_80,0,0,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x8ed605200ae18d86;
  local_78 = "BGM.bnk";
  local_70 = 7;
  local_68 = 0;
  FUN_00895650(*(undefined8 *)puVar5,&local_80,0,0,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x6372beb780c9c89a;
  local_78 = "Game_Init";
  local_70 = 9;
  local_68 = 0;
  FUN_008958e0(*(undefined8 *)puVar5,&local_80,uVar7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  fVar4 = DAT_01d4bae8;
  FUN_00894bd0(param_1 + 0x58,(long)(DAT_01d4bae8 / *(float *)(param_1 + 0xa8)));
  FUN_00894fa0(param_1 + 0xb0,(long)(fVar4 / *(float *)(param_1 + 0x100)));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


