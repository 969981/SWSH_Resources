/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010942f0; name: FUN_010942f0
 */


void FUN_010942f0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x2e0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar7 + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x4c8);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&DAT_021636c0,lVar9);
  if (0x11 < ((uint)param_2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_014ca220(lVar8,0,*(undefined4 *)(*(long *)(param_1 + 0x5d0) + (param_2 & 0xff) * 0x5c + 0x60),
               3,1,1);
  FUN_0167cce0(lVar7,&DAT_021636f0,10);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&DAT_021636f8,lVar9);
  FUN_0167cce0(lVar7,&DAT_02163700,10);
  lVar11 = *(long *)(param_1 + 0x620);
  piVar5 = (int *)FUN_0151dc10(*(undefined8 *)(param_1 + 0x5d0),param_2 & 0xffffffff,0);
  iVar1 = *piVar5;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | iVar1 != 0;
  if (iVar1 != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_0168c9c0(lVar10,piVar5,1,&local_f0);
    pcVar4 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&local_d0);
    }
  }
  lVar11 = *(long *)(param_1 + 0x628);
  piVar5 = (int *)FUN_0151dc10(*(undefined8 *)(param_1 + 0x5d0),param_2 & 0xffffffff,1);
  iVar2 = *piVar5;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | iVar2 != 0;
  if (iVar2 != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_0168c9c0(lVar10 + 0x3e0,piVar5,1,&local_f0);
    pcVar4 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&local_d0);
    }
  }
  lVar11 = *(long *)(param_1 + 0x630);
  piVar5 = (int *)FUN_0151dc10(*(undefined8 *)(param_1 + 0x5d0),param_2 & 0xffffffff,2);
  iVar3 = *piVar5;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | iVar3 != 0;
  if (iVar3 != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_0168c9c0(lVar10 + 0x7c0,piVar5,1,&local_f0);
    pcVar4 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&local_d0);
    }
  }
  uVar12 = 0x3f800000;
  if ((iVar2 != 0 || iVar1 != 0) || iVar3 != 0) {
    uVar12 = 0;
  }
  FUN_00ffd510(uVar12,param_1 + 0x100,&DAT_02163708);
  uVar6 = FUN_0151dd70(*(undefined8 *)(param_1 + 0x5d0));
  uVar12 = 0x3f800000;
  if ((uVar6 & 1) == 0) {
    uVar12 = 0;
  }
  FUN_00ffd510(uVar12,param_1 + 0x100,&DAT_02163710);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


