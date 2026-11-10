/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00593c90; name: FUN_00593c90
 */


undefined8
FUN_00593c90(float param_1,long param_2,undefined8 param_3,long param_4,long param_5,
            undefined8 param_6,uint param_7,undefined4 param_8,undefined8 param_9,byte param_10,
            undefined8 param_11,undefined4 param_12,undefined4 param_13)

{
  float fVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  uint in_stack_ffffffffffffff28;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  long local_80;
  long lStack_78;
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_10 & 1) != 0) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
    }
    fVar1 = DAT_01d4c1f8;
    if ((param_7 & 1) == 0) {
      fVar1 = DAT_01d4c418;
    }
    local_84 = 0x3f733333;
    local_b4 = 0x3f8000003f733333;
    local_ac = 0x3f8000003f800000;
    local_a4 = 0x3f8000003f800000;
    local_9c = 0x3f8000003f800000;
    local_94 = 0x3f8000003f800000;
    local_8c = 0x3f8000003f800000;
    fVar6 = fVar1 + DAT_01d4bcf0;
    FUN_00590830((DAT_01d4bcf0 / fVar6) * param_1,param_2,param_3,param_5,param_4,0xd,&local_b4,1,0,
                 param_9,in_stack_ffffffffffffff28 & 0xffffff00,param_12,param_13);
    FUN_00593a70((fVar1 / fVar6) * param_1,param_2,param_3,param_5,param_7 & 1,0,param_9,0,0,
                 param_12,param_13);
    lVar4 = param_4;
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x120);
    } while (lVar4 != 0);
    plVar2 = *(long **)(lVar5 + 0xa8);
    (**(code **)(*plVar2 + 0x88))(plVar2,1);
    lVar4 = param_5;
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x120);
    } while (lVar4 != 0);
    plVar2 = *(long **)(lVar5 + 0xa8);
    (**(code **)(*plVar2 + 0x88))(plVar2,1);
    local_80 = param_4;
    lStack_78 = param_5;
    FUN_0058d2d0(0x3f800000,0x3f800000,param_2,param_6,2,&local_80,0,param_8,0);
    do {
      lVar4 = param_4;
      param_4 = *(long *)(lVar4 + 0x120);
    } while (param_4 != 0);
    plVar2 = *(long **)(lVar4 + 0xa8);
    (**(code **)(*plVar2 + 0x88))(plVar2,0);
    do {
      lVar4 = param_5;
      param_5 = *(long *)(lVar4 + 0x120);
    } while (param_5 != 0);
    plVar2 = *(long **)(lVar4 + 0xa8);
    (**(code **)(*plVar2 + 0x88))(plVar2,0);
    uVar3 = 0;
  }
  return uVar3;
}


