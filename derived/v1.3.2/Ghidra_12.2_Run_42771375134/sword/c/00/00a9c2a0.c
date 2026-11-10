/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9c2a0; name: FUN_00a9c2a0
 */


void FUN_00a9c2a0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_00a5fbd0();
  iVar1 = (**(code **)(*param_1 + 0x870))(param_1);
  if (((iVar1 == 2) || (uVar3 = (**(code **)(*param_1 + 0x880))(param_1), (uVar3 & 1) != 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x868))(param_1), iVar1 == 0)) {
    *(undefined8 *)((long)param_1 + 0x16fc) = 0x100000000;
    *(undefined4 *)((long)param_1 + 0x1704) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)((long)param_1 + 0x16fc) = 1;
  (**(code **)(*param_1 + 0x810))(param_1,1);
  uVar2 = FUN_00878a80();
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  iVar1 = (**(code **)(*param_1 + 0x870))(param_1);
  if (iVar1 == 1) {
    *(undefined4 *)((long)param_1 + 0x1724) = 3;
    param_1[0x2e0] = 0x300000003;
    (**(code **)(*param_1 + 0x810))(param_1,3);
    uVar2 = FUN_00878a80();
    *(undefined4 *)((long)param_1 + 0x1744) = uVar2;
    lVar4 = FUN_009c5ff0(param_1);
    if ((lVar4 != 0) && (uVar3 = FUN_008f37f0(lVar4,2), (uVar3 & 1) != 0)) {
      (**(code **)(*param_1 + 0x810))(param_1,2);
      uVar2 = FUN_00878a80();
      *(undefined4 *)((long)param_1 + 0x174c) = uVar2;
    }
  }
  (**(code **)(*param_1 + 0x810))(param_1,0);
  uVar2 = FUN_00878a80();
  *(undefined4 *)(param_1 + 0x2e9) = uVar2;
  return;
}


