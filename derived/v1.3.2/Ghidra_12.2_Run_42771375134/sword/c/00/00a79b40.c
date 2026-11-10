/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79b40; name: FUN_00a79b40
 */


void FUN_00a79b40(long *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((param_2 & 0xff) == 5) {
    FUN_00a9b3c0(param_1[0xc1],5);
    return;
  }
  uVar4 = FUN_009c5ff0(param_1);
  uVar2 = FUN_008f9590(uVar4,param_2);
  uVar4 = (**(code **)(*param_1 + 0x7f8))(param_1,uVar2);
  uVar5 = FUN_008e1600();
  if ((uVar5 & 1) == 0) {
    uVar2 = FUN_008e12a0(uVar4,0xf);
    uVar4 = FUN_008e12a0(uVar4,0xd);
    iVar3 = FUN_016ac470(uVar4,uVar2);
    if (iVar3 == 2) {
      FUN_00a9b3c0(param_1[0xc1],1);
      return;
    }
    FUN_00a9b3c0(param_1[0xc1],0);
    return;
  }
  uVar4 = FUN_009c5ff0(param_1);
  uVar2 = FUN_008f96b0(uVar4,param_2);
  (**(code **)(*param_1 + 0x830))(param_1,uVar2);
  cVar1 = FUN_009141d0();
  if (cVar1 == '\0') {
    FUN_00a9b3c0(param_1[0xc1],3);
    return;
  }
  FUN_00a9b3c0(param_1[0xc1],2);
  return;
}


