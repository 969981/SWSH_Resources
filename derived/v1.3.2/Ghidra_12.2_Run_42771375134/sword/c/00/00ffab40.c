/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffab40; name: FUN_00ffab40
 */


undefined8 FUN_00ffab40(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) || ((lVar3 = param_1[0xd], lVar3 != 0 && (lVar3 != param_2)))) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (lVar3 == 0) {
    param_1[0xd] = param_2;
    plVar1 = param_1 + 0xf;
    (**(code **)(*param_1 + 0x78))(param_1,plVar1);
    (**(code **)(*param_1 + 0x70))(param_1,plVar1,param_1 + 0x15);
    FUN_006e4c50(param_1 + 0x25,plVar1);
    FUN_006e4c50(param_1 + 0x2b,param_1 + 0x15);
    param_1[0x32] = param_1[0x1c];
    param_1[0x33] = param_1[0x1d];
    param_1[0x31] = param_1[0x1b];
    FUN_00ffba40(param_1 + 0x20);
    return 0;
  }
  uVar2 = FUN_00ffc320(param_1 + 0x20);
  return uVar2;
}


