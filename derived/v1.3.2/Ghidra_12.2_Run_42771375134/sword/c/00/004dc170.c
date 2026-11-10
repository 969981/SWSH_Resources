/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dc170; name: FUN_004dc170
 */


undefined8 FUN_004dc170(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_0048e150(param_2,&uStack_24,&local_28);
  lVar1 = FUN_004dd890(uStack_24,local_28,param_2);
  if (lVar1 == 0) {
    FUN_0048d330(param_2,1);
    return 2;
  }
  uVar2 = FUN_004dc200(param_1,lVar1,param_3 & 1,1);
  return uVar2;
}


