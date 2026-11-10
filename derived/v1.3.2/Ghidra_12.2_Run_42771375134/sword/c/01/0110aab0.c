/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0110aab0; name: FUN_0110aab0
 */


void FUN_0110aab0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  param_1 = param_1 + 0x100;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_0077d660(lVar3);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651d0,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651d8,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651e0,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651e8,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651f0,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_021651f8,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165200,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165208,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165210,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165218,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165220,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165228,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165230,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165238,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165240,uVar1,10);
  uVar1 = FUN_0077d470(lVar3);
  FUN_00ffd700(param_1,&DAT_02165248,uVar1,10);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x0110acfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


