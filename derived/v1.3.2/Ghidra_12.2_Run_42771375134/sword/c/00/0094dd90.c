/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094dd90; name: FUN_0094dd90
 */


void FUN_0094dd90(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_2 = 0;
  if (*param_3 != param_3[1]) {
    uVar1 = FUN_008f94e0();
    uVar2 = FUN_008f94e0(param_3[1]);
    if ((uVar1 & 0xff) == (uVar2 & 0xff)) {
      uVar5 = FUN_009424e0(param_1,*param_3);
      uVar6 = FUN_009424e0(param_1,param_3[1]);
      uVar7 = FUN_008e1600(uVar5);
      if (((uVar7 & 1) == 0) && (uVar7 = FUN_008e1600(uVar6), (uVar7 & 1) == 0)) {
        uVar3 = FUN_008e0a00(uVar5);
        uVar2 = FUN_00942580(param_1,uVar3);
        uVar3 = FUN_008e0a00(uVar6);
        uVar4 = FUN_00942580(param_1,uVar3);
        if ((uVar2 & 0xff) != 5) {
          if ((uVar4 & 0xff) != 5) {
            uVar8 = FUN_009423b0(param_1);
            FUN_00939820(uVar8,uVar1,uVar2,uVar4);
            uVar8 = FUN_009423b0(param_1);
            FUN_00939870(uVar8,uVar1,uVar2,uVar4);
            uVar8 = FUN_009423b0(param_1);
            FUN_00935bf0(uVar8,param_3 + 4);
            uVar7 = FUN_008e1600(uVar5);
            if ((uVar7 & 1) == 0) {
              uVar8 = FUN_009423e0(param_1);
              FUN_009295b0(uVar8,uVar5);
            }
            uVar7 = FUN_008e1600(uVar6);
            if ((uVar7 & 1) == 0) {
              uVar5 = FUN_009423e0(param_1);
              FUN_009295b0(uVar5,uVar6);
            }
            *param_2 = 1;
          }
        }
      }
    }
  }
  return;
}


