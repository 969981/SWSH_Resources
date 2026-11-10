/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058f520; name: FUN_0058f520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0058f520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  do {
    lVar3 = param_11;
    param_11 = *(long *)(lVar3 + 0x120);
  } while (param_11 != 0);
  plVar4 = *(long **)(lVar3 + 0xa8);
  uVar2 = FUN_0059d300(param_10,0,0,1,0,0);
  if (-1 < (int)uVar2) {
    FUN_0059d000(0,0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x22794));
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),plVar4);
    uVar1 = (**(code **)(*plVar4 + 0x80))(plVar4);
    (**(code **)(*plVar4 + 0x78))(plVar4,5);
    DAT_02760a18 = param_17;
    DAT_02760a1c = param_18;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,1);
    _DAT_02760c18 = *param_12;
    _DAT_02760c20 = param_12[1];
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,1);
    uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_15);
    uVar2 = uVar2 & 0xffffffff;
    (**(code **)(*plVar4 + 0x78))(plVar4,uVar1);
  }
  return uVar2;
}


