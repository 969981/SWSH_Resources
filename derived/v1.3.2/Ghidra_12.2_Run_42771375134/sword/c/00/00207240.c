/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207240; name: FUN_00207240
 */


undefined8 FUN_00207240(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00217f90();
  if (uVar2 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_001e1e70(param_3);
    if (lVar3 != 0) {
      pbVar1 = (byte *)(param_2 + 0x90);
      if ((*(byte *)(param_2 + 0x38) & 0x40) != 0) {
        pbVar1 = (byte *)(*(long *)(param_2 + 0x40) + 0x34);
      }
      if ((*pbVar1 >> 1 & 1) != 0) {
        puVar4 = (undefined8 *)(param_1 + 0x10);
        if (*(short *)(param_1 + 0x18) != 1) {
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_0039a990(lVar3 + 0x2430,puVar4[uVar2]);
      }
    }
    FUN_00207350(param_3 + *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_3 + 8) * 8 + 0x98),
                 param_2 + 0x30,param_4 & 1,*(int *)(param_2 + 0x20) == 1);
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02711048 + 0x308);
    FUN_00218220(param_1,uVar2,uVar5);
    FUN_00218220(param_1 + 0x10,uVar2,uVar5);
    FUN_00206c90(param_2);
    uVar5 = 1;
  }
  return uVar5;
}


