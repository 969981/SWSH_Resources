/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f2520; name: FUN_003f2520
 */


void FUN_003f2520(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  
  if (param_2 != 0) {
    uVar1 = param_1[6];
    uVar2 = *param_1;
    uVar6 = uVar2 * uVar1;
    if (uVar6 < param_2) {
      uVar3 = param_1[1];
      if ((ulong)uVar3 * (ulong)uVar2 == 0) {
        uVar6 = uVar2 * (uVar1 + 1);
        while( true ) {
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          if (uVar1 < (param_1[7] & 0x7fffffff)) {
            puVar5 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)uVar1 * 0x18);
            puVar5[2] = (ulong)uStack_64 << 0x20;
            puVar5[1] = 0;
            *puVar5 = 0;
            param_1[6] = param_1[6] + 1;
          }
          else {
            FUN_003f17c0(param_1 + 4,&local_78);
          }
          if (param_2 <= uVar6) break;
          uVar1 = param_1[6];
          uVar6 = uVar6 + uVar2;
        }
      }
      else {
        do {
          while( true ) {
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            plVar4 = (long *)FUN_00400d30();
            local_78 = (**(code **)(*plVar4 + 0x10))
                                 (plVar4,(ulong)uVar3 * (ulong)uVar2,"NonTrackedAlloc",
                                  "./../../Common/src\\CmPreallocatingPool.h",0x3c);
            if ((param_1[7] & 0x7fffffff) <= param_1[6]) break;
            puVar5 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)param_1[6] * 0x18);
            puVar5[2] = CONCAT44(uStack_64,local_68);
            puVar5[1] = local_70;
            *puVar5 = local_78;
            param_1[6] = param_1[6] + 1;
            uVar6 = uVar6 + uVar2;
            if (param_2 <= uVar6) {
              return;
            }
          }
          FUN_003f17c0(param_1 + 4,&local_78);
          uVar6 = uVar6 + uVar2;
        } while (uVar6 < param_2);
      }
    }
  }
  return;
}


