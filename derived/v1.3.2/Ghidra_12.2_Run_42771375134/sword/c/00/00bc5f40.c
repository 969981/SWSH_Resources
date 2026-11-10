/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5f40; name: FUN_00bc5f40
 */


void FUN_00bc5f40(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_48;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_48 = FUN_016b8190();
  uVar4 = (uint)((ulong)local_48 >> 0x20);
  uVar2 = uVar4 - 2;
  if (1 < uVar4) {
    iVar6 = (int)local_48;
    if (iVar6 == 0) {
      if ((int)uVar2 < 6) {
        uVar1 = *(undefined4 *)(param_1 + 0x614);
        iVar6 = 1;
        uVar2 = FUN_00bcfb20(1,0,uVar2);
        goto LAB_00bc605c;
      }
    }
    else if (uVar2 < 5) {
      lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar5 == 0) {
        uVar1 = FUN_0150b350(0);
      }
      else {
        plVar8 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar1 = FUN_0150b350(lVar5);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      uVar2 = FUN_00bcfb20(0,iVar6 + -1,uVar2);
      iVar6 = 0;
      goto LAB_00bc605c;
    }
  }
  uVar1 = 0xffffffff;
  iVar6 = 2;
  uVar2 = 0xffffffff;
LAB_00bc605c:
  FUN_00bce9a0(*(undefined8 *)(param_1 + 0x5e8),iVar6,uVar1,uVar2);
  if ((iVar6 == 1) && (uVar2 < 6)) {
    do {
      uVar3 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar1,uVar2);
      FUN_00bb7250(param_1,uVar3,uVar2,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 != 6);
  }
  if (*(char *)(param_1 + 0x60c) != '\0') {
    FUN_00bb50c0(param_1,&local_48,0);
  }
  return;
}


