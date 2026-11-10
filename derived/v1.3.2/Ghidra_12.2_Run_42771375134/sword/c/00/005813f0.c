/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005813f0; name: FUN_005813f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_005813f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,ulong param_10,ulong param_11,int param_12,undefined8 param_13,
                  long *param_14,undefined4 param_15)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  lVar1 = param_9 + ((long)param_12 + -1) * 4;
  puVar2 = (undefined4 *)(lVar1 + 0x22900);
  if ((param_11 & 1) == 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x228c0);
  }
  if ((param_10 & 1) != 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x22880);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar2);
  FUN_00573990(param_9,param_12,param_13,0,8);
  if ((param_11 & 1) != 0) {
    _DAT_02760c18 = 0x3f80000039aec33e;
    _DAT_02760c20 = 0x3c23d70a;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,1);
  }
  if (param_14 == (long *)0x0) {
    uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_15);
    return uVar4;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_14);
  uVar3 = (**(code **)(*param_14 + 0x80))(param_14);
  (**(code **)(*param_14 + 0x88))(param_14,1);
  uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_15);
  (**(code **)(*param_14 + 0x78))(param_14,uVar3);
  return uVar4 & 0xffffffff;
}


