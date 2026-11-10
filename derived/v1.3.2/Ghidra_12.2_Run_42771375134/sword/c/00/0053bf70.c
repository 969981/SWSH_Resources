/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053bf70; name: FUN_0053bf70
 */


undefined8
FUN_0053bf70(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  uVar2 = FUN_0053b640();
  lVar5 = *(long *)(param_1 + 0x110);
  if (lVar5 == 0) {
LAB_0053bfdc:
    local_38 = 0;
  }
  else {
    lVar4 = param_1 + 0x110;
    do {
      bVar1 = *(ulong *)(lVar5 + 0x20) < uVar2;
      if (!bVar1) {
        lVar4 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
    } while (lVar5 != 0);
    if ((lVar4 == param_1 + 0x110) || (uVar2 < *(ulong *)(lVar4 + 0x20))) goto LAB_0053bfdc;
    local_38 = *(long *)(lVar4 + 0x28);
    if (local_38 != 0) goto LAB_0053c004;
  }
  uVar3 = FUN_00527cc0(param_1,uVar2,param_4,param_5,param_6,0,&local_38);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
LAB_0053c004:
  *(long *)(param_1 + 0x70) = local_38;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}


