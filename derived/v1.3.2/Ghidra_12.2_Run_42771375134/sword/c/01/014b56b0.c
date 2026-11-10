/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b56b0; name: FUN_014b56b0
 */


void FUN_014b56b0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = FUN_0087f070();
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_3;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  if (lVar7 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_0077d050(lVar7,0x20);
  *(long **)(lVar7 + 8) = param_3;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x80;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar3 = FUN_0087ead0(param_1);
  uVar4 = FUN_01524d00(param_2);
  FUN_0087ec80(param_1,uVar4);
  uVar5 = FUN_0087ead0(param_1);
  if ((uVar3 & 0xff) != (uVar5 & 0xff)) {
    FUN_0087ebc0(param_1,uVar3);
  }
  FUN_01524b90(param_2,lVar7);
  FUN_0087d350(param_1,lVar7);
  uVar1 = FUN_01524bf0(param_2);
  FUN_0087d3a0(param_1,uVar1);
  FUN_0087f0c0(param_1,uVar2 & 1);
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014b580c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


