/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013634c0; name: FUN_013634c0
 */


void FUN_013634c0(long param_1,byte param_2,byte param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0xe0) != (param_2 & 1)) ||
     (((*(char *)(param_1 + 0xe1) != '\0' ^ param_3) & 1) != 0)) {
    *(byte *)(param_1 + 0xe1) = param_3 & 1;
    uVar2 = *(undefined8 *)PTR_DAT_027152c0;
    uVar3 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    *(undefined8 *)(param_1 + 200) = uVar3;
    if ((param_2 & 1) == 0) {
      lVar5 = FUN_007959b0(*(undefined8 *)(param_1 + 0x80),&local_a8);
    }
    else {
      lVar5 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      if (*(char *)(param_1 + 0xe1) == '\0') {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      (**(code **)(**(long **)(lVar5 + 0x210) + 0x18))(*(long **)(lVar5 + 0x210),uVar6,&local_a8);
      *(undefined8 *)(param_1 + 0xc0) = uVar2;
      *(undefined8 *)(param_1 + 200) = uVar3;
      nn::hid::SixAxisSensorState::GetQuaternion((Vector4fType *)&local_a8);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0xb0);
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      uVar8 = (undefined4)((ulong)uVar6 >> 0x20);
      uVar7 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar9 = -(float)*(undefined8 *)*pauVar1;
      auVar10._12_4_ = uVar8;
      auVar10._0_12_ = *pauVar1;
      auVar4._12_4_ = uVar8;
      auVar4._0_12_ = *pauVar1;
      auVar10 = NEON_ext(auVar10,auVar4,8,1);
      *(ulong *)(param_1 + 0xb8) = CONCAT44(auVar10._4_4_,uVar7);
      *(ulong *)(param_1 + 0xb0) = CONCAT44((int)uVar6,fVar9);
      *(undefined8 *)(param_1 + 0x150) = 0;
      lVar5 = FUN_00c754c0(uVar7,fVar9,auVar10,*(undefined8 *)(param_1 + 0x80),auStack_48);
      if (lVar5 != 0) {
        FUN_0069c810();
      }
      lVar5 = FUN_007959b0(*(undefined8 *)(param_1 + 0x80),&local_a8);
    }
    if (lVar5 != 0) {
      local_a8 = 0;
      FUN_007273c0(lVar5,param_2 & 1,&local_a8);
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(byte *)(param_1 + 0xe0) = param_2 & 1;
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
  }
  return;
}


