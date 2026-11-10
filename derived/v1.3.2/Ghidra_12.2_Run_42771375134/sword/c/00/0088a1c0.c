/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a1c0; name: FUN_0088a1c0
 */


void FUN_0088a1c0(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f0 [192];
  
  iVar1 = FUN_008783b0(param_2[1]);
  if (iVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  uVar4 = *param_2;
  uVar2 = FUN_008783b0(uVar4);
  uVar3 = FUN_008783c0(uVar4);
  FUN_0087f4c0(auStack_f0);
  FUN_0087f540(auStack_f0,uVar2,uVar3);
  iVar1 = FUN_0087f680(auStack_f0,0x31);
  FUN_0087f510(auStack_f0);
  if (iVar1 == 0x298) {
    *(ushort *)(param_1 + 0x2c) = (ushort)*(byte *)(param_3 + 0x20);
  }
  return;
}


