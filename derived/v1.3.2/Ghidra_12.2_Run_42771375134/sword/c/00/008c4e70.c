/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c4e70; name: FUN_008c4e70
 */


void FUN_008c4e70(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(*param_3,param_4,0);
    uVar1 = FUN_0077d470(0);
    FUN_00ffd700(param_1,param_2,uVar1,param_5);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_0077eb10(*param_3,param_4,lVar2);
  uVar1 = FUN_0077d470(lVar2);
  FUN_00ffd700(param_1,param_2,uVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x008c4f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


