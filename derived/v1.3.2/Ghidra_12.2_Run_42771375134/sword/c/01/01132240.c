/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01132240; name: FUN_01132240
 */


uint FUN_01132240(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  long local_60 [4];
  
  if (*(long *)(param_1 + 0x80) == 0) {
    lVar9 = 0;
LAB_01132290:
    local_60[0] = 0;
  }
  else {
    FUN_01128420(local_60);
    lVar9 = local_60[0];
    if (local_60[0] != 0) {
      (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
      goto LAB_01132290;
    }
  }
  lVar6 = FUN_01225e90(lVar9 + 0x140);
  plVar13 = *(long **)(param_1 + 8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar13;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,0xb8,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_00866110(lVar8,plVar13);
  *(long **)(lVar8 + 8) = plVar13;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0xb8;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_008664b0(lVar8,param_2 + 0xa8);
  FUN_01222680(local_60,lVar8);
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar7 + 2000);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = *(long *)(lVar12 + 0x80);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = FUN_01225e60(lVar9 + 0x140);
  cVar1 = FUN_0121d1d0(lVar9 + 4);
  lVar6 = lVar6 + 4;
  uVar11 = 1;
  if (cVar1 != ',') {
    uVar11 = 2;
  }
  uVar2 = FUN_0121c6c0(lVar6);
  switch(uVar2) {
  case 0:
    uVar4 = FUN_0121c6d0(lVar6);
    uVar3 = FUN_0121c6e0(lVar6);
    uVar5 = FUN_00fa51a0(lVar12,uVar11,local_60,uVar4,uVar3);
    break;
  case 1:
    uVar4 = FUN_0121c6e0(lVar6);
    uVar5 = FUN_00fa75a0(lVar7,uVar11,local_60,0,uVar4);
    goto joined_r0x011324ac;
  case 2:
    uVar4 = FUN_0121c6e0(lVar6);
    uVar10 = 1;
    goto LAB_0113249c;
  case 3:
    uVar4 = FUN_0121c6e0(lVar6);
    uVar10 = 2;
LAB_0113249c:
    uVar5 = FUN_00fa75a0(lVar7,uVar11,local_60,uVar10,uVar4);
joined_r0x011324ac:
    if (lVar7 == 0) goto LAB_011324ec;
    goto LAB_011324dc;
  case 4:
    uVar4 = FUN_0121c6e0(lVar6);
    uVar5 = FUN_00fa77b0(lVar7,uVar11,local_60,uVar4);
    break;
  default:
    uVar5 = 0;
  }
  if (lVar7 != 0) {
LAB_011324dc:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
LAB_011324ec:
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return uVar5 & 1;
}


