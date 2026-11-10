/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c9b0; name: FUN_0094c9b0
 */


void FUN_0094c9b0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_3 == '\x1f') {
    bVar1 = false;
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_009424e0(param_1);
    bVar1 = lVar4 != 0;
    if ((lVar4 != 0) && (param_3[1] != '\0')) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00938920(uVar2,lVar4);
      bVar1 = true;
    }
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar2,param_3 + 4);
  if ((bVar1) && (param_3[1] != '\0')) {
    uVar2 = FUN_009423b0(param_1);
    FUN_009389e0(uVar2,lVar4);
  }
  uVar3 = FUN_00944020(param_3 + 4);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00942400(param_1);
    *(undefined1 *)(lVar4 + 0x34) = 1;
  }
  return;
}


