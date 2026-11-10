/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a5a0; name: FUN_0094a5a0
 */


void FUN_0094a5a0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined1 auStack_78 [40];
  
  *param_2 = 0;
  local_80 = *(undefined8 *)(param_3 + 8);
  uVar2 = FUN_009423e0();
  FUN_0092e950(uVar2,*param_3,*(undefined4 *)(param_3 + 4),param_3[0x10],&local_80);
  local_88[0] = 0;
  uVar2 = FUN_00942380(param_1);
  FUN_008f93b0(uVar2,local_84,local_88,param_3[0x10]);
  if (local_88[0] != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_009423b0(param_1);
      uVar3 = FUN_00936f90(uVar2,local_84[uVar4],*(undefined4 *)(param_3 + 4),&local_80);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009423b0(param_1);
        FUN_0093a8d0(uVar2,local_84[uVar4],*(undefined4 *)(param_3 + 4),&local_80);
        uVar1 = local_84[uVar4];
        if (*(short *)(param_3 + 0x12) != 0xf9) {
          uVar2 = FUN_009423b0(param_1);
          FUN_0093a160(uVar2,*(undefined2 *)(param_3 + 0x12));
        }
        FUN_00943e80(auStack_78,param_3 + 0x14);
        if (param_3[0x38] != '\0') {
          FUN_00943f90(auStack_78,0,uVar1);
        }
        uVar2 = FUN_009423b0(param_1);
        FUN_00935bf0(uVar2,auStack_78);
        *param_2 = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_88[0]);
  }
  return;
}


