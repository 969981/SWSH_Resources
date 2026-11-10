/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e9c00; name: FUN_004e9c00
 */


void FUN_004e9c00(float param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 byte param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,int param_11,uint param_12)

{
  long lVar1;
  long local_a0;
  undefined4 local_98;
  ulong local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  
  if (param_11 != 0) {
    lVar1 = FUN_004e9f10(param_3);
    if (lVar1 != 0) {
      FUN_00496290(lVar1,param_8,param_11,2);
      FUN_00496e20(lVar1,param_4,param_9,param_10,param_11);
      FUN_00496e00(lVar1,param_4,param_7,param_11);
    }
    if ((2 < *(uint *)(param_3 + 0x40)) &&
       (lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x10), lVar1 != 0)) {
      local_80 = *(undefined4 *)(param_5 + 1);
      local_88 = *param_5;
      local_98 = (undefined4)param_2[1];
      local_a0 = *param_2;
      local_94 = *(ulong *)((long)param_2 + 0xc);
      local_8c = *(undefined4 *)((long)param_2 + 0x14);
      *(byte *)(lVar1 + 0x88) = param_6 & 1;
      FUN_0042be50(lVar1,&local_a0);
    }
  }
  if ((param_12 & 1) != 0) {
    local_88 = CONCAT71(local_88._1_7_,0xff);
    local_80 = CONCAT31(local_80._1_3_,0xff);
    local_98 = 0;
    local_94 = local_94 & 0xffffffff;
    local_78 = 0;
    local_a0 = param_3;
    FUN_0049f0a0(param_1 * DAT_01d4be08,*(undefined8 *)PTR_DAT_02712b50,8,&local_a0);
  }
  return;
}


