/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011442a0; name: FUN_011442a0
 */


void FUN_011442a0(long param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined4 local_72;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_66;
  long local_58;
  
  FUN_01128420(&local_58,*param_2);
  cVar1 = *(char *)(local_58 + 0x3ac);
  *(char *)(param_1 + 0x60) = cVar1;
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(local_58 + 0x3aa);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(local_58 + 0x3ab);
  if (cVar1 == '\0') {
    lVar11 = FUN_01225e90(local_58 + 0x140);
    FUN_0121c650(&local_b0,lVar11 + 4);
    iVar6 = FUN_012229c0(&local_b0);
    sVar5 = FUN_012229d0(&local_b0);
    uVar7 = FUN_012229e0(&local_b0);
    bVar2 = FUN_012229f0(&local_b0);
    bVar3 = FUN_01222a00(&local_b0);
    uVar8 = FUN_01222a20(&local_b0);
    uVar9 = FUN_01222a10(&local_b0);
    uVar10 = FUN_01222a30(&local_b0);
    *(int *)(param_1 + 100) = iVar6;
    *(short *)(param_1 + 0x68) = sVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(byte *)(param_1 + 0x70) = bVar2 & 1;
    *(byte *)(param_1 + 0x71) = bVar3 & 1;
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = uVar9;
    *(uint *)(param_1 + 0x7c) = uVar10 & 0xff;
    if ((sVar5 == 1) && (iVar6 == 0x37a)) {
      *(undefined2 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    FUN_014ad910(param_1 + 100,*(undefined8 *)(local_58 + 0x68));
  }
  if ((*(char *)(local_58 + 0x3b6) == '\x06') && (*(char *)(local_58 + 0x3b7) == '\x06')) {
    uVar10 = 2;
  }
  else {
    uVar10 = (uint)(*(char *)(local_58 + 0x3b6) != '\x06' && *(char *)(local_58 + 0x3b7) == '\x06');
  }
  local_b0 = 0;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0x3ffffffff;
  local_82 = 0x1ffffff00ff0001;
  local_6c = 0xffff;
  local_66 = 0x1000100;
  local_a8 = 0;
  local_90 = 0xffffffffffffffff;
  local_68 = 0;
  local_72 = 0xffffffff;
  local_7a = 0xffffffffffffffff;
  local_88 = *(undefined4 *)(param_1 + 100);
  local_84 = *(undefined2 *)(param_1 + 0x68);
  plVar13 = *(long **)(param_1 + 8);
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar13;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar12 = (**(code **)(*plVar13 + 0x10))(plVar13,0xb8,8);
  if (lVar12 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_008662a0(lVar12,plVar13,&local_b0);
  *(long **)(lVar12 + 8) = plVar13;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0xb8;
  *(undefined8 *)(lVar12 + 0x20) = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0087eca0(lVar12);
  *(undefined1 *)(param_1 + 0x80) = uVar4;
  uVar4 = FUN_0087ed40(lVar12);
  *(undefined1 *)(param_1 + 0x81) = uVar4;
  uVar4 = *(undefined1 *)(local_58 + 0x3a9);
  *(uint *)(param_1 + 0x84) = uVar10;
  *(undefined1 *)(param_1 + 0x82) = uVar4;
  uVar4 = *(undefined1 *)(local_58 + 0x3a8);
  *(uint *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x230) ^ 1;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x88) = uVar4;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


