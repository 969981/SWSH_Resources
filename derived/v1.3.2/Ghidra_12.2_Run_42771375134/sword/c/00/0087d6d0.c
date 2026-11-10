/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d6d0; name: FUN_0087d6d0
 */


void FUN_0087d6d0(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_0086ad20(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_00867f40(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 1) == 0) {
    FUN_00871a70(*(undefined8 *)(param_1 + 0x98),1);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
    if (lVar5 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_0077d050(lVar5,0xd);
    *(long **)(lVar5 + 8) = param_2;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00869620(*(undefined8 *)(param_1 + 0x98));
    FUN_008648a0(lVar5,899,uVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x98);
    uVar6 = FUN_0077d470(lVar5);
    FUN_00872cd0(uVar7,uVar6);
    FUN_00871bc0(*(undefined8 *)(param_1 + 0x98),0);
    uVar1 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    FUN_008649f0(uVar1,uVar2);
    uVar1 = FUN_00864a10(0x15);
    FUN_008741d0(*(undefined8 *)(param_1 + 0x98),uVar1);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0087d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      return;
    }
  }
  return;
}


