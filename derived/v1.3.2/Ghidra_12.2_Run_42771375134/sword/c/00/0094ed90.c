/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094ed90; name: FUN_0094ed90
 */


void FUN_0094ed90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint local_34;
  
  FUN_008e0a00(param_2);
  uVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  uVar2 = FUN_008f98a0();
  uVar4 = FUN_00942380(param_1);
  uVar5 = FUN_008fafc0(uVar4,uVar1,uVar2);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00935d00(uVar4,0x56,0,0,0);
    return;
  }
  iVar3 = FUN_00942640(param_1);
  if (iVar3 == 0) {
    local_34 = FUN_008e0a00(param_2);
    local_34 = local_34 & 0xff;
    uVar4 = FUN_009423b0(param_1);
    FUN_00935d00(uVar4,0x59,0,1,&local_34);
  }
  return;
}


