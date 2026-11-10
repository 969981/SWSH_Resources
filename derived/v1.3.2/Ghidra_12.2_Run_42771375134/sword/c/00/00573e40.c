/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00573e40; name: FUN_00573e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00573e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  long *param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  float param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                  undefined4 param_21)

{
  undefined4 uVar1;
  ulong uVar2;
  
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x1b35c));
  if (param_12 == (undefined8 *)0x0) {
    ram0x02760c48 = 0;
    ram0x02760c50 = 0;
    _DAT_02760c38 = 0;
    _DAT_02760c40 = 0;
    DAT_02760c28 = 0;
    DAT_02760c30 = 0;
    _DAT_02760c18 = 0;
    _DAT_02760c20 = 0;
  }
  else {
    _DAT_02760c18 = *param_12;
    _DAT_02760c20 = param_12[1];
    DAT_02760c28 = param_12[2];
    DAT_02760c30 = param_12[3];
    _DAT_02760c38 = param_12[4];
    _DAT_02760c40 = param_12[5];
    unique0x00048500 = param_12[6];
    unique0x00048800 = param_12[7];
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,4);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,0);
  _DAT_02760c18 = CONCAT44(1.0 / param_17,param_17);
  _DAT_02760c20 = CONCAT44(param_19,param_18);
  DAT_02760c28 = *param_10;
  DAT_02760c30 = param_10[1];
  _DAT_02760c38 = *param_11;
  _DAT_02760c40 = param_11[1];
  ram0x02760c48 = CONCAT44(param_21,param_20);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,4);
  if (param_13 == (long *)0x0) {
    uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_14);
    return uVar2;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_13);
  uVar1 = (**(code **)(*param_13 + 0x80))(param_13);
  (**(code **)(*param_13 + 0x88))(param_13,1);
  uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_14);
  (**(code **)(*param_13 + 0x78))(param_13,uVar1);
  return uVar2 & 0xffffffff;
}


