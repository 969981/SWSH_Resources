/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a31b0; name: FUN_009a31b0
 */


void FUN_009a31b0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_2 = 0;
  bVar1 = FUN_009141c0(param_3);
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = FUN_00914310(param_3,uVar6 & 0xffffffff);
      uVar5 = FUN_008e18d0();
      if (((((uVar5 & 1) != 0) && (*param_4 != 0)) &&
          (iVar2 = FUN_008e12a0(uVar4,0x11), iVar2 < 100)) &&
         ((iVar2 = *param_4, iVar2 != 0 && (*(char *)((long)param_4 + 0xd) != '\0')))) {
        uVar3 = FUN_008e0a00(uVar4);
        uVar4 = FUN_009423b0(param_1);
        FUN_0093a3e0(uVar4,uVar3,iVar2);
        *param_2 = 1;
      }
      uVar6 = uVar6 + 1;
      param_4 = param_4 + 4;
    } while (bVar1 != uVar6);
  }
  return;
}


