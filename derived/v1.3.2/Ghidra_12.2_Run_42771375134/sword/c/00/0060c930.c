/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060c930; name: FUN_0060c930
 */


int FUN_0060c930(undefined8 *param_1)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  
  __ptr = (void *)FUN_0060ae40();
  if (__ptr == (void *)0x0) {
    iVar1 = 7;
  }
  else {
    iVar1 = FUN_00605c60(__ptr,param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      FUN_00605440(uVar2,PTR_DAT_02714520);
      FUN_00605440(uVar2,PTR_DAT_02714528);
      FUN_00605440(uVar2,PTR_DAT_02714530);
      FUN_00605440(uVar2,PTR_DAT_02714538);
      FUN_00605440(uVar2,PTR_DAT_02714540);
      FUN_00605440(uVar2,PTR_DAT_02714548);
      FUN_00605440(uVar2,PTR_DAT_02714550);
    }
    else {
      free(__ptr);
    }
    FUN_0060c5f0(*param_1);
  }
  return iVar1;
}


