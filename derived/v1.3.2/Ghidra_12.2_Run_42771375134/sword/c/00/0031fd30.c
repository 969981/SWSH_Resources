/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031fd30; name: FUN_0031fd30
 */


long * FUN_0031fd30(undefined8 *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_30;
  uint local_24;
  
  local_24 = param_2 + 0x8fU & 0xffffff80;
  if ((*(int *)((long)param_1 + 0x5c) != 0) &&
     (uVar3 = local_24 + (local_24 << 0xf ^ 0xffffffff), uVar3 = (uVar3 ^ uVar3 >> 10) * 9,
     uVar3 = uVar3 ^ uVar3 >> 6, uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff),
     uVar3 = *(uint *)(param_1[8] +
                      (ulong)(*(int *)((long)param_1 + 0x4c) - 1U & (uVar3 ^ uVar3 >> 0x10)) * 4),
     uVar3 != 0xffffffff)) {
    lVar2 = param_1[6];
    do {
      uVar4 = (ulong)uVar3;
      if (*(uint *)(lVar2 + uVar4 * 0x10) == local_24) {
        if (lVar2 + uVar4 * 0x10 != 0) {
          lVar2 = lVar2 + uVar4 * 0x10;
          plVar6 = *(long **)(lVar2 + 8);
          lVar5 = *plVar6;
          *(long *)(lVar2 + 8) = lVar5;
          if (lVar5 == 0) {
            FUN_0031fea0(param_1 + 4,&local_24);
          }
          return plVar6 + 2;
        }
        break;
      }
      uVar3 = *(uint *)(param_1[7] + uVar4 * 4);
    } while (uVar3 != 0xffffffff);
  }
  if (local_24 < *(uint *)(param_1 + 0xc)) {
    local_24 = *(uint *)(param_1 + 0xc);
  }
  uVar1 = local_24;
  local_30 = (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,local_24,"RepX variable sized memory pool",
                        "./../../PhysXExtensions/src/serialization/Xml/SnXmlMemoryPool.h",0xc1);
  uVar3 = *(uint *)(param_1 + 3);
  if (uVar3 < (*(uint *)((long)param_1 + 0x1c) & 0x7fffffff)) {
    *(long *)(param_1[2] + (ulong)uVar3 * 8) = local_30;
    *(uint *)(param_1 + 3) = uVar3 + 1;
    local_24 = uVar1;
  }
  else {
    FUN_0031ffe0(param_1 + 1,&local_30);
  }
  *(uint *)(local_30 + 8) = local_24;
  return (long *)(local_30 + 0x10);
}


