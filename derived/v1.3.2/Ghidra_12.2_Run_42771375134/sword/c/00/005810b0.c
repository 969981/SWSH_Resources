/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005810b0; name: FUN_005810b0
 */


void FUN_005810b0(long param_1,long param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined8 param_6,uint param_7,uint param_8,undefined8 param_9,uint param_10,
                 undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  }
  uVar1 = *(uint *)(param_2 + 0x54);
  uVar2 = *(uint *)(param_2 + 0x58);
  iVar3 = FUN_0059d300(param_2,0,0,1,0,0);
  if (iVar3 < 0) {
    return;
  }
  FUN_0059d000(0,0);
  FUN_00580a50(0,0,(float)uVar1,(float)uVar2,*param_4,param_4[1],*param_5,param_5[1],param_1,
               param_3 & 1,param_6,param_7 & 1,param_8 & 1,param_9,param_11);
  return;
}


