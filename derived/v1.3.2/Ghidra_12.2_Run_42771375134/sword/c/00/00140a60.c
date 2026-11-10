/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140a60; name: FUN_00140a60
 */


void FUN_00140a60(uint param_1,uint param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((int)param_4[2] != 0) {
    uVar5 = param_1;
    if (param_1 <= param_2) {
      uVar5 = param_2;
      param_2 = param_1;
    }
    uVar7 = param_2 | uVar5 << 0x10;
    uVar7 = uVar7 + (uVar7 << 0xf ^ 0xffffffff);
    uVar7 = (uVar7 ^ (int)uVar7 >> 10) * 9;
    uVar7 = uVar7 ^ (int)uVar7 >> 6;
    uVar7 = uVar7 + (uVar7 << 0xb ^ 0xffffffff);
    uVar7 = *(uint *)(*param_4 + (ulong)(*(uint *)(param_4 + 7) & (uVar7 ^ (int)uVar7 >> 0x10)) * 4)
    ;
    if (uVar7 != 0x3fffffff) {
      do {
        puVar1 = (uint *)(param_4[4] + (ulong)uVar7 * 8);
        uVar6 = (ulong)uVar7;
        if (*puVar1 == param_2 && puVar1[1] == uVar5) {
          if (puVar1 == (uint *)0x0) {
            return;
          }
          lVar3 = param_4[5];
          bVar2 = *(byte *)(lVar3 + uVar6);
          if ((bVar2 & 1) != 0) {
            *(byte *)(lVar3 + uVar6) = bVar2 | 2;
            return;
          }
          *(byte *)(lVar3 + uVar6) = bVar2 | 1;
          uVar5 = *(uint *)(param_5 + 1);
          uVar4 = (long)puVar1 - param_4[4];
          uVar6 = uVar4 >> 3;
          if (uVar5 == *(uint *)((long)param_5 + 0xc)) {
            FUN_001408f0(param_5,param_3);
            uVar5 = *(uint *)(param_5 + 1);
            uVar4 = (long)puVar1 - param_4[4];
          }
          *(uint *)(param_5 + 1) = uVar5 + 1;
          *(uint *)(*param_5 + (ulong)uVar5 * 4) = (uint)uVar6 & 0x1fffffff;
          *(byte *)(param_4[5] + ((long)uVar4 >> 3)) =
               *(byte *)(param_4[5] + ((long)uVar4 >> 3)) | 2;
          return;
        }
        uVar7 = *(uint *)(param_4[1] + uVar6 * 4);
      } while (uVar7 != 0x3fffffff);
    }
  }
  return;
}


