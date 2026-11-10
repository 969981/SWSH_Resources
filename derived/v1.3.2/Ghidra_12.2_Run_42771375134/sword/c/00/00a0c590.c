/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0c590; name: FUN_00a0c590
 */


undefined8 FUN_00a0c590(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_48;
  
  iVar1 = param_3[2];
  local_48 = FUN_008e1aa0(*(undefined8 *)(param_2 + 0x10),iVar1);
  if (iVar1 == 5) {
    uVar4 = FUN_008e1980();
  }
  else {
    uVar4 = FUN_008e1810(*(undefined8 *)(param_2 + 0x10),iVar1);
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    iVar6 = param_3[1];
    if (iVar6 == 1) {
      iVar6 = 0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      if ((iVar6 != 4) && (iVar6 != 2)) {
        return 0;
      }
      uVar2 = FUN_008ed270(&local_48);
      uVar2 = uVar2 & 0xff;
      uVar3 = FUN_008e1ab0(*(undefined8 *)(param_2 + 0x10),iVar1);
      iVar6 = uVar2 - (uVar3 & 0xff);
      uVar3 = FUN_008e1a60(*(undefined8 *)(param_2 + 0x10),iVar1);
      uVar3 = uVar3 & 0xffff;
    }
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *(undefined8 *)(param_3 + 4);
      param_1[1] = *(undefined8 *)(param_3 + 6);
      *(undefined4 *)(param_1 + 2) = *param_3;
      *(undefined4 *)((long)param_1 + 0x14) = param_3[1];
      *(int *)(param_1 + 3) = iVar6;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *(uint *)(param_1 + 4) = uVar3;
    }
    uVar5 = 1;
  }
  return uVar5;
}


