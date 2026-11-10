/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7830; name: FUN_003a7830
 */


uint FUN_003a7830(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint local_48;
  
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uVar4 = FUN_003a8fe0(param_1 + 0x1ea8,param_2,&local_60);
  if ((uVar4 & 1) == 0) {
    FUN_003a79b0(param_1,param_3,param_4,param_5,0);
    uVar3 = FUN_0039ff10(param_1 + 0x10,param_2,param_6);
  }
  else {
    FUN_003982f0(*(undefined8 *)(*(long *)(param_1 + 0x1f10) + (ulong)local_48 * 0x10),
                 local_50._4_4_);
    uVar5 = 0xffffffff;
    if (local_48 < *(uint *)(param_1 + 0x1ef0)) {
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x1ee8) + (ulong)local_48 * 4);
    }
    FUN_003982f0(*(undefined8 *)(param_1 + 0x1ee0),uVar5);
    plVar6 = *(long **)(*(long *)(param_1 + 0x1f10) + (ulong)local_48 * 0x10);
    puVar7 = (uint *)(plVar6[2] + (local_50 >> 0x20) * 0x1c + 0x18);
    uVar3 = *puVar7;
    uVar2 = uVar3 >> 1 & 0xf;
    if (uVar2 != 0) {
      lVar1 = *plVar6 + (ulong)(uVar3 >> 5) * 4;
      uVar4 = 0;
      do {
        if (*(int *)(lVar1 + uVar4 * 4) == param_3) {
          *puVar7 = uVar3 & 0xffffffe1 | (uVar2 - 1) * 2;
          *(undefined4 *)(lVar1 + uVar4 * 4) = 0xffffffff;
          if (uVar2 - 1 != (int)uVar4) {
            lVar8 = (ulong)(uVar2 - 1) * 4;
            *(undefined4 *)(lVar1 + uVar4 * 4) = *(undefined4 *)(lVar1 + lVar8);
            *(undefined4 *)(lVar1 + lVar8) = 0xffffffff;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    uVar3 = 1;
    FUN_003a79b0(param_1,param_3,param_4,param_5,1);
    *(undefined1 *)(param_1 + 0x1f20) = 1;
  }
  return uVar3 & 1;
}


