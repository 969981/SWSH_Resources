/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01420ac0; name: FUN_01420ac0
 */


void FUN_01420ac0(long *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
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
  ulong local_68;
  
  lVar14 = *param_1;
  lVar10 = *(long *)(lVar14 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar10 + 0x2f0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  lVar10 = *(long *)(lVar14 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x2e8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  uVar6 = FUN_00ffae10();
  FUN_0077d520(lVar11,uVar6);
  lVar10 = *(long *)(lVar14 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar10 + 0x2e0);
  lVar1 = lVar14 + 0x100;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  FUN_014c75c0(lVar12);
  lVar10 = (long)param_2;
  FUN_014c9030(lVar12,0,*(undefined8 *)(param_1[1] + (long)param_2 * 0x18 + 0x10));
  FUN_014c62d0(lVar12,lVar9,lVar11);
  pbVar8 = *(byte **)(PTR_PTR_02729a00 + (long)param_2 * 8);
  bVar2 = *pbVar8;
  local_68 = 0xcbf29ce484222645;
  while (bVar2 != 0) {
    pbVar8 = pbVar8 + 1;
    local_68 = (local_68 ^ bVar2) * 0x100000001b3;
    bVar2 = *pbVar8;
  }
  lVar7 = FUN_0103bd80(*(undefined8 *)(lVar14 + 0x2b0),&local_68);
  puVar3 = PTR_PTR_02729a10;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
  uVar13 = *(undefined8 *)(puVar3 + lVar10 * 8);
  uVar6 = FUN_0077d470(lVar9);
  FUN_00ffd6a0(lVar1,uVar13,uVar6,10);
  FUN_00ffcf80(lVar1,*(undefined8 *)(PTR_PTR_02729a18 + lVar10 * 0x10));
  FUN_00ffcf80(lVar1,*(undefined8 *)(PTR_PTR_02729a08 + lVar10 * 0x10 + 8));
  uVar6 = *(undefined8 *)(lVar14 + 0x650);
  uVar5 = FUN_01524de0(*(undefined8 *)(param_1[1] + lVar10 * 0x18 + 0x10));
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
  FUN_0168e370(uVar6,param_2,uVar5,1,&local_f0);
  pcVar4 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar4)(&local_d0);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


