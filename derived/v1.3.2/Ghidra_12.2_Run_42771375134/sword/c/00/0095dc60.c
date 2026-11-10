/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095dc60; name: FUN_0095dc60
 */


void FUN_0095dc60(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  *param_2 = 0;
  FUN_00942390();
  uVar4 = FUN_009319a0();
  uVar5 = FUN_00913dd0(uVar4,*param_3);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_009424e0(param_1,*param_3);
    uVar5 = FUN_008e1600();
    if ((uVar5 & 1) == 0) {
      FUN_008e1290(uVar4);
      uVar5 = FUN_008dd730();
      if ((uVar5 & 1) == 0) {
        uVar3 = FUN_008e2920(uVar4);
        uVar6 = FUN_009423b0(param_1);
        bVar2 = FUN_009384e0(uVar6,*param_3,*(undefined2 *)(param_3 + 2),
                             *(undefined4 *)(param_3 + 4));
        if (((bVar2 & 1) != 0) && (param_3[10] != '\0')) {
          uVar6 = FUN_009423b0(param_1);
          FUN_00938920(uVar6,uVar4);
        }
        if (param_3[8] == '\0') {
          uVar1 = *(ushort *)(param_3 + 2);
          if ((uVar1 == uVar3) || (((uVar1 ^ uVar1 >> 5) & 0x1f) != 0)) {
            if (param_3[9] != '\0') {
              uVar6 = FUN_009423b0(param_1);
              FUN_00936020(uVar6,0x55);
            }
          }
          else {
            uVar6 = FUN_009423b0(param_1);
            FUN_009360e0(uVar6,0x4bc,*param_3,uVar1 & 0x1f);
          }
        }
        if ((bVar2 & 1) != 0) {
          uVar5 = FUN_00943f10(param_3 + 0xc);
          if ((uVar5 & 1) != 0) {
            uVar6 = FUN_009423b0(param_1);
            FUN_00935bf0(uVar6,param_3 + 0xc);
          }
          if (param_3[10] != '\0') {
            uVar6 = FUN_009423b0(param_1);
            FUN_009389e0(uVar6,uVar4);
          }
        }
        *param_2 = bVar2 & 1;
      }
    }
  }
  return;
}


