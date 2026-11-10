/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961590; name: FUN_00961590
 */


uint FUN_00961590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,byte param_8,ushort *param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  
  local_68[0] = FUN_008e0a00(param_3);
  FUN_00942450(param_1);
  uVar4 = FUN_00925630();
  FUN_00945320(uVar4,local_70,local_68);
  uVar4 = FUN_009423e0(param_1);
  uVar1 = FUN_00926b20(uVar4,param_2,param_3,param_4,param_5,param_6,param_7 & 1,0,param_8 & 1,
                       local_70[0],param_9);
  uVar4 = FUN_00942380(param_1);
  uVar5 = FUN_008f35c0(uVar4,0x20000000);
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_008e0b50(param_3), (uVar5 & 1) != 0)) {
    iVar2 = FUN_008e12a0(param_3,0xd);
    iVar3 = FUN_00961a70(param_3);
    if ((uint)(iVar2 - iVar3) < (uint)*param_9) {
      *param_9 = (ushort)(iVar2 - iVar3);
    }
  }
  return uVar1 & 1;
}


