/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969cc0; name: FUN_00969cc0
 */


void FUN_00969cc0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char local_44 [4];
  
  FUN_0093b2e0(param_3[2]);
  lVar3 = FUN_0093b2f0(param_3[2]);
  if (lVar3 != 0) {
    do {
      uVar4 = FUN_009427a0(param_1,param_3[1],lVar3);
      if ((uVar4 & 1) == 0) {
        local_44[0] = '\x01';
        uVar5 = FUN_009423e0(param_1);
        uVar4 = FUN_0092da80(uVar5,param_3[1],lVar3,*(undefined4 *)*param_3,local_44);
        if ((uVar4 & 1) != 0) {
          lVar6 = *param_3;
          uVar2 = FUN_0093b420(param_3[2]);
          uVar1 = *(uint *)(lVar6 + 0x24);
          FUN_0093b260(param_3[2],lVar3);
          if ((((uint)(1 < uVar2) & (uVar1 & 8) >> 3) == 0) && (local_44[0] != '\0')) {
            uVar5 = FUN_009423b0(param_1);
            FUN_009366d0(uVar5,lVar3,*(undefined4 *)*param_3);
          }
        }
      }
      lVar3 = FUN_0093b2f0(param_3[2]);
    } while (lVar3 != 0);
  }
  return;
}


