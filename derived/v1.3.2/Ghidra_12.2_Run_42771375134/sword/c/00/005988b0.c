/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005988b0; name: FUN_005988b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_005988b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            float param_5,undefined4 param_6,long param_7,undefined4 *param_8,undefined8 param_9,
            byte param_10,undefined8 param_11,undefined8 param_12,int param_13,int param_14,
            undefined8 param_15,long param_16,long param_17,undefined4 param_18)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  float local_84;
  
  if ((param_10 & 1) == 0) {
    param_11 = 0;
    param_14 = 0;
    local_84 = 0.0;
LAB_00598af0:
    param_12 = *(undefined8 *)(param_7 + 0x29a80);
    if (param_13 != 0) goto LAB_00598920;
LAB_00598b04:
    param_16 = *(long *)(param_7 + 0x29a90);
    if (param_14 != 0) goto LAB_00598928;
LAB_00598b18:
    param_17 = *(long *)(param_7 + 0x29a90);
    if (param_14 != 0 || param_13 != 0) goto joined_r0x00598b3c;
  }
  else {
    local_84 = param_5;
    if (param_5 == 0.0) goto LAB_00598af0;
    if (param_13 == 0) goto LAB_00598b04;
LAB_00598920:
    if (param_14 == 0) goto LAB_00598b18;
LAB_00598928:
    if (param_14 != 0 || param_13 != 0) goto joined_r0x00598b3c;
  }
  param_15 = *(undefined8 *)(param_7 + 0x29a80);
joined_r0x00598b3c:
  if (param_16 == 0) {
    param_16 = *(long *)(param_7 + 0x29a90);
  }
  if (param_17 == 0) {
    param_17 = *(long *)(param_7 + 0x29a90);
  }
  puVar3 = (undefined8 *)(param_7 + 0x30);
  iVar1 = 4;
  if (param_13 != 0) {
    iVar1 = param_13;
  }
  lVar2 = 4;
  if ((param_14 == 0 & param_10) == 0) {
    lVar2 = (long)param_14;
  }
  (**(code **)(*(long *)*puVar3 + 0xe8))
            ((long *)*puVar3,
             *(undefined4 *)((long)puVar3 + lVar2 * 4 + (long)iVar1 * 0x14 + 0x2279c));
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x40),param_9);
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x44),param_15);
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x48),param_16);
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x4c),param_11);
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x50),param_12);
  (**(code **)(*(long *)*puVar3 + 0xd0))((long *)*puVar3,*(undefined4 *)(param_7 + 0x54),param_17);
  _DAT_02760c1c = 0;
  DAT_02760c18 = param_6;
  DAT_02760c24 = local_84;
  (**(code **)(*(long *)*puVar3 + 0xb0))
            ((long *)*puVar3,*(undefined4 *)(param_7 + 0x100),&DAT_02760c18,1);
  FUN_00572640(param_1,param_2,param_3,param_4,*param_8,param_8[1],param_8[2],param_8[3],param_7,
               param_18);
  return 0;
}


