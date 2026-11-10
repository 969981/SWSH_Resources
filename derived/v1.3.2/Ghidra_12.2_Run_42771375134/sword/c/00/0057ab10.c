/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057ab10; name: FUN_0057ab10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0057ab10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10,long *param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined4 uVar1;
  ulong uVar2;
  
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x20758));
  _DAT_02760c18 = *param_10;
  _DAT_02760c20 = param_10[1];
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,1);
  if (param_11 == (long *)0x0) {
    uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_13);
    return uVar2;
  }
  uVar1 = (**(code **)(*param_11 + 0x80))(param_11);
  (**(code **)(*param_11 + 0x78))(param_11,4);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_13);
  (**(code **)(*param_11 + 0x78))(param_11,uVar1);
  return uVar2 & 0xffffffff;
}


