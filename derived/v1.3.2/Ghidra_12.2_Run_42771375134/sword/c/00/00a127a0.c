/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a127a0; name: FUN_00a127a0
 */


void FUN_00a127a0(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
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
  
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x88);
  if ((lVar12 != 0) && (*(char *)(param_2 + 0x22) == '\0')) {
    if (*(char *)(param_2 + 0x21) == '\0') {
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar7 = FUN_008e5ad0(*(undefined8 *)(param_2 + 8));
      lVar12 = *(long *)(param_1 + 0x88);
      uVar9 = 1;
      uVar5 = 1;
      if ((uVar7 & 1) != 0) {
        uVar5 = 2;
      }
    }
    uVar8 = FUN_008e1680(uVar9,*(undefined8 *)(param_2 + 0x10));
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
    FUN_0168c890(lVar12,uVar8,uVar5,0,&local_f0);
    pcVar2 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar2)(&local_d0);
    }
  }
  local_120 = *(undefined8 *)(param_1 + 0x90);
  local_110 = *(undefined8 *)(param_1 + 0x98);
  local_108 = *(undefined8 *)(param_1 + 0xa0);
  local_100 = *(undefined8 *)(param_1 + 0xa8);
  local_f8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = local_120;
  FUN_00ffd430(uVar11,&local_120);
  FUN_00ffd430(uVar11,&uStack_118);
  FUN_00ffd430(uVar11,&local_110);
  FUN_00ffd430(uVar11,&local_108);
  FUN_00ffd430(uVar11,&local_100);
  FUN_00ffd430(uVar11,&local_f8);
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_00ffd510(0,uVar11,(undefined8 *)(param_1 + 0x90));
  }
  else {
    local_120 = 0;
    uVar8 = *(undefined8 *)(param_2 + 8);
    iVar4 = FUN_008e19f0(uVar8);
    puVar10 = (undefined8 *)(param_1 + 0xb0);
    if (iVar4 == 0) {
      uVar5 = FUN_008e12a0(uVar8,0xd);
      uVar6 = FUN_008e12a0(uVar8,0xf);
      iVar4 = FUN_016ac470(uVar5,uVar6);
      if (iVar4 == 1) {
        puVar10 = (undefined8 *)(param_1 + 0x98);
      }
      else if (iVar4 == 3) {
        puVar10 = (undefined8 *)(param_1 + 0xa8);
      }
      else {
        puVar10 = (undefined8 *)(param_1 + 0xa0);
        if (iVar4 != 2) {
          puVar10 = (undefined8 *)(param_1 + 0x90);
        }
      }
    }
    local_120 = *puVar10;
    FUN_00ffd010(uVar11,&local_120);
  }
  cVar1 = *(char *)(param_2 + 0x21);
  iVar4 = *(int *)(param_2 + 0x24);
  sVar3 = FUN_008e1290(*(undefined8 *)(param_2 + 0x10));
  if (iVar4 == 1) {
    puVar10 = (undefined8 *)(param_1 + 0xc0);
  }
  else if (cVar1 == '\0') {
    puVar10 = (undefined8 *)(param_1 + 0xb8);
  }
  else {
    puVar10 = (undefined8 *)(param_1 + 0xd0);
    if (sVar3 != 0x382) {
      puVar10 = (undefined8 *)(param_1 + 200);
    }
  }
  local_120 = *puVar10;
  FUN_00ffd010(uVar11,&local_120);
  return;
}


