/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc0640; name: FUN_00bc0640
 */


void FUN_00bc0640(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar5 == 0) {
    uVar2 = FUN_0150b350(0);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar2 = FUN_0150b350(lVar5);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (*(short *)(param_1 + 0x6d8) != 0) {
    lVar6 = 0;
    uVar8 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x6d0);
      if (*(int *)(lVar5 + lVar6) == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x5f0);
        uVar4 = 3;
        uVar1 = *(undefined2 *)(lVar5 + lVar6 + 6);
LAB_00bc072c:
        FUN_00bd34e0(uVar3,uVar4,uVar1,0);
      }
      else if ((*(int *)(lVar5 + lVar6) == 0) && (uVar2 == *(ushort *)(lVar5 + lVar6 + 4))) {
        uVar3 = *(undefined8 *)(param_1 + 0x5f0);
        uVar1 = *(undefined2 *)(lVar5 + lVar6 + 6);
        uVar4 = 0;
        goto LAB_00bc072c;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x6d0) + lVar6) = 2;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar8 < *(ushort *)(param_1 + 0x6d8));
  }
  *(undefined2 *)(param_1 + 0x6da) = 0;
  FUN_00bca320(param_1);
  return;
}


