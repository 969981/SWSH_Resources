/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e0910; name: FUN_005e0910
 */


undefined8 FUN_005e0910(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_005dca90();
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*(long *)param_1[0x17] + 0x50))();
    puVar2 = PTR_DAT_02713e78;
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
      puVar1 = *(undefined **)(lVar4 + 8);
    }
    (**(code **)(*param_1 + 0x48))(param_1,puVar1);
    lVar4 = (**(code **)(*(long *)param_1[0x17] + 0x68))();
    if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
      puVar2 = *(undefined **)(lVar4 + 8);
    }
    (**(code **)(*param_1 + 0x60))(param_1,puVar2);
    uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005e09b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
      return uVar5;
    }
  }
  return 0;
}


