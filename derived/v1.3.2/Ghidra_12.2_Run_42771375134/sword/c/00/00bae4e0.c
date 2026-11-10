/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bae4e0; name: FUN_00bae4e0
 */


void FUN_00bae4e0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((int)param_2 == 0) {
    uVar1 = 0x78b6ad00ae91a654;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x2e0);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_014c9660(lVar3,0,param_2 & 0xffffffff);
      FUN_00bae160(param_1,0,0x7c9802b1f85f32e8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00bae5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_014c9660(0,0,param_2 & 0xffffffff);
    param_2 = 0;
    uVar1 = 0x7c9802b1f85f32e8;
  }
  FUN_00bae160(param_1,param_2,uVar1,param_3);
  return;
}


