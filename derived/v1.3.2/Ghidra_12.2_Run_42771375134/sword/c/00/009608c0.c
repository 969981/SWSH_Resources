/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009608c0; name: FUN_009608c0
 */


void FUN_009608c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_0093b2e0(param_3[2]);
  lVar1 = FUN_0093b2f0(param_3[2]);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_009423e0(param_1);
      uVar3 = FUN_0092dba0(uVar2,*param_3,lVar1,param_3[1]);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_00942400(param_1);
        FUN_0093af10(lVar4 + 0x10);
        uVar2 = FUN_009423e0(param_1);
        FUN_0092dc70(uVar2,*param_3,lVar1);
        FUN_0093b260(param_3[2],lVar1);
      }
      lVar1 = FUN_0093b2f0(param_3[2]);
    } while (lVar1 != 0);
  }
  return;
}


