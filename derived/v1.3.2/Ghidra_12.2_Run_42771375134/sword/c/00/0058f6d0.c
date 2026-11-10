/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058f6d0; name: FUN_0058f6d0
 */


/* WARNING: Removing unreachable block (ram,0x0058f8ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0058f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 *param_12,int param_13,
                  int param_14,int param_15,undefined4 param_16)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  do {
    lVar6 = param_11;
    param_11 = *(long *)(lVar6 + 0x120);
  } while (param_11 != 0);
  plVar7 = *(long **)(lVar6 + 0xa8);
  uVar5 = FUN_0059d300(param_10,0,0,1,0,0);
  if (-1 < (int)uVar5) {
    FUN_0059d000(0,0);
    iVar1 = *(int *)(param_9 + (ulong)(0 < param_14) * 8 + (ulong)(0 < param_15) * 4 + 0x2279c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_9 + 0x2279c);
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar1);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),plVar7);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),
               *(undefined8 *)(param_9 + 0x29ad8));
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),
               *(undefined8 *)(param_9 + 0x29ae0));
    uVar2 = (**(code **)(*plVar7 + 0x80))(plVar7);
    uVar3 = (**(code **)(**(long **)(param_9 + 0x29ad8) + 0x80))();
    uVar4 = (**(code **)(**(long **)(param_9 + 0x29ae0) + 0x80))();
    (**(code **)(*plVar7 + 0x78))(plVar7,4);
    (**(code **)(**(long **)(param_9 + 0x29ad8) + 0x78))(*(long **)(param_9 + 0x29ad8),4);
    (**(code **)(**(long **)(param_9 + 0x29ae0) + 0x78))(*(long **)(param_9 + 0x29ae0),4);
    DAT_02760a18 = (float)param_13;
    DAT_02760a1c = (float)param_14;
    DAT_02760a20 = 0.0;
    if (0.0 <= (float)param_15 / DAT_01d4c6b8) {
      DAT_02760a20 = (float)param_15 / DAT_01d4c6b8;
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,1);
    _DAT_02760c18 = *param_12;
    _DAT_02760c20 = param_12[1];
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,1);
    uVar5 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
    uVar5 = uVar5 & 0xffffffff;
    (**(code **)(*plVar7 + 0x78))(plVar7,uVar2);
    (**(code **)(**(long **)(param_9 + 0x29ad8) + 0x78))(*(long **)(param_9 + 0x29ad8),uVar3);
    (**(code **)(**(long **)(param_9 + 0x29ae0) + 0x78))(*(long **)(param_9 + 0x29ae0),uVar4);
  }
  return uVar5;
}


