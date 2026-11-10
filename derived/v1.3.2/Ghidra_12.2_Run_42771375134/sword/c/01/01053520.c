/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053520; name: FUN_01053520
 */


void FUN_01053520(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x940;
  (**(code **)(**(long **)(param_1 + 0x210) + 0x70))(*(long **)(param_1 + 0x210),0,0);
  (**(code **)(**(long **)(param_1 + 0x230) + 0x70))(*(long **)(param_1 + 0x230),0,0);
  lVar10 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  lVar10 = *(long *)(param_1 + 0x230);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x210),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x230),lVar1,lVar1);
  uVar2 = *(undefined8 *)(PTR_DAT_027159c0 + 0x10);
  uVar6 = *(undefined8 *)(PTR_DAT_027159c0 + 0x18);
  uVar3 = *(undefined8 *)PTR_DAT_027159c0;
  uVar7 = *(undefined8 *)(PTR_DAT_027159c0 + 8);
  uVar4 = *(undefined8 *)(PTR_DAT_027159c0 + 0x30);
  uVar8 = *(undefined8 *)(PTR_DAT_027159c0 + 0x38);
  uVar5 = *(undefined8 *)(PTR_DAT_027159c0 + 0x20);
  uVar9 = *(undefined8 *)(PTR_DAT_027159c0 + 0x28);
  local_a0 = uVar3;
  local_98 = uVar7;
  local_90 = uVar2;
  uStack_88 = uVar6;
  local_80 = uVar5;
  uStack_78 = uVar9;
  local_70 = uVar4;
  uStack_68 = uVar8;
  FUN_007473c0(*(undefined8 *)(param_1 + 0x210),&local_a0);
  FUN_007473c0(*(undefined8 *)(param_1 + 0x230),&local_a0);
  (**(code **)(**(long **)(param_1 + 0x218) + 0x70))(*(long **)(param_1 + 0x218),0,0);
  (**(code **)(**(long **)(param_1 + 0x238) + 0x70))(*(long **)(param_1 + 0x238),0,0);
  lVar10 = *(long *)(param_1 + 0x218);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  lVar10 = *(long *)(param_1 + 0x238);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x218),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x238),lVar1,lVar1);
  local_a0 = uVar3;
  local_98 = uVar7;
  local_90 = uVar2;
  uStack_88 = uVar6;
  local_80 = uVar5;
  uStack_78 = uVar9;
  local_70 = uVar4;
  uStack_68 = uVar8;
  FUN_007473c0(*(undefined8 *)(param_1 + 0x218),&local_a0);
  FUN_007473c0(*(undefined8 *)(param_1 + 0x238),&local_a0);
  (**(code **)(**(long **)(param_1 + 0x220) + 0x70))(*(long **)(param_1 + 0x220),0,0);
  (**(code **)(**(long **)(param_1 + 0x240) + 0x70))(*(long **)(param_1 + 0x240),0,0);
  lVar10 = *(long *)(param_1 + 0x220);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  lVar10 = *(long *)(param_1 + 0x240);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x220),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x240),lVar1,lVar1);
  local_a0 = uVar3;
  local_98 = uVar7;
  local_90 = uVar2;
  uStack_88 = uVar6;
  local_80 = uVar5;
  uStack_78 = uVar9;
  local_70 = uVar4;
  uStack_68 = uVar8;
  FUN_007473c0(*(undefined8 *)(param_1 + 0x220),&local_a0);
  FUN_007473c0(*(undefined8 *)(param_1 + 0x240),&local_a0);
  (**(code **)(**(long **)(param_1 + 0x228) + 0x70))(*(long **)(param_1 + 0x228),0,0);
  (**(code **)(**(long **)(param_1 + 0x248) + 0x70))(*(long **)(param_1 + 0x248),0,0);
  lVar10 = *(long *)(param_1 + 0x228);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  lVar10 = *(long *)(param_1 + 0x248);
  if (*(long *)(lVar10 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar10 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar10 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar10 + 0xb0) = 0;
  FUN_007472f0(*(undefined8 *)(param_1 + 0x228),lVar1,lVar1);
  FUN_007472f0(*(undefined8 *)(param_1 + 0x248),lVar1,lVar1);
  local_a0 = uVar3;
  local_98 = uVar7;
  local_90 = uVar2;
  uStack_88 = uVar6;
  local_80 = uVar5;
  uStack_78 = uVar9;
  local_70 = uVar4;
  uStack_68 = uVar8;
  FUN_007473c0(*(undefined8 *)(param_1 + 0x228),&local_a0);
  FUN_007473c0(*(undefined8 *)(param_1 + 0x248),&local_a0);
  return;
}


