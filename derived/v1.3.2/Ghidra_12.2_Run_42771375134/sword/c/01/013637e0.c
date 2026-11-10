/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013637e0; name: FUN_013637e0
 */


void FUN_013637e0(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 auStack_18 [8];
  
  lVar3 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  (**(code **)(**(long **)(lVar3 + 0x210) + 0x18))(*(long **)(lVar3 + 0x210),uVar4,&local_80);
  uVar4 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 200) = uVar4;
  nn::hid::SixAxisSensorState::GetQuaternion((Vector4fType *)&local_80);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = (undefined4)((ulong)uVar4 >> 0x20);
  uVar5 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar7 = -(float)*(undefined8 *)*pauVar1;
  auVar8._12_4_ = uVar6;
  auVar8._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar6;
  auVar2._0_12_ = *pauVar1;
  auVar8 = NEON_ext(auVar8,auVar2,8,1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(ulong *)(param_1 + 0xb8) = CONCAT44(auVar8._4_4_,uVar5);
  *(ulong *)(param_1 + 0xb0) = CONCAT44((int)uVar4,fVar7);
  lVar3 = FUN_00c754c0(uVar5,fVar7,auVar8,*(undefined8 *)(param_1 + 0x80),auStack_18);
  if (lVar3 != 0) {
    FUN_0069c810();
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}


