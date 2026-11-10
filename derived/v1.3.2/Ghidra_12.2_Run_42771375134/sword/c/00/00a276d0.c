/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a276d0; name: FUN_00a276d0
 */


void FUN_00a276d0(long *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  
  *param_1 = 0;
  plVar8 = (long *)*param_2;
  if (param_3 == 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00a27974;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_00866110(lVar6,*param_2);
    *(long **)(lVar6 + 8) = plVar8;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0xb8;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = lVar6;
  }
  else {
    uVar4 = FUN_008e1680(param_3);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00a27974:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_00866320(lVar6,*param_2,uVar4);
    *(long **)(lVar6 + 8) = plVar8;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0xb8;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = lVar6;
    uVar2 = FUN_008e12a0(param_3,0xd);
    FUN_0087b060(lVar6,uVar2);
    uVar2 = FUN_008e12a0(param_3,0x17);
    FUN_0087b2e0(lVar6,uVar2);
    uVar2 = FUN_008e19f0(param_3);
    FUN_0087b570(lVar6,uVar2);
    uVar2 = FUN_008e2d10(param_3);
    FUN_00878810(lVar6,uVar2);
    cVar1 = FUN_008e2160(param_3);
    if (cVar1 != '\0') {
      uVar7 = 0;
      do {
        uVar2 = FUN_008e2260(param_3,uVar7);
        FUN_0087bfb0(lVar6,uVar7,uVar2);
        uVar4 = FUN_008e1670(param_3);
        uVar2 = FUN_0087b840(uVar4,uVar7);
        FUN_0087b860(lVar6,uVar7,uVar2);
        uVar2 = FUN_008e2500(param_3,uVar7);
        FUN_0087b5b0(lVar6,uVar7,uVar2);
        uVar7 = uVar7 + 1;
        uVar3 = FUN_008e2160(param_3);
      } while (uVar7 < (uVar3 & 0xff));
    }
  }
  return;
}


