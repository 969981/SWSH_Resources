/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dc710; name: FUN_010dc710
 */


void FUN_010dc710(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_014ca220(lVar1,0,*param_2,4,0,1);
  FUN_014ca220(lVar1,1,param_2[1],2,2,1);
  FUN_014ca220(lVar1,2,param_2[2],2,2,1);
  FUN_010dc5e0(param_1,0x5fc2067668d465e9,0x18ff0a123bc6cfaf);
  FUN_014ca220(lVar1,0,param_2[3],2,0,1);
  FUN_010dc5e0(param_1,0x5fc2117668d4789a,0xd0cb6e805100d4c5);
  FUN_014ca220(lVar1,0,param_2[4],2,0,1);
  FUN_010dc5e0(param_1,0x5fc50f7668d6ab0b,0xd0cb6c805100d15f);
  FUN_014ca220(lVar1,0,param_2[5],2,0,1);
  FUN_010dc5e0(param_1,0x5fc5117668d6ae71,0xd0cb6a805100cdf9);
  FUN_014ca220(lVar1,0,param_2[6],2,0,1);
  FUN_010dc5e0(param_1,0x5fc5137668d6b1d7,0xd0cb68805100ca93);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010dc910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


