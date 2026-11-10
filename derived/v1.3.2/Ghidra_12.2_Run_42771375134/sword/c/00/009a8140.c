/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8140; name: FUN_009a8140
 */


void FUN_009a8140(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_a0 [80];
  undefined1 *local_50;
  undefined1 local_48 [8];
  
  *param_2 = 0;
  FUN_0093b070(auStack_a0);
  local_50 = auStack_a0;
  FUN_00942450(param_1);
  uVar2 = FUN_00925910();
  FUN_00948da0(uVar2,local_48,&local_50);
  iVar1 = FUN_008dd810(0);
  if (iVar1 != 0) {
    iVar5 = 1;
    do {
      FUN_0093b2e0(auStack_a0);
      do {
        lVar3 = FUN_0093b2f0(auStack_a0);
        if (lVar3 == 0) break;
        FUN_009a8250(param_1,lVar3,iVar1);
        FUN_009423f0(param_1);
        uVar2 = FUN_00942fe0();
        uVar4 = FUN_00943290(uVar2,5);
      } while ((uVar4 & 1) == 0);
      uVar4 = FUN_009426f0(param_1);
      if (((uVar4 & 1) != 0) && (uVar4 = FUN_00942710(param_1), (uVar4 & 1) != 0)) break;
      iVar1 = FUN_008dd810(iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
  }
  FUN_00942450(param_1);
  uVar2 = FUN_00925120();
  FUN_009a93c0(uVar2,local_48,&local_50);
  *param_2 = local_48[0];
  return;
}


