/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01348300; name: FUN_01348300
 */


undefined8 FUN_01348300(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0xa4) <= DAT_01d4c4a8) {
    fVar3 = (float)(**(code **)(PTR_PTR_02718e90 + 0x68))(*(float *)(param_1 + 0xa4) / DAT_01d4c4a8)
    ;
    FUN_013125c0(1.0 - fVar3,param_1);
    lVar1 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    *(float *)(param_1 + 0xa4) =
         *(float *)(param_1 + 0xa4) + (float)((double)*(long *)(lVar1 + 8) / DAT_01cd50a0);
  }
  else {
    lVar1 = FUN_01311d00(param_1);
    uVar2 = FUN_01348960(lVar1 + 0x50);
    if ((uVar2 & 1) != 0) {
      FUN_01323ae0(lVar1,0);
    }
    FUN_013125c0(0x3f800000,param_1);
  }
  return *(undefined8 *)PTR_DAT_02727ab0;
}


