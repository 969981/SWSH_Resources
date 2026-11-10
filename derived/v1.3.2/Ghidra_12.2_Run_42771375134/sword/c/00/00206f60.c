/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206f60; name: FUN_00206f60
 */


void FUN_00206f60(undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02711048 + 0x308);
  uVar2 = *(ushort *)(param_1 + 1);
  FUN_00218090(param_1,param_2,uVar6);
  puVar5 = param_1 + 2;
  FUN_00218090(puVar5,0xffffffff,uVar6);
  lVar3 = FUN_001e1e70(param_3);
  if (lVar3 != 0) {
    pbVar1 = (byte *)(param_2 + 0x90);
    if ((*(byte *)(param_2 + 0x38) & 0x40) != 0) {
      pbVar1 = (byte *)(*(long *)(param_2 + 0x40) + 0x34);
    }
    if ((*pbVar1 >> 1 & 1) != 0) {
      if (*(short *)(param_1 + 1) == 1) {
        puVar4 = param_1;
      }
      else {
        puVar4 = (undefined8 *)*param_1;
      }
      uVar6 = FUN_0039a800(lVar3 + 0x2430,puVar4[uVar2],param_3,
                           *(short *)(param_3 + 8) == 6 || *(short *)(param_3 + 8) == 0x10,0,0);
      if (*(short *)(param_1 + 3) != 1) {
        puVar5 = (undefined8 *)*puVar5;
      }
      puVar5[uVar2] = uVar6;
    }
  }
  FUN_00207080(param_3 + *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_3 + 8) * 8 + 0x98),
               param_2 + 0x30);
  FUN_00206c40(param_2,param_3);
  return;
}


