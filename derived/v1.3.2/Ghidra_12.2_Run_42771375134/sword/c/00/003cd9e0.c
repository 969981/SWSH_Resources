/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd9e0; name: FUN_003cd9e0
 */


void FUN_003cd9e0(long *param_1,long *param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined8 param_6,uint param_7)

{
  long lVar1;
  short sVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  FUN_003c6e50(param_2,param_5 & 1);
  if (((*(byte *)((long)param_2 + 0x25) >> 5 & 1) != 0) &&
     (uVar3 = (**(code **)(*param_2 + 0x20))(param_2), (uVar3 & 1) != 0)) {
    plVar4 = (long *)param_2[6];
    uVar3 = (ulong)*(uint *)(param_2 + 7);
    local_98 = 0;
    local_90 = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*(long *)param_2[5] + 0x10))((long *)param_2[5],&local_54,&local_98);
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_58,&local_70);
    (**(code **)(**(long **)(*param_1 + 0x1068) + 8))
              (*(long **)(*param_1 + 0x1068),uVar3,local_54,local_98,local_90,local_58,local_70,
               local_68,(byte)param_3 & 1);
    plVar4 = (long *)param_1[0x13];
    *(long *)(*plVar4 + uVar3 * 8) = plVar4[2];
    plVar4[2] = uVar3;
  }
  switch(*(undefined1 *)((long)param_2 + 0x24)) {
  case 0:
    if ((param_3 & 3) != 0) {
      FUN_003d01e0(param_1,param_2,param_3,param_4,param_6,param_7 & 1);
    }
    (**(code **)*param_2)(param_2);
    *(int *)((long)param_1 + 0x96c) = *(int *)((long)param_1 + 0x96c) + -1;
    *param_2 = param_1[0x12f];
    param_1[0x12f] = (long)param_2;
    break;
  case 1:
    local_70 = 0xffffffffffffffff;
    local_74 = 0;
    local_68._0_4_ = 0xffff;
    lVar9 = param_2[5];
    lVar1 = param_2[6];
    uVar6 = 0;
    if (*(char *)((long)param_2 + 0x4e) != '\0') {
      uVar6 = 0x10;
    }
    *(undefined1 *)((long)param_2 + 0x4e) = 0;
    if ((uVar6 & *(ushort *)((long)param_2 + 0x4c)) != 0) {
      local_98 = FUN_003f8c90(*(undefined8 *)(lVar9 + 0x40));
      local_88 = FUN_003f8c90(*(undefined8 *)(lVar1 + 0x40));
      local_74 = (undefined1)((param_3 & 1) << 2);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + 0x50);
      lVar8 = *(long *)(*(long *)(lVar1 + 0x10) + 0x50);
      local_78 = uVar6;
      local_90 = FUN_003d9790(lVar7);
      local_80 = FUN_003d9790(lVar8);
      local_70 = CONCAT44(*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar9 + 0x48));
      local_68._0_4_ =
           CONCAT13(*(undefined1 *)(lVar8 + 0xe),
                    CONCAT12(*(undefined1 *)(lVar7 + 0xe),
                             CONCAT11(*(undefined1 *)(lVar8 + 0xb),*(undefined1 *)(lVar7 + 0xb))));
      lVar9 = *param_1;
      if (*(uint *)(lVar9 + 0x850) < (*(uint *)(lVar9 + 0x854) & 0x7fffffff)) {
        __dest = (void *)(*(long *)(lVar9 + 0x848) + (ulong)*(uint *)(lVar9 + 0x850) * 0x28);
        memcpy(__dest,&local_98,0x24);
        *(undefined1 *)((long)__dest + 0x24) = local_74;
        *(int *)(lVar9 + 0x850) = *(int *)(lVar9 + 0x850) + 1;
      }
      else {
        FUN_003d8470(lVar9 + 0x848,&local_98);
      }
      plVar4 = *(long **)(*param_1 + 0x858);
      if (*(uint *)(plVar4 + 1) < (*(uint *)((long)plVar4 + 0xc) & 0x7fffffff)) {
        puVar5 = (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0xc);
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_68;
        *puVar5 = local_70;
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      else {
        FUN_003d85d0(plVar4,&local_70);
      }
    }
    (**(code **)*param_2)(param_2);
    *(int *)((long)param_1 + 0xba4) = *(int *)((long)param_1 + 0xba4) + -1;
    *param_2 = param_1[0x176];
    param_1[0x176] = (long)param_2;
    break;
  case 2:
    (**(code **)*param_2)(param_2);
    *(int *)((long)param_1 + 0x1014) = *(int *)((long)param_1 + 0x1014) + -1;
    *param_2 = param_1[0x204];
    param_1[0x204] = (long)param_2;
    break;
  case 5:
    plVar4 = (long *)param_2[8];
    FUN_003d9400(param_2,((param_3 ^ 0xffffffff) & 3) == 0,param_4);
    (**(code **)*param_2)(param_2);
    *(int *)((long)param_1 + 0x124c) = *(int *)((long)param_1 + 0x124c) + -1;
    *param_2 = param_1[0x24b];
    param_1[0x24b] = (long)param_2;
    sVar2 = (short)plVar4[3] + -1;
    *(short *)(plVar4 + 3) = sVar2;
    if (sVar2 == 0) {
      *(int *)((long)param_1 + 0x734) = *(int *)((long)param_1 + 0x734) + -1;
      *plVar4 = param_1[0xe8];
      param_1[0xe8] = (long)plVar4;
    }
  }
  return;
}


