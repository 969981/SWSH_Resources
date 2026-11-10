/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009455b0; name: FUN_009455b0
 */


void FUN_009455b0(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  param_2[0] = 0;
  param_2[1] = 0;
  uVar5 = FUN_009424e0(param_1,*param_3);
  uVar6 = FUN_009424e0(param_1,param_3[1]);
  if (param_3[2] == '\0') {
    iVar3 = FUN_00942620(param_1);
    iVar4 = FUN_00942640(param_1);
    bVar1 = iVar4 != 0 || iVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  uVar7 = FUN_009456d0(param_1,param_2 + 1,uVar5,uVar6);
  if ((uVar7 & 1) == 0) {
    if (bVar1) {
      bVar2 = FUN_00945830(param_1,uVar6,*(undefined2 *)(param_3 + 4),*(undefined8 *)(param_3 + 8));
      *param_2 = bVar2 & 1;
    }
    else {
      bVar2 = FUN_009459b0(param_1,uVar5,uVar6,*(undefined2 *)(param_3 + 4),param_3[3]);
      *param_2 = bVar2 & 1;
      if ((bVar2 & 1) != 0) {
        FUN_009423f0(param_1);
        uVar5 = FUN_00942fe0();
        FUN_00943280(uVar5,5);
        return;
      }
    }
  }
  return;
}


