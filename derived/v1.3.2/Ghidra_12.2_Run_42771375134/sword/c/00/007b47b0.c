/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b47b0; name: FUN_007b47b0
 */


void FUN_007b47b0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 auStack_50 [16];
  
  lVar1 = *(long *)PTR_DAT_02716a30;
  if (lVar1 != 0) {
    FUN_01941400(lVar1,PTR_LAB_02716a38);
    FUN_01940f00(auStack_50,lVar1,&LAB_007b4850,0);
    FUN_007b4b80(param_1,param_2 + 0x18,param_3,param_4);
    FUN_007b4f50(param_1);
  }
  return;
}


