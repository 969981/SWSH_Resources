/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096c970; name: FUN_0096c970
 */


void FUN_0096c970(undefined8 param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_0093ed40(param_1,4);
  if (cVar1 == param_2) {
    uVar3 = 100;
    if (param_3 != 1) {
      uVar3 = 0x65;
    }
    iVar2 = FUN_0093eb90(param_1,0x1b);
    if (((iVar2 == param_3) && (iVar2 = FUN_0093eb90(param_1,0x4c), iVar2 == 0)) &&
       (iVar2 = FUN_0093eb90(param_1,uVar3), iVar2 == 0)) {
      iVar2 = FUN_0093ed20(param_1);
      uVar4 = 0x800;
      if (iVar2 != 0) {
        uVar4 = 0xaac;
      }
      FUN_0093ebf0(param_1,0x38,uVar4);
      FUN_0093ebd0(param_1,uVar3,1);
      return;
    }
  }
  return;
}


