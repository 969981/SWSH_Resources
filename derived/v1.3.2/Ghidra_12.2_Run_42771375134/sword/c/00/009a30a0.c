/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a30a0; name: FUN_009a30a0
 */


void FUN_009a30a0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                 int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  *param_2 = 0;
  *param_3 = 0;
  bVar1 = FUN_009141c0(param_4);
  if (bVar1 != 0) {
    uVar7 = 0;
    do {
      uVar4 = FUN_00914310(param_4,uVar7 & 0xffffffff);
      uVar5 = FUN_008e18d0();
      if (((((uVar5 & 1) != 0) && (*param_5 != 0)) &&
          (iVar2 = FUN_008e12a0(uVar4,0x11), iVar2 < 100)) && (iVar2 = *param_5, iVar2 != 0)) {
        puVar6 = param_3;
        if (*(char *)((long)param_5 + 0xd) == '\0') {
          uVar3 = FUN_008e0a00(uVar4);
          uVar4 = FUN_009423b0(param_1);
          FUN_0093a3e0(uVar4,uVar3,iVar2);
          puVar6 = param_2;
        }
        *puVar6 = 1;
        uVar4 = FUN_00942380(param_1);
        FUN_008fa270(uVar4,0x17,iVar2);
      }
      uVar7 = uVar7 + 1;
      param_5 = param_5 + 4;
    } while (bVar1 != uVar7);
  }
  return;
}


