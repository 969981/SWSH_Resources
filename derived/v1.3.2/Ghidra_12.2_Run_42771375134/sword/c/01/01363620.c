/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01363620; name: FUN_01363620
 */


void FUN_01363620(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar5 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  (**(code **)(**(long **)(lVar5 + 0x210) + 0x18))(*(long **)(lVar5 + 0x210),uVar4,&local_88);
  uVar4 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 200) = uVar4;
  nn::hid::SixAxisSensorState::GetQuaternion((Vector4fType *)&local_88);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = (undefined4)((ulong)uVar4 >> 0x20);
  uVar6 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar8 = -(float)*(undefined8 *)*pauVar1;
  auVar9._12_4_ = uVar7;
  auVar9._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar7;
  auVar2._0_12_ = *pauVar1;
  auVar9 = NEON_ext(auVar9,auVar2,8,1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(ulong *)(param_1 + 0xb8) = CONCAT44(auVar9._4_4_,uVar6);
  *(ulong *)(param_1 + 0xb0) = CONCAT44((int)uVar4,fVar8);
  lVar5 = FUN_00c754c0(uVar6,fVar8,auVar9,*(undefined8 *)(param_1 + 0x80),auStack_28);
  if (lVar5 != 0) {
    FUN_0069c810();
  }
  return;
}


