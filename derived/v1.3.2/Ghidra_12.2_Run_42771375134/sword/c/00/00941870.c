/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941870; name: FUN_00941870
 */


ulong FUN_00941870(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [32];
  undefined8 local_38;
  
  FUN_00943860(auStack_60,*param_1,param_1[1]);
  uVar3 = FUN_00943ae0(auStack_60,&local_38);
  uVar4 = 0;
  while ((uVar3 & 1) != 0) {
    uVar5 = *param_1;
    uVar2 = FUN_008e0a00(local_38);
    uVar3 = FUN_008f9ff0(uVar5,param_2,uVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = FUN_008e0a00(local_38);
      uVar3 = uVar4 & 0xff;
      uVar4 = (ulong)((int)uVar4 + 1);
      *(undefined1 *)(param_3 + uVar3) = uVar1;
    }
    uVar3 = FUN_00943ae0(auStack_60,&local_38);
  }
  return uVar4;
}


