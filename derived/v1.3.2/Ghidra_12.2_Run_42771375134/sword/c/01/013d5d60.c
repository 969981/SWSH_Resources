/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d5d60; name: FUN_013d5d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013d5d60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  undefined *local_68;
  undefined8 local_58;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  lVar6 = FUN_0132d9a0();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  lVar6 = puVar11[0x6e];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = FUN_00ad95d0(&local_180,*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x550) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x550) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x550) = 0;
  }
  *(long *)(param_1 + 0x550) = lVar7;
  uVar2 = _UNK_01d4baa8;
  uVar8 = _DAT_01d4baa0;
  uVar13 = *(undefined8 *)(lVar6 + 0xb8);
  uVar12 = *(undefined8 *)(lVar6 + 0xb0);
  *(undefined1 *)(lVar7 + 0xc0) = 1;
  *(ulong *)(lVar7 + 0xb8) =
       CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                (float)uVar13 + (float)uVar2);
  *(ulong *)(lVar7 + 0xb0) =
       CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                (float)uVar12 + (float)uVar8);
  uVar8 = FUN_00adc640(*(long *)(param_1 + 0x550),*(undefined8 *)(*(long *)(param_1 + 0x550) + 8),
                       *(long *)(lVar6 + 0x418) + 0x120);
  lVar7 = *(long *)(lVar6 + 400);
  local_58 = uVar8;
  if (lVar7 == 0) {
    local_180 = (undefined *)0x8;
    FUN_00727220(uVar8,0,&local_180);
  }
  else {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_180 = (undefined *)0x8;
    FUN_00727220(uVar8,lVar7,&local_180);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar7 = *(long *)(param_1 + 0x550);
  puVar9 = (undefined *)FUN_00c89a80(&local_180,*(undefined8 *)(lVar7 + 8),&local_58);
  if (puVar9 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar9 + 0x48) + 0x10))();
  }
  local_180 = puVar9;
  FUN_006d9640(lVar7,&local_180);
  if (local_180 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  puVar3 = PTR_DAT_02715090;
  lVar7 = *(long *)(lVar6 + 0x438);
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_180 = PTR_DAT_02715090 + 0x10;
  local_178 = *(long *)(lVar7 + 0x18);
  local_68 = puVar9;
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
  }
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  if (*(code **)(lVar7 + 0x30) != (code *)0x0) {
    (**(code **)(lVar7 + 0x30))(lVar7 + 0x40,auStack_150);
    local_170 = *(undefined8 *)(lVar7 + 0x20);
    local_168 = *(code **)(lVar7 + 0x28);
    local_160 = *(undefined8 *)(lVar7 + 0x30);
    uStack_158 = *(undefined8 *)(lVar7 + 0x38);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if (*(code **)(lVar7 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar7 + 0xb0))(lVar7 + 0xc0,auStack_d0);
    local_f0 = *(undefined8 *)(lVar7 + 0xa0);
    local_e8 = *(code **)(lVar7 + 0xa8);
    local_e0 = *(undefined8 *)(lVar7 + 0xb0);
    uStack_d8 = *(undefined8 *)(lVar7 + 0xb8);
  }
  local_180 = PTR_DAT_02715070 + 0x10;
  FUN_0069ae40(puVar9,uVar8,&local_180,1);
  local_180 = puVar3 + 0x10;
  if (local_178 == 0) {
    local_178 = 0;
    pcVar1 = local_e8;
  }
  else {
    FUN_006e2100(local_178,&local_180);
    lVar7 = local_178;
    local_178 = 0;
    pcVar1 = local_e8;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      pcVar1 = local_e8;
    }
  }
  local_e8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar1)(auStack_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  uVar10 = FUN_00da32a0(local_68);
  if ((uVar10 & 1) != 0) {
    uVar8 = FUN_013de0d0(*(long *)(param_1 + 0x550),*(undefined8 *)(*(long *)(param_1 + 0x550) + 8),
                         &local_68);
    FUN_012ba510(&local_180);
    uVar4 = FUN_012f7310(local_180);
    FUN_00da30e0(uVar8,uVar4);
    if (local_180 != (undefined *)0x0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
      local_180 = (undefined *)0x0;
    }
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


