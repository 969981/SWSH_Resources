/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004864c0; name: FUN_004864c0
 */


void FUN_004864c0(long *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  FUN_004a4b20(param_1 + 6);
  (**(code **)(*param_1 + 0x180))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(0,param_1,param_2,0);
  if (param_2 - 0x14U < 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
    uVar5 = 0;
  }
  else {
    if (param_2 == 0x12) {
      lVar1 = 0xc;
    }
    else {
      if (param_2 != 0x13) {
        return;
      }
      lVar1 = 0xd;
    }
    local_24 = *(undefined4 *)(PTR_DAT_02712b40 + lVar1 * 4);
    pbVar2 = (byte *)param_1[0x12];
    pbVar3 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      uVar4 = 0;
      pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
      do {
        if ((uint)pbVar2[uVar4 + 1] == (uint)lVar1) goto LAB_00486598;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 4;
      } while (uVar4 < *pbVar2);
      pbVar3 = (byte *)0x0;
    }
LAB_00486598:
    pbVar2 = (byte *)&local_24;
    if (pbVar3 != (byte *)0x0) {
      pbVar2 = pbVar3;
    }
    uVar5 = *(undefined4 *)pbVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
  }
                    /* WARNING: Could not recover jumptable at 0x004865cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5,param_1,param_2,0,0);
  return;
}


