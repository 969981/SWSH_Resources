/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058f9b0; name: FUN_0058f9b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0058f9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,long param_12,undefined8 *param_13,
                  undefined4 *param_14,undefined4 param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  do {
    lVar4 = param_11;
    param_11 = *(long *)(lVar4 + 0x120);
  } while (param_11 != 0);
  plVar5 = *(long **)(lVar4 + 0xa8);
  do {
    lVar4 = param_12;
    param_12 = *(long *)(lVar4 + 0x120);
  } while (param_12 != 0);
  plVar6 = *(long **)(lVar4 + 0xa8);
  uVar3 = FUN_0059d300(param_10,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    FUN_0059d000(0,0);
    puVar7 = (undefined8 *)(param_9 + 0x30);
    (**(code **)(*(long *)*puVar7 + 0xe8))
              ((long *)*puVar7,
               *(undefined4 *)((long)puVar7 + (ulong)(param_14 != (undefined4 *)0x0) * 4 + 0x2277c))
    ;
    (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_9 + 0x40),plVar5);
    (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_9 + 0x44),plVar6);
    uVar1 = (**(code **)(*plVar5 + 0x80))(plVar5);
    uVar2 = (**(code **)(*plVar6 + 0x80))(plVar6);
    (**(code **)(*plVar5 + 0x78))(plVar5,4);
    (**(code **)(*plVar6 + 0x78))(plVar6,4);
    if (param_14 != (undefined4 *)0x0) {
      DAT_02760a1c = *param_14;
      DAT_02760a20 = param_14[1];
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,1);
    _DAT_02760c18 = *param_13;
    _DAT_02760c20 = param_13[1];
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,1);
    uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_15);
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*plVar5 + 0x78))(plVar5,uVar1);
    (**(code **)(*plVar6 + 0x78))(plVar6,uVar2);
  }
  return uVar3;
}


